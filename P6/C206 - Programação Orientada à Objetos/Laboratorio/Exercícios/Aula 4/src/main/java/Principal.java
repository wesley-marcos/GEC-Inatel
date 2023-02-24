import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Restaurante rest = new Restaurante();

        for (int i = 0; i < rest.pratos.length; i++){

            rest.pratos[i] = new Prato();
        }

        System.out.println();
        System.out.println("Entre com uma opção: ");
        System.out.println("[1] Adicionar um prato.");
        System.out.println("[2] Calcular o preço total do prato.");
        System.out.println("[3] Calcular a média de peso do prato.");
        System.out.println("[4] Mostrar informações do prato.");
        System.out.println("[0] Sair.");

        int escolha = sc.nextByte();
        int i = 0;

        while(escolha != 0) {

            if(escolha == 1){

                sc.nextLine();
                System.out.println("Entre com o nome do prato " + (i + 1) + ": ");
                rest.pratos[i].nome = sc.nextLine();
                System.out.println("Entre com o peso do prato " + (i + 1) + ": ");
                rest.pratos[i].peso = sc.nextDouble();
                System.out.println("Entre com o preço do quilo do prato " + (i + 1) + ": ");
                rest.pratos[i].precoKG = sc.nextFloat();
                rest.addPrato(rest.pratos[i]);
            }

            else if (escolha == 2){
                rest.calculaTotal();
            }

            else if(escolha == 3){
                rest.mediaPeso();
            }

            else if(escolha == 4){
                rest.mostraInfo();
            }


            else{
                break;
            }

            System.out.println("Entre com uma opção: ");
            System.out.println("[1] Adicionar um prato.");
            System.out.println("[2] Calcular o preço total do prato.");
            System.out.println("[3] Calcular a média de peso do prato.");
            System.out.println("[4] Mostrar informações do prato.");
            System.out.println("[0] Sair.");

            escolha = sc.nextByte();

            i++;

        }

        System.out.println("Obrigado por utilizar nosso sistema.");
    }
}
