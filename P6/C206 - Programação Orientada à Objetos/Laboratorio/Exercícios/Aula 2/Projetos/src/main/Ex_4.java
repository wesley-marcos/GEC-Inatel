package main;

import java.util.Scanner;

public class Ex_4 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        //Entrada de dados e declaração de variáveis
        System.out.println("Entre com dois números: ");
        double num1 = sc.nextDouble();
        double num2 = sc.nextDouble();
        char op1 = '+';
        char op2 = '-';
        char op3 = '*';
        char op4 = '/';
        double resultado = 0;

        //Entrada da operação e execução da mesma
        System.out.println("Escolha uma operação à ser feita: ");
        char escolha = sc.next().charAt(0);

        if (escolha == '+'){
            resultado = num1 + num2;
        }

        else if (escolha == '-'){
            resultado = num1 - num2;
        }

        else if (escolha == '*'){
            resultado = num1 * num2;
        }

        else if (escolha == '/'){
            resultado = num1 / num2;
        }

        //Saída de dados
        System.out.println(num1 + " " + escolha + " " + num2 + " = " + resultado);

        sc.close();
    }
}
