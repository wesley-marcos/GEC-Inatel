import buy.Buy_Gun;
import control.Insert_Gun;
import items.Gun;
import items.Item;
import people.Player;
import search.List_guns;
import sell.Sell_Gun;
import tune_up.Tune_up;
import tune_up.Up_insert;
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        //Instâncias necessárias
        Scanner sc = new Scanner(System.in);
        Buy_Gun bgun = new Buy_Gun();
        Sell_Gun sell_gun = new Sell_Gun();
        Tune_up tune_up = new Tune_up();
        Up_insert up_insert = new Up_insert();
        List_guns list = new List_guns();
        Item [] itens2 = new Item[6];
        Insert_Gun insert_gun = new Insert_Gun();
        Player p1 = new Player(6);

        //Atribuições ao Player
        p1.name = "Leon";
        p1.pasetas = 2000;
        p1.inventory = 6;

        //Menu Principal
        System.out.println("");
        System.out.println("Entre com uma opção: ");
        System.out.println("[1] Comprar uma arma.");
        System.out.println("[2] Vender uma arma.");
        System.out.println("[3] Melhorar uma arma.");
        System.out.println("[4] Mostrar as armas.");
        System.out.println("[0] Sair.");

        int escolha = sc.nextByte(); //Variável de escolha do menu princial
        int escolha_item; //Variável de escolha do menu secundário
        int i = 0; //Contador
        int k = 0; //Contador

        //Loop principal
        while (escolha != 0) {

            //Inserção dos dados
            if (escolha == 1) {

                try {

                    if (p1.inventory > 0) {

                        System.out.println("Entre com o tipo do item: ");
                        System.out.println("    [1] Comprar");
                        System.out.println("    [0] Voltar");
                        escolha_item = sc.nextInt();

                        if (escolha_item == 1) {

                            k += 2;

                            Item item = new Item(k);


                            for (int j = 0; j < itens2.length; j++) {


                                if(itens2[j] == null){

                                    itens2[j] = insert_gun.insert(item, k);

                                    bgun.buy_gun(itens2[j], j);

                                    break;
                                }

                                k += 1;
                            }
                        }

                        else if (escolha_item == 0) {
                            System.out.println();
                            System.out.println("Entre com uma opção: ");
                            System.out.println("[1] Comprar um item.");
                            System.out.println("[2] Vender um item.");
                            System.out.println("[3] Melhorar um item.");
                            System.out.println("[4] Mostrar os itens.");
                            System.out.println("[0] Sair.");

                            escolha = sc.nextInt();
                        }

                    }

                }

                catch (Exception e) {
                    System.out.println(e);

                }

            //Deletar os dados
            } else if (escolha == 2) {

                try {
                    System.out.println("Entre com uma opção de venda: ");
                    System.out.println("[1] Vender.");
                    System.out.println("[0] Sair.");
                    escolha_item = sc.nextInt();

                    if (escolha_item == 1) {

                        boolean venda = false;

                        for (int j = 0; j < itens2.length; j++) {

                            if(itens2[j] != null) {
                                venda = sell_gun.sell_gun(itens2[j], p1);
                            }
                        }

                        if(venda){
                            System.out.println("Venda efetuada com sucesso!");
                        }

                    }

                    else if (escolha_item == 0) {
                        System.out.println();
                        System.out.println("Entre com uma opção: ");
                        System.out.println("[1] Comprar um item.");
                        System.out.println("[2] Vender um item.");
                        System.out.println("[3] Melhorar um item.");
                        System.out.println("[4] Mostrar os itens.");
                        System.out.println("[0] Sair.");

                        escolha = sc.nextByte();
                    }

                }

                catch (Exception e) {
                    System.out.println(e);

                }

                finally {
                    i += 1;
                }
            }

            //Update dos dados
            else if(escolha ==  3){

                try{

                    System.out.println("Entre com uma opção de venda: ");
                    System.out.println("[1] Melhorar.");
                    System.out.println("[0] Sair.");
                    escolha_item = sc.nextInt();

                    if(escolha_item == 1){

                        boolean melhorar = false;

                        for(int j = 0; j < itens2.length; j++) {

                            if(itens2[j] instanceof Gun){

                                Gun gun = (Gun) itens2[j];
                                Gun gun2;
                                gun2 = up_insert.insert_up(gun);
                                melhorar = tune_up.upgrade(gun2);
                            }
                        }

                        if(melhorar){
                            System.out.println("Update feito com sucesso!");
                        }

                    }

                    else if (escolha_item == 0) {
                        System.out.println();
                        System.out.println("Entre com uma opção: ");
                        System.out.println("[1] Comprar um item.");
                        System.out.println("[2] Vender um item.");
                        System.out.println("[3] Melhorar um item.");
                        System.out.println("[4] Mostrar os itens.");
                        System.out.println("[0] Sair.");

                        escolha = sc.nextByte();
                    }

                }

                catch(Exception e){
                    System.out.println(e);
                }
            }

            //Mostrar as armas e seus atributos
            else if(escolha == 4){

                System.out.println("\n Você deseja ver todas as armas? ");
                System.out.println("     [1] Sim.");
                System.out.println("     [0] Não.");
                escolha_item = sc.nextInt();

                if(escolha_item == 1){

                    try{

                        for(int j = 0; j < itens2.length; j++){

                            if(itens2[j] != null){

                                list.buscar_arma(j);

                            }
                        }
                    }

                    catch(Exception e){
                        System.out.println(e);
                    }
                }

                else if(escolha_item == 0){

                    System.out.println();
                    System.out.println("\n Entre com uma opção: ");
                    System.out.println("[1] Comprar um item.");
                    System.out.println("[2] Vender um item.");
                    System.out.println("[3] Melhorar um item.");
                    System.out.println("[4] Mostrar os itens.");
                    System.out.println("[0] Sair.");

                    escolha = sc.nextByte();
                }
            }

            i += 1;

        }
    }
}