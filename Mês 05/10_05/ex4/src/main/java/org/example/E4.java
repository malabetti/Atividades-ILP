package org.example;

import java.util.Scanner;

public class E4 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Quantos maços de cigarro você fuma por dia: ");
        int macos = scanner.nextInt();
        System.out.print("Digite o valor do maço: ");
        float valor = scanner.nextFloat();
        System.out.print("Digite há quantos anos você fuma: ");
        int tempo = scanner.nextInt();

        float vfinal = ((macos * 365) * tempo) * valor;

        System.out.println("Valor gasto em cigarros: R$" + vfinal);
    }
}