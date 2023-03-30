#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max_gastos 30 //30 dias do mes

typedef struct{
    int dia;
    char nome[120];
    float valor;
} Gasto;

Gasto lista_gastos[max_gastos]; //gastos cadastrados
int total_gastos = 0; //total de gastos

//estilizacao
void linha(){
    for(int i = 0; i < 50; i++) printf("-");
    return;
}

//verifica se o arquivo existe
int verifica_arquivo(){
    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");
    if(arquivo){
        fclose(arquivo);
        return 1;
    }
    fclose(arquivo);
    return 0;
}

//leitura do arquivo
void ler_arquivo(){
    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");
    if(arquivo == NULL){
        printf("\nErro ao abrir o arquivo!\n");
        system("pause");
        return;
    }

    fscanf(arquivo, "%i\n", &total_gastos);

    for(int i = 0; i < total_gastos; i++){
        fscanf(arquivo, "%i\n", &lista_gastos[i].dia);
        fscanf(arquivo, "%119[^\n]", &lista_gastos[i].nome);
        fscanf(arquivo, "%f\n", &lista_gastos[i].valor);
    }

    fclose(arquivo);

    printf("\n%i gastos carregados do arquivo.\n", total_gastos);
    system("pause");
    system("cls");
    return;
}

//salvar dados no arquivo
void salvar_arquivo(){
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");
    if(arquivo == NULL){
        printf("\nErro ao abrir o arquivo!\n");
        system("pause");
        return;
    }

    fprintf(arquivo, "%i\n", total_gastos);

    for(int i = 0; i < total_gastos; i++){
        fprintf(arquivo, "%i\n", lista_gastos[i].dia);
        fprintf(arquivo, "%s\n", lista_gastos[i].nome);
        fprintf(arquivo, "%f\n", lista_gastos[i].valor);
    }

    fclose(arquivo);

    return;
}

//escreve um gasto especifico
void digita_gasto(int i){
    linha();
    printf("\nDia do gasto: %i\n", lista_gastos[i].dia);
    printf("\nNome do gasto: %s\n", lista_gastos[i].nome);
    printf("\nValor do gasto: %.2f\n", lista_gastos[i].valor);
    linha();

    return;
}

//lista os gastos cadastrados
void listar_todos_gastos(){
    system("cls");
    printf("\nGastos cadastrados:\n");
    for(int i = 0; i < total_gastos; i++){
        digita_gasto(i);
    }
    printf("\n");
    system("pause");
    return;
}

//cadastra o gasto de um dia
void cadastro(){
    system("cls");
    Gasto g;

    printf("\nCadastrar gasto:\n");

    linha();
    printf("\nDigite o dia: ");
    scanf("%i", &g.dia);
    printf("\nDigite um nome para esse gasto: ");
    setbuf(stdin, NULL);
    scanf("%119[^\n]", g.nome);
    printf("\nDigite o valor: ");
    scanf("%f", &g.valor);
    linha();

    lista_gastos[total_gastos++] = g;

    printf("\nGasto do dia %i cadastrado com sucesso!\n", g.dia);
    system("pause");

    salvar_arquivo();
    printf("\nArquivo salvo com sucesso!\n");
    system("pause");

    system("cls");
    return;
}

//altera um gasto
void alterar_gasto(){
    system("cls");

    int dia, opcao;

    linha();
    printf("\nDigite o dia do gasto que deseja alterar: ");
    setbuf(stdin, NULL);
    scanf("%i", &dia);
    linha();

    for(int i = 0; i < total_gastos; i++){
        if(lista_gastos[i].dia == dia){
            system("cls");
            digita_gasto(i);
            printf("\nO que deseja alterar:\n1)dia\n2)nome\n3)valor\n-> ");
            setbuf(stdin, NULL);
            scanf("%i", &opcao);

            linha();
            switch(opcao){
                case 1:
                    printf("\nDigite o novo dia: ");
                    scanf("%i", &lista_gastos[i].dia);
                    break;
                case 2:
                    printf("\nDigite o novo nome: ");
                    setbuf(stdin, NULL);
                    scanf("%119[^\n]", lista_gastos[i].nome);
                    break;
                case 3:
                    printf("\nDigite o novo valor: ");
                    scanf("%i", &lista_gastos[i].valor);
                    break;
                default:
                    printf("\nOpção inválida!\n");
                    system("pause");
                    system("cls");
            }
            linha();
            printf("\n\nValor alterado com sucesso!\n");
            system("pause");

            salvar_arquivo();
            printf("\nArquivo salvo com sucesso!\n");
            system("pause");
        }
    }
    system("cls");
    return;
}

//remove um gasto
void remover_gasto(){
    system("cls");

    int dia, var;

    linha();
    printf("\nDigite o dia do gasto que deseja remover: ");
    setbuf(stdin, NULL);
    scanf("%i", &dia);
    linha();

    for(int i = 0; i < total_gastos; i++){
        if(lista_gastos[i].dia == dia){
            var = i;
            for(int j = var + 1; j < total_gastos; j++, var++){
                lista_gastos[var] = lista_gastos[j];
            }
            total_gastos--;
        }
    }

    printf("\n\nGasto removido com sucesso!\n");
    system("pause");

    salvar_arquivo();
    printf("\nArquivo salvo com sucesso!\n");
    system("pause");

    return;
}

//menu de opcoes
void menu(){
    int o;
    do{
        system("cls");
        linha();
        printf("\nMenu:\n");
        printf("1) Cadastrar gasto\n2) Listar todos os gastos cadastrados\n3) Alterar um gasto específico\n4) Remover um gasto específico\n5) Sair\n");
        linha();
        printf("\nOpção desejada: ");
        setbuf(stdin, NULL);
        scanf("%i", &o);
        linha();

        switch(o){
            case 1:
                cadastro();
                break;
            case 2:
                if(total_gastos)
                    listar_todos_gastos();
                else{
                    printf("\nNão há gastos cadastrados!\n");
                    system("pause");
                }
                break;
            case 3:
                if(total_gastos)
                    alterar_gasto();
                else{
                    printf("\nNão há gastos cadastrados!\n");
                    system("pause");
                }
                break;
            case 4:
                if(total_gastos)
                    remover_gasto();
                else{
                    printf("\nNão há gastos cadastrados!\n");
                    system("pause");
                }
                break;
            case 5:
                linha();
                printf("\nSaindo...\n");
                system("pause");
                break;
            default:
                printf("\nOpção inválida!\n");
                system("pause");
                system("cls");
        }
    }while(o != 5);
}

int main()
{
    setlocale(LC_ALL, "");

    int existe = verifica_arquivo();
    if(existe)
        ler_arquivo();

    menu();
    return 0;
}
