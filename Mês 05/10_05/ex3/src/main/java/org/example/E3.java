package org.example;

import java.util.Scanner;

public class E3 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o nome do produto: ");
        String nome = scanner.nextLine();
        System.out.print("Digite o valor do produto: ");
        double valor = scanner.nextFloat();

        double vista = valor - (valor/10);
        double prazo = (valor + (valor/100 * 5)) / 3;

        System.out.println("Nome: " + nome);
        System.out.println("Valor do produto à vista: " + vista);
        System.out.println("Valor das 3 parcelas: " + prazo);
    }
}
