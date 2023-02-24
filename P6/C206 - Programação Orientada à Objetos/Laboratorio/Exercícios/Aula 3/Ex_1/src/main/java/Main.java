import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        System.out.println("-------------- Exercício 1 --------------------");
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite dois números: ");
        double num1 = sc.nextDouble();
        double num2 = sc.nextDouble();
        Calculadora operacao = new Calculadora();
        System.out.println("Escolha uma operação à ser feita entre os números: ");
        System.out.println("1 - somar");
        System.out.println("2 - subtrair");
        System.out.println("3 - multiplicar");
        System.out.println("4 - dividir");
        int escolha = sc.nextByte();

        //Condições para a escolha

        if(escolha == 1){
            System.out.println(num1 + " + " + num2 + " = " + operacao.somar(num1, num2));
        }

        else if(escolha == 2){
            System.out.println(num1 + " - " + num2 + " = " + operacao.subtrair(num1, num2));
        }

        else if(escolha == 3){
            System.out.println(num1 + " * " + num2 + " = " + operacao.multiplicar(num1, num2));
        }

        else if(escolha == 4){

            if (num2 == 0){

                while (num2 == 0){
                    System.out.println("Não se pode fazer divisão por 0! Digite um número diferente de 0: ");
                    num2 = sc.nextDouble();
                }

                System.out.println(num1 + " / " + num2 + " = " + operacao.dividir(num1, num2));
            }
            else{
                System.out.println(num1 + " / " + num2 + " = " + operacao.dividir(num1, num2));
            }
        }

        System.out.println("-------------- Exercício 2 --------------------");
    }

}
