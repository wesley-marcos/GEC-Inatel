import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("---------------- Exercício 1 ----------------------");/*
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

        System.out.println(" ");
        sc.nextLine();
        System.out.println(" ");
*/
        System.out.println("---------------- Exercício 3 ----------------------");

        //Criando as instâncias
        Carro carro1 = new Carro();
        Carro carro2 = new Carro();
        Carro carro3 = new Carro();

        Motor motor1 = new Motor();
        Motor motor2 = new Motor();
        Motor motor3 = new Motor();

        carro1.motor = motor1;
        carro2.motor = motor2;
        carro3.motor = motor3;

        //Carro 1
        System.out.println("------ Entre com as informações do Carro 1 ------");
        System.out.println("Qual a cor do carro?");
        carro1.cor = sc.nextLine();
        System.out.println("Qual a marca do carro?");
        carro1.marca = sc.nextLine();
        System.out.println("Qual o modelo do carro?");
        carro1.modelo = sc.nextLine();
        System.out.println("Qual a velocidade máxima do carro?");
        carro1.velocidade_maxima = sc.nextDouble();
        System.out.println("Qual o tipo do motor (E -> Eletrico ou M -> Mecanico)?");
        carro1.motor.tipo = sc.next().charAt(0);

        if (carro1.motor.tipo == 'M' || carro1.motor.tipo == 'm'){
            System.out.println("Qual a potência do motor? (CVV)");
            carro1.motor.potencia = sc.nextInt();
        }

        else{
            carro1.motor.tipo = 'E';
        }

        System.out.println("O carro está ligado? (S/N)");
        carro1.ligado = sc.next().charAt(0);

        while(!(carro1.ligado == 'S' || carro1.ligado == 's' || carro1.ligado == 'N' || carro1.ligado == 'n')){

            System.out.println("Opção Incorreta! Selecione apenas S ou N.");
            carro1.ligado = sc.next().charAt(0);
        }

        if(carro1.ligado == 'S' || carro1.ligado == 's'){
            carro1.ligado = carro1.ligar(carro1.ligado);

            System.out.println("Você quer acelerar? (S/N)");
            carro1.acelerar = sc.next().charAt(0);

            if(carro1.acelerar == 'S' || carro1.acelerar == 's'){

                System.out.println("Por quanto tempo irá acelerar? (1 à 60 segundos)");
                carro1.tempo_acelerar = sc.nextDouble();

                while (carro1.tempo_acelerar < 1 || carro1.tempo_acelerar > 60){
                    System.out.println("Tempo Inválido. Escolha entre 1 à 60 segundos!");
                    carro1.tempo_acelerar = sc.nextDouble();
                }

                carro1.acelerar(carro1.tempo_acelerar);
            }

        }

        System.out.println(" ");
        sc.nextLine();
        System.out.println(" ");

        System.out.println("------ Entre com as informações do Carro 2 ------");
        System.out.println(" ");
        System.out.println("Qual a cor do carro?");
        carro2.cor = sc.nextLine();
        System.out.println("Qual a marca do carro?");
        carro2.marca = sc.nextLine();
        System.out.println("Qual o modelo do carro?");
        carro2.modelo = sc.nextLine();
        System.out.println("Qual a velocidade máxima do carro?");
        carro2.velocidade_maxima = sc.nextDouble();
        System.out.println("Qual o tipo do motor (E -> Eletrico ou M -> Mecanico)?");
        carro2.motor.tipo = sc.next().charAt(0);

        if (carro2.motor.tipo == 'M' || carro2.motor.tipo == 'm'){
            System.out.println("Qual a potência do motor? (CVV)");
            carro2.motor.potencia = sc.nextInt();
        }

        else{
            carro2.motor.tipo = 'E';
        }

        System.out.println("O carro está ligado? (S/N)");
        carro2.ligado = sc.next().charAt(0);

        while(!(carro2.ligado == 'S' || carro2.ligado == 's' || carro2.ligado == 'N' || carro2.ligado == 'n')){

            System.out.println("Opção Incorreta! Selecione apenas S ou N.");
            carro2.ligado = sc.next().charAt(0);
        }

        if(carro2.ligado == 'S' || carro2.ligado == 's'){
            carro2.ligado = carro2.ligar(carro2.ligado);

            System.out.println("Você quer acelerar? (S/N)");
            carro2.acelerar = sc.next().charAt(0);

            if(carro2.acelerar == 'S' || carro2.acelerar == 's'){

                System.out.println("Por quanto tempo irá acelerar? (1 à 60 segundos)");
                carro2.tempo_acelerar = sc.nextDouble();

                while (carro2.tempo_acelerar < 1 || carro2.tempo_acelerar > 60){
                    System.out.println("Tempo Inválido. Escolha entre 1 à 60 segundos!");
                    carro2.tempo_acelerar = sc.nextDouble();
                }

                carro2.acelerar(carro2.tempo_acelerar);
            }

        }

        System.out.println(" ");
        sc.nextLine();
        System.out.println(" ");

        System.out.println("------ Entre com as informações do Carro 3 ------");
        System.out.println("Qual a cor do carro?");
        carro3.cor = sc.nextLine();
        System.out.println("Qual a marca do carro?");
        carro3.marca = sc.nextLine();
        System.out.println("Qual o modelo do carro?");
        carro3.modelo = sc.nextLine();
        System.out.println("Qual a velocidade máxima do carro?");
        carro3.velocidade_maxima = sc.nextDouble();
        System.out.println("Qual o tipo do motor (E -> Eletrico ou M -> Mecanico)?");
        carro3.motor.tipo = sc.next().charAt(0);

        if (carro3.motor.tipo == 'M' || carro3.motor.tipo == 'm'){
            System.out.println("Qual a potência do motor? (CVV)");
            carro3.motor.potencia = sc.nextInt();
        }

        else{
            carro3.motor.tipo = 'E';
        }

        System.out.println("O carro está ligado? (S/N)");
        carro3.ligado = sc.next().charAt(0);

        while(!(carro3.ligado == 'S' || carro3.ligado == 's' || carro3.ligado == 'N' || carro3.ligado == 'n')){

            System.out.println("Opção Incorreta! Selecione apenas S ou N.");
            carro3.ligado = sc.next().charAt(0);
        }

        if(carro3.ligado == 'S' || carro3.ligado == 's'){
            carro3.ligado = carro3.ligar(carro1.ligado);

            System.out.println("Você quer acelerar? (S/N)");
            carro3.acelerar = sc.next().charAt(0);

            if(carro3.acelerar == 'S' || carro3.acelerar == 's'){

                System.out.println("Por quanto tempo irá acelerar? (1 à 60 segundos)");
                carro3.tempo_acelerar = sc.nextDouble();

                while (carro3.tempo_acelerar < 1 || carro3.tempo_acelerar > 60){
                    System.out.println("Tempo Inválido. Escolha entre 1 à 60 segundos!");
                    carro3.tempo_acelerar = sc.nextDouble();
                }

                carro3.acelerar(carro3.tempo_acelerar);
            }

        }


        System.out.println(carro1.toString());
        System.out.println(carro2.toString());
        System.out.println(carro3.toString());





    }

}
