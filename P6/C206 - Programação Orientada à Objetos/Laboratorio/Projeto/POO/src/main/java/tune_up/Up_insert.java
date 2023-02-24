package tune_up;

import items.Gun;
import java.util.Scanner;

public class Up_insert {

    //Método para pegar os dados de entrada do usuário para atualizar os dados desejáveis, retornando os dados inseridos em uma arma
    public Gun insert_up(Gun gun) {

        //Atributos
        int i = 0;
        int capacity;
        int capacity_total;
        int num_bul_mag;
        int range;
        double valueI;
        double fire_power;
        double firing_speed;
        double reload_speed;
        String nameI;

        //Instância
        Scanner sc = new Scanner(System.in);

        //Inserção dos dados pelo usuário
        System.out.println("================ Entre com o item à ser atualizado ================");
        System.out.println(" ");
        System.out.println("[1] Gun's name.");
        System.out.println("[2] Gun's value.");
        System.out.println("[3] Fire Power.");
        System.out.println("[4] Firing Speed.");
        System.out.println("[5] Reload Speed.");
        System.out.println("[6] Capacity.");
        System.out.println("[7] Range Gun.");
        System.out.println("[8] Capacity total.");
        System.out.println("[9] Number of magazine bullets.");
        System.out.println("[0] Sair.");

        int escolha = sc.nextByte();

        while(escolha != 0){

            if(escolha == 1){

                System.out.println("Insira o nome da arma: ");
                nameI = sc.next();
                gun.nameItem = nameI;
                break;
            }

            else if(escolha == 2){

                System.out.println("Insira o valor do item: ");
                valueI = sc.nextDouble();
                gun.valueItem = valueI;
                break;
            }

            else if(escolha == 3){

                System.out.println("Insira o dano da arma: ");
                fire_power = sc.nextDouble();
                gun.fire_power = fire_power;
                break;
            }

            else if(escolha == 4){

                System.out.println("Insira a velocidade de tiro: ");
                firing_speed = sc.nextDouble();
                gun.firing_speed = firing_speed;
                break;
            }

            else if(escolha == 5){

                System.out.println("Insira a velocidade de recarga: ");
                reload_speed = sc.nextDouble();
                gun.reload_speed = reload_speed;
                break;
            }

            else if(escolha == 6){

                System.out.println("Insira a quantidade máxima de balas no pente: ");
                capacity = sc.nextInt();
                gun.capacity = capacity;
                break;
            }

            else if(escolha == 7){

                System.out.println("Insira o alcance de tiro: ");
                range = sc.nextInt();
                gun.range = range;
                break;
            }

            else if(escolha == 8){

                System.out.println("Insira o número total de balas guardadas: ");
                capacity_total = sc.nextInt();
                gun.capacity_total = capacity_total;
                break;
            }

            else if(escolha == 9){

                System.out.println("Insira o número de balas no pente: ");
                num_bul_mag = sc.nextInt();
                gun.num_bulls_mag = num_bul_mag;
                break;
            }
        }

        System.out.println("================ Entre com o item à ser atualizado ================");
        System.out.println(" ");
        System.out.println("[1] Gun's name.");
        System.out.println("[2] Gun's value.");
        System.out.println("[3] Fire Power.");
        System.out.println("[4] Firing Speed.");
        System.out.println("[5] Reload Speed.");
        System.out.println("[6] Capacity.");
        System.out.println("[7] Range Gun.");
        System.out.println("[8] Capacity total.");
        System.out.println("[9] Number of magazine bullets.");
        System.out.println("[0] Sair.");

        escolha = sc.nextByte();

        return gun;

    }
}


