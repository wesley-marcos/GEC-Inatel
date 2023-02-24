package control;

import items.Gun;
import items.Item;

import java.util.ArrayList;
import java.util.Scanner;

public class Insert_Gun {

    public Gun insert(Item item, Gun gun) {

        double fire_power;
        double firing_speed;
        double reload_speed;
        int capacity;
        int range;
        String explosion;

        String nameI;
        String typeI;
        Double valueI;

        // Gun gun = new Gun(3);

        Scanner sc = new Scanner(System.in);

        nameI = "Fuzil";
        item.nameItem = nameI;

        typeI = "Arma";
        item.typeItem = typeI;

        valueI = 1500.0;
        item.valueItem = valueI;

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
        System.out.println("Insira o alcance de tiro: ");
        range = sc.nextInt();
        gun.range = range;
        System.out.println("A arma é explosiva? ");
        explosion = sc.next();
        gun.explosion = explosion;

        // gun = itens2Aux;

        System.out.println("ID = " + gun.idGun + "\n" +
                "Fire Power = " + gun.fire_power + "\n" +
                "Firing Speed = " + gun.firing_speed + "\n" +
                "Reload Speed = " + gun.reload_speed + "\n" +
                "Capacity = " + gun.capacity + "\n" +
                "Range = " + gun.range + "\n" +
                "Explosion = " + gun.explosion + "\n");

        sc.close();
        return gun;

    }
}
