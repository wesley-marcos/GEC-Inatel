package principal;

import rodoviaria.Rodoviaria;

import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Rodoviaria rod1 = new Rodoviaria();
        Rodoviaria rod2 = new Rodoviaria();
        Rodoviaria rod3 = new Rodoviaria();
        Rodoviaria rod4 = new Rodoviaria();

        int i = 1;

        System.out.println();
        System.out.println("Entre com o preço da passagem do ônibus " + i + " :");
        rod1.o1.setPrecoPassagem(sc.nextFloat());
        sc.nextLine();
        System.out.println("Entre com o nome da companhia do ônibus " + i + " :");
        rod1.o1.setCompanhia(sc.nextLine());

        sc.nextLine();
        System.out.println("Entre com o nome da companhia do ônibus " + (i+1) + " :");
        rod2.o1.setCompanhia(sc.nextLine());

        System.out.println("Entre com o preço da passagem do ônibus " + (i+2) + " :");
        rod3.o1.setPrecoPassagem(sc.nextFloat());
        sc.nextLine();
        System.out.println("Entre com o nome da companhia do ônibus " + (i+2) + " :");
        rod3.o1.setCompanhia(sc.nextLine());

        System.out.println("Entre com o preço da passagem do ônibus " + (i+3) + " :");
        rod4.o1.setPrecoPassagem(sc.nextFloat());
        sc.nextLine();
        System.out.println("Entre com o nome da companhia do ônibus " + (i+3) + " :");
        rod4.o1.setCompanhia(sc.nextLine());

        System.out.println();
        rod1.somaPassagens(rod1.o1);
        rod2.somaPassagens(rod2.o1);
        rod3.somaPassagens(rod3.o1);
        rod4.somaPassagens(rod4.o1);

        rod1.mostraInfo();

    }

}
