package control;

import items.Item;
import items.Treasure;

import java.util.Scanner;

public class Insert_Treasure {

    public Treasure insert(Item item, Treasure treasure) {

        String name;
        String nameI;
        String typeI;
        Double valueI;

        Scanner sc = new Scanner(System.in);

        nameI = "Te";
        item.nameItem = nameI;

        typeI = "C";
        item.typeItem = typeI;

        valueI = 1000.0;
        item.valueItem = valueI;

        System.out.println("Insira o nome do tesouro: ");
        name = sc.nextLine();
        treasure.nameTreasure = name;

        System.out.println("Nome = " + treasure.nameTreasure);

        sc.close();
        return treasure;
    }
}
