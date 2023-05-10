package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite a altura do cililindro: ");
        double h = scanner.nextDouble();
        System.out.print("Digite o raio do cililindro: ");
        double r = scanner.nextDouble();

        double v = 3.14 * (r * r) * h;

        System.out.printf("O volume do cilindro é: %.2f", v);
    }
}