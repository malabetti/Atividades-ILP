#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define capacidade_oficina 100

typedef struct{
	int dia, ano, mes;
} Data;

typedef struct _cadastro{
	int numcad;
	char fab[30];
	char modelo[30];
	int cilindradas;
	char cor[30];
	Data entrada;
	int ano;
	char dono[30];
	char problemas[128];
} Moto;

Moto motos[capacidade_oficina];
int qtd = 0;

void linha(){
	for(int i=0; i<50; i++) printf("-");
	return;
}

Moto cadastro(Moto m){
	printf("\nCadastrar moto:\n");
	linha();
	//numcad
	printf("\nNúmero de cadastro: ");
	scanf("%i", &m.numcad);
	linha();
	//modelo
	printf("\nModelo: ");
	setbuf(stdin, NULL);
	gets(m.modelo);
	linha();
	//fab
	printf("\nFabricante: ");
	setbuf(stdin, NULL);
	gets(m.fab);
	linha();
	//cilindradas
	printf("\nCilindradas: ");
	scanf("%i", &m.cilindradas);
	linha();
	//cor
	printf("\nCor: ");
	setbuf(stdin, NULL);
	gets(m.cor);
	linha();
	//ano
	printf("\nAno de fabricação: ");
	scanf("%i", &m.ano);
	linha();
	//dono
	printf("\nNome do dono: ");
	setbuf(stdin, NULL);
	gets(m.dono);
	linha();
	//problemas
	printf("\nProblema(s): ");
	setbuf(stdin, NULL);
	gets(m.problemas);
	linha();
	//data
	printf("\nData de entrada (dd mm aaaa): ");
	scanf("%i %i %i", &m.entrada.dia, &m.entrada.mes, &m.entrada.ano);
	return m;
}

void apresenta(Moto m){
	printf("\nMoto cadadastra %i:\n", m.numcad);
	linha();
	printf("\nModelo: %s\n", m.modelo);
	printf("\nFabricante: %s\n", m.fab);
	printf("\nCilindradas: %i\n", m.cilindradas);
	printf("\nCor: %s\n", m.cor);
	printf("\nAno de fabricação: %i\n", m.ano);
	printf("\nProblemas: %s\n", m.problemas);
	printf("\nDono: %s\n", m.dono);
	printf("\nData de entrada: %i/%i/%i\n", m.entrada.dia, m.entrada.mes, m.entrada.ano);
	linha();
	return;
}

void editar(Moto m, int i){
	int opcao;
	do{
		printf("\nEdição\n");
		linha();
		printf("\n1 - Número de cadastro\n");
		printf("\n2 - Fabricante\n");
		printf("\n3 - Modelo\n");
		printf("\n4 - Cilindradas\n");
		printf("\n5 - Cor\n");
		printf("\n6 - Data de entrada\n");
		printf("\n7 - Ano de fabricação\n");
		printf("\n8 - Nome do dono\n");
		printf("\n9 - Problemas apresentados\n");
		printf("\n10 - Sair\n");
		linha();

		printf("\nDigite a opção escolhida: ");
		scanf("%i", &opcao);

		linha();
		switch(opcao){
			case 1:
				printf("\nNúmero de cadastro: ");
				scanf("%i", &m.numcad);
				break;
			case 2:
				printf("\nFabricante: ");
				setbuf(stdin, NULL);
				gets(m.fab);
				break;
			case 3:
				printf("\nModelo: ");
				setbuf(stdin, NULL);
				gets(m.modelo);
				break;
			case 4:
				printf("\nCilindradas: ");
				scanf("%i", &m.cilindradas);
				break;
			case 5:
				printf("\nCor: ");
				setbuf(stdin, NULL);
				gets(m.cor);
				break;
			case 6:
				printf("\nData de entrada (dd mm aaaa): ");
				scanf("%i %i %i", &m.entrada.dia, &m.entrada.mes, &m.entrada.ano);
				break;
			case 7:
				printf("\nAno de fabricação: ");
				scanf("%i", &m.ano);
				break;
			case 8:
				printf("\nNome do dono: ");
				setbuf(stdin, NULL);
				gets(m.dono);
				break;
			case 9:
				printf("\nProblema(s): ");
				setbuf(stdin, NULL);
				gets(m.problemas);
				break;
			case 10:
				printf("\nSaindo!\n");
				break;
			default:
				printf("\nOpção inválida!\n");
				system("pause");
				break;
		}
		linha();
	}while(opcao != 10);
	motos[i] = m;
	return;
}

int busca(char id[]){
	int achado = 0;
	char escolha;
	for(int i = 0; i < qtd; i++){
        system("cls");
		if(!strcmp(id, motos[i].modelo)){
			apresenta(motos[i]);
			achado++;
			printf("\n3.1 - Deseja editar a moto? (s/n) ");
			setbuf(stdin, NULL);
			escolha = getchar();
			if(escolha == 's' || escolha == 'S')
				editar(motos[i], i);
		}
	}
	if(!achado) printf("\nModelo não encontrado!\n");
}


int main(void) {
	setlocale(LC_ALL, "");

	int opcao;
	char modelo_procura[30];

	do{
		printf("\nMenu\n");
		linha();
		printf("\n1 - Listar todas as motos\n");
		printf("\n2 - Cadastrar nova moto\n");
		printf("\n3 - Buscar por modelo\n");
		printf("\n4 - Sair\n");
		linha();

		printf("\nDigite a opção escolhida: ");
		scanf("%i", &opcao);

		switch(opcao){
			case 1:
				if(qtd == 0) printf("\nNão há motos cadastradas\n");
				else
					for(int i = 0; i < qtd; i++)
						apresenta(motos[i]);
                printf("\n");
                system("pause");
				break;
			case 2:
				motos[qtd] = cadastro(motos[qtd]);
				qtd++;
				break;
			case 3:
				if(qtd == 0) printf("\nNão há motos cadastradas\n");
				else{
					printf("\nModelo que deseja buscar: ");
					setbuf(stdin, NULL);
					gets(modelo_procura);
					busca(modelo_procura);
				}
				printf("\n");
				system("pause");
				break;
			case 4:
				printf("\nSaindo!\n");
				printf("\n");
				system("pause");
				break;
			default:
				printf("\nOpção inválida!\n");
				printf("\n");
				system("pause");
				break;
		}
        system("cls");
	}while(opcao != 4);

  return 0;
}
