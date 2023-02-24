package main;

import java.util.Scanner;

public class Ex_6 {

    public static void main(String[] args) {

        //Declaração de variáveis e Entrada de dados
        double salario_minimo = 998;
        double preco_hora = 9.30;
        double gerente = salario_minimo * 3;
        double engenheiro = salario_minimo * 7;
        double terceiros = preco_hora * 8 * 22;

        //Saída de dados
        System.out.println("O salário do gerente é de R$" + gerente);
        System.out.println("O salário do engenheiro é de R$" + engenheiro);
        System.out.print("O salário dos servidores terceirizados é de R$");
        System.out.printf("%.2f", terceiros);
    }
}
