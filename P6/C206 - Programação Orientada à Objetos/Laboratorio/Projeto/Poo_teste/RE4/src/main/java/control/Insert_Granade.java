package control;

import items.Granade;
import items.Gun;
import items.Item;

import java.util.ArrayList;
import java.util.Scanner;

public class Insert_Granade {

    public Granade insert(Item item, Granade granade) {

        String nameI;
        String typeI;
        Double valueI;
        String type;
        double range;
        double explosion;
        String color;

        Scanner sc = new Scanner(System.in);

        nameI = "Granade";
        item.nameItem = nameI;

        typeI = "Granade";
        item.typeItem = typeI;

        valueI = 500.0;
        item.valueItem = valueI;

        System.out.println("Insira o tipo da granada: ");
        type = sc.nextLine();
        granade.typeGranade = type;
        System.out.println("Insira o alcance de efeito: ");
        range = sc.nextDouble();
        granade.rangeGranade = range;
        System.out.println("Insira o poder de explosão: ");
        explosion = sc.nextDouble();
        granade.explosion_power = explosion;
        System.out.println("Insira a cor da granada: ");
        color = sc.next();
        granade.color = color;

        sc.close();
        return granade;
    }
}
