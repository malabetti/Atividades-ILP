package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o tamanho do lado 1 em m: ");
        double l1 = scanner.nextDouble();
        System.out.print("Digite o tamanho do lado 2 em m: ");
        double l2 = scanner.nextDouble();

        System.out.printf("O perímetro do terreno é %.2f m\n", l1 * 2 + l2 * 2);
        System.out.printf("A área do terreno é %.2f m2\n", l1 * l2);
    }
}