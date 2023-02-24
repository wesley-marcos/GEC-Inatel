package people;

import items.Gun;

public class Player {

    //Atributos
    public String name;
    public double life;
    public double pasetas;
    public int inventory;

    public Player(int inventory) {
        this.inventory = inventory;
        inventory = 6;
    }

    //Método para atirar
    public void shoot(int num_shoots, Gun gun){

        gun.num_bulls_mag -= num_shoots;
    }

    //Método para recarregar
    public void reload(int capacity, Gun gun){

        int num_shoot = capacity - gun.num_bulls_mag;
        gun.capacity_total -= num_shoot;
    }

    //Método que mostra informações do jogador
    public void mostraInfo(){
        System.out.println("Nome do jogador = " + name);
        System.out.println("Vida = " + life);
        System.out.println("Pasetas = " + pasetas);
        System.out.println("Itens no inventário = " + inventory);
    }
}
