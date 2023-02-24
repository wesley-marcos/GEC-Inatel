package main;

import java.util.Scanner;

public class Ex_5 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        //Entrada de dados e declaração de variáveis
        System.out.println("Entre com as duas notas: ");
        double np1 = sc.nextDouble();
        double np2 = sc.nextDouble();
        double media = (np1 + np2) / 2;
        int resultado = 0;

        //Obtendo a parte fracionária da média das notas
        resultado = (int) media;
        resultado = (int)Math.round((media - (int)media) * 100);

        //Condição para arredondamento de forma correta
        if (resultado > 0 && resultado < 50){
            resultado = (int) media;
            System.out.println("Sua média final é " + resultado);
        }

        else if (resultado >= 50){
            resultado = (int) media + 1;
            System.out.println("Sua média final é " + resultado);
        }

        sc.close();
    }
}
