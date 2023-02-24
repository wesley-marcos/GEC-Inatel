import java.util.Scanner;

public class Restaurante {

    //Atributos
    String nome = "MataMinhaFome";
    String nomeDono = "Erik Jacquin";
    String cidade = "São Paulo";

    Prato[] pratos = new Prato[20];

    //Construtor
    public Restaurante(){

         for(int i = 0; i < pratos.length; i++){

             pratos = new Prato[20];

        }
    }


    //Método para adicionar um prato no array
    void addPrato(Prato prato){

        for (int i = 0; i < pratos.length; i++){

            if(pratos[i] == null){
                pratos[i] = prato;
                break;
            }
        }
    }

    //Método para calcular o valor total do prato
    void calculaTotal(){


        for (int i = 0; i < pratos.length; i++){
            pratos[i].total = pratos[i].precoKG * pratos[i].peso;

        }
    }

    //Método para calcular a média de peso dos pratos
    int mediaPeso(){

        int j = 0;
        int soma = 0;
        int media = 0;

        for(int i = 0; i < pratos.length; i++){

            if(pratos[i].nome != null){
                soma += pratos[i].peso;
                j++;
            }

        }

        media = soma / j;

        return media;
    }

    //Método para mostrar as informações
    void mostraInfo(){

        System.out.println("========= INFORMAÇÕES DO RESTAURANTE =========");
        System.out.println("Nome do estabelecimento: " + nome);
        System.out.println("Nome do proprietário: " + nomeDono);
        System.out.println("Cidade: " + cidade);
        System.out.println();
        System.out.println("=========== INFORMAÇÕES DOS PRATOS ===========");

        int i = 0; //Variável de controle

        for (i = 0; i < pratos.length; i++){

            if (pratos[i].nome != null){

               pratos[i].mostraInfo();

            }
        }

        i = 0;

        if(pratos[i].precoKG > 5) {
            System.out.println("Média de peso do prato: " + mediaPeso());
            System.out.println();

        }
    }
}
