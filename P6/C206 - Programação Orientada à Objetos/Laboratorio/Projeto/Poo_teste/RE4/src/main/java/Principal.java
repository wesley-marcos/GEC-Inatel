import buy.Buy_Granade;
import control.Insert_Granade;
import control.Insert_Gun;
import control.Insert_Heal;
import control.Insert_Treasure;
import delete.Delete_gun;
import items.*;
import buy.*;
import people.Merchant;
import people.Player;
import sell.Sell_Granade;
import sell.Sell_Gun;
import sell.Sell_Heal;
import sell.Sell_Treasure;
import tune_up.Tune_up;

import java.util.ArrayList;
import java.util.Scanner;

import com.mysql.cj.x.protobuf.MysqlxCrud.Delete;

public class Principal {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Merchant m = new Merchant();
        Buy_Granade bg = new Buy_Granade();
        Buy_Gun bgun = new Buy_Gun();
        Buy_Heal bh = new Buy_Heal();
        Buy_Treasure btresure = new Buy_Treasure();

        Sell_Granade sell_granade = new Sell_Granade();
        Sell_Gun sell_gun = new Sell_Gun();
        Sell_Heal sell_heal = new Sell_Heal();
        Sell_Treasure sell_treasure = new Sell_Treasure();

        Tune_up tune_up = new Tune_up();

        Delete_gun dGun = new Delete_gun();

        ArrayList<Item> itens = new ArrayList<>();

        Granade g2 = new Granade(2);

        itens.add(g2);

        Insert_Granade insert_granade = new Insert_Granade();
        Insert_Gun insert_gun = new Insert_Gun();
        Insert_Heal insert_heal = new Insert_Heal();
        Insert_Treasure insert_treasure = new Insert_Treasure();

        Player p1 = new Player(6);
        p1.name = "Leon";
        p1.life = 50;
        p1.pasetas = 2000;
        p1.inventory = 6;

        System.out.println();
        System.out.println("Entre com uma opção: ");
        System.out.println("[1] Comprar um item.");
        System.out.println("[2] Vender um item.");
        System.out.println("[3] Melhorar um item.");
        System.out.println("[4] Mostrar os itens.");
        System.out.println("[0] Sair.");

        int escolha = sc.nextByte();
        int escolha_item;
        int i = 0;

        itens.toArray();

        while (escolha != 0) {

            if (escolha == 1) {

                try {

                    if (p1.inventory > 0) {

                        // sc.nextLine();
                        System.out.println("Entre com o tipo do item: ");
                        System.out.println("    [1] Granada");
                        System.out.println("    [2] Arma");
                        System.out.println("    [3] Item curável");
                        System.out.println("    [4] Tesouro");
                        System.out.println("    [0] Voltar");
                        escolha_item = sc.nextInt();

                        if (escolha_item == 1) {

                            for (int j = 0; j < 1; j++) {

                                Granade g = new Granade(i);
                                Item i2 = new Item(i);
                                g = insert_granade.insert(i2, g);

                                bg.buy_granade(i2, g);

                                p1.inventory -= 1;
                            }
                        }

                        else if (escolha_item == 2) {

                            for (int j = 0; j < 1; j++) {

                                Gun g = new Gun(i);
                                Item i1 = new Item(i);
                                g = insert_gun.insert(i1, g);

                                bgun.buy_gun(i1, g);
                                p1.inventory -= 1;
                            }
                        }

                        else if (escolha_item == 3) {

                            for (int j = 0; j < 1; j++) {

                                Heal g = new Heal(i);
                                Item i3 = new Item(i);
                                g = insert_heal.insert(i3, g);

                                bh.buy_heal(i3, g);
                                p1.inventory -= 1;
                            }
                        }

                        else if (escolha_item == 4) {

                            for (int j = 0; j < 1; j++) {

                                Treasure tr = new Treasure(i);
                                Item i4 = new Item(i);
                                tr = insert_treasure.insert(i4, tr);

                                btresure.buy_treasure(i4, tr);
                                p1.inventory -= 1;
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

                } catch (Exception e) {
                    System.out.println(e);

                } finally {

                }

            } else if (escolha == 2) {
                try {
                    System.out.println("Entre com uma opção de venda: ");
                    System.out.println("[1] Gun.");
                    System.out.println("[2] Heal.");
                    System.out.println("[3] Treasure.");
                    System.out.println("[4] Granade.");
                    System.out.println("[0] Sair.");
                    escolha_item = sc.nextInt();

                    if (escolha_item == 1) {
                        for (int j = 0; j < 1; j++) {
                            Item i1 = new Item(i);
                            dGun.buscar(i1);
                        }
                    }

                } catch (Exception e) {
                    System.out.println(e);

                } finally {

                }
            }

            i += 1;

        }
        // sc.close();
    }
}
