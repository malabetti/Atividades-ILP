package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite em que ano você nasceu: ");
        int nascimento = scanner.nextInt();

        int anos = 2023 - nascimento;
        int meses = anos * 12;
        int dias = meses * 30;
        int minutos = (dias * 24) * 60;
        int segundos = minutos * 60;

        System.out.printf("Voce ja viveu %d anos, %d meses, %d dias, %d minutos, %d segundos.\n", anos, meses, dias, minutos, segundos);
    }
}