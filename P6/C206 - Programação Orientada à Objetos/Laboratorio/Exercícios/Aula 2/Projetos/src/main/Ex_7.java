package main;

import java.util.Scanner;

public class Ex_7 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        //Entrada de dados
        System.out.println("Entre com um valor em R$: ");
        double valor = sc.nextDouble();
        double preco = 2.75;
        int viagens = (int) (valor/preco);
        System.out.println("Você poderá fazer " + viagens + " viagens!");

    }
}
