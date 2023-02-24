package control;

import items.Gun;
import items.Item;
import java.util.Scanner;

public class Insert_Gun {

    //Método para pegar os dados de entrada do usuário para inserí-los no BD, retornando os dados inseridos em uma arma
    public Gun insert(Item item, int id) {

        //Atributos
        double fire_power;
        double firing_speed;
        double reload_speed;
        int capacity;
        int capacity_total;
        int num_bul_mag;
        int range;
        String explosion;
        String nameI;
        double valueI;

        //Intâncias
        Gun gun = new Gun(id);
        Scanner sc = new Scanner(System.in);

        //Inserções dos dados
        System.out.println("================ Entre com os dados da arma ================");
        System.out.println("Insira o nome da arma: ");
        nameI = sc.nextLine();
        gun.nameItem = nameI;

        System.out.println("Insira o valor do item: ");
        valueI = sc.nextDouble();
        gun.valueItem = valueI;

        System.out.println("Insira o dano da arma: ");
        fire_power = sc.nextDouble();
        gun.fire_power = fire_power;

        System.out.println("Insira a velocidade de tiro: ");
        firing_speed = sc.nextDouble();
        gun.firing_speed = firing_speed;

        System.out.println("Insira a velocidade de recarga: ");
        reload_speed = sc.nextDouble();
        gun.reload_speed = reload_speed;

        System.out.println("Insira a quantidade máxima de balas no pente: ");
        capacity = sc.nextInt();
        gun.capacity = capacity;

        System.out.println("Insira o número total de balas guardadas: ");
        capacity_total = sc.nextInt();
        gun.capacity_total = capacity_total;

        System.out.println("Insira o número de balas no pente: ");
        num_bul_mag = sc.nextInt();
        gun.num_bulls_mag = num_bul_mag;

        System.out.println("Insira o alcance de tiro: ");
        range = sc.nextInt();
        gun.range = range;

        System.out.println("A arma é explosiva? ");
        explosion = sc.next();
        gun.explosion = explosion;

        return gun;

    }
}
