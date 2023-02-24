package main;

import java.util.Scanner;
import java.lang.Math;

public class Ex_3 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        //Entrada de dados e crítica de dados
        System.out.println("Digite o seu peso (Kg): ");
        double peso = sc.nextDouble();

        while(peso <= 0 || peso >= 300){
            System.out.println("Peso inválido. Digite o seu peso(Kg) correto: ");
            peso = sc.nextDouble();
        }

        System.out.println("Digite sua altura (m): ");
        double altura = sc.nextDouble();

        while(altura <= 0 || altura > 2.5){
            System.out.println("Altura inválida. Digite sua altura(m) correta: ");
            altura = sc.nextDouble();
        }

        //Cálculo do IMC, definição da categoria e saída de dados
        double imc = peso / (Math.pow(altura, 2));
        System.out.printf("Seu IMC é: " + "%.2f", imc);
        System.out.println();

        if (imc < 18.5){
            System.out.println("Você está abaixo do peso!");
        }

        else if (imc >= 18.5 && imc < 24.9){
            System.out.println("Você tem o peso normal!");
        }

        else if(imc >= 24.9 && imc < 29.9){
            System.out.println("Você está com sobrepeso!");
        }

        else if (imc >= 29.9 && imc < 34.9){
            System.out.println("Você está com Obesidade grau 1!");
        }

        else if (imc >= 34.9 && imc < 39.9){
            System.out.println("Você está com Obesidade grau 2!");
        }

        else{
            System.out.println("Você está com Obesidade grau 3!");
        }

        sc.close();
    }

}
