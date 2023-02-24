package rodoviaria;

import onibus.Onibus;

public class Rodoviaria {

    public Onibus o1 = new Onibus();

    float soma1 = 0;

    int i = 1;

    //Método para somar o total de passagens
    public float somaPassagens(Onibus o){

        if(i == 1){
            float soma1 = o.getNumAssentos() * o.getContador() * o.getPrecoPassagem();

            this.soma1 = soma1;

            i++;
        }

        return this.soma1;
    }

    int j = 1;

    //Método para mostrar as informações
    public void mostraInfo(){

        System.out.println("A soma das passagens do ônibus " + j + " é: R$" + somaPassagens(o1) + ".");
        System.out.println();
        j++;

        System.out.println("As informações dos ônibus são: ");
        System.out.println(o1.toString());
    }
}
