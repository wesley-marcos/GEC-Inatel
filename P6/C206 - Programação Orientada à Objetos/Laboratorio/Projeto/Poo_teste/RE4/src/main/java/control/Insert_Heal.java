package control;

import items.Heal;
import items.Item;

import java.util.Scanner;

public class Insert_Heal {

    public Heal insert(Item item, Heal heal) {

        String typeHeal;
        String effect;

        String nameI;
        String typeI;
        Double valueI;

        Scanner sc = new Scanner(System.in);

        nameI = "Planta";
        item.nameItem = nameI;

        typeI = "Cura";
        item.typeItem = typeI;

        valueI = 1000.0;
        item.valueItem = valueI;

        System.out.println("Insira o tipo da erva: ");
        typeHeal = sc.nextLine();
        heal.typeHeal = typeHeal;
        System.out.println("Insira o efeito da erva: ");
        effect = sc.nextLine();
        heal.effect = effect;

        System.out.println("Tipo = " + heal.typeHeal + "\n" +
                "Efeito = " + heal.effect);

        sc.close();
        return heal;
    }
}
