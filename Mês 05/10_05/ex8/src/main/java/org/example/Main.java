package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a nota de P1: ");
        double p1 = scanner.nextDouble();
        System.out.print("Digite a nota de T1: ");
        double t1 = scanner.nextDouble();
        System.out.print("Digite a nota de LE: ");
        double le = scanner.nextDouble();

        System.out.print("Digite a nota de P2: ");
        double p2 = scanner.nextDouble();
        System.out.print("Digite a nota de T2: ");
        double t2 = scanner.nextDouble();
        System.out.print("Digite a nota de SE: ");
        double se = scanner.nextDouble();

        double mediaFinal = ((p1 * 0.6 + t1 * 0.3 + le * 0.1) + (p2 * 0.5 + t2 * 0.35 + se * 0.15)) / 2;

        System.out.printf("A média final é %.2f", mediaFinal);
    }
}