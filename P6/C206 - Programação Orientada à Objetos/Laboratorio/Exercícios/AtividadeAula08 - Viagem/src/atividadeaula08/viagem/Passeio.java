/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadeaula08.viagem;

/**
 *
 * @author Gabriel
 */
public class Passeio extends Viagem {
    //Atributos da classe Passeio 
    private String pontosTurisiticos;
    private float  custoHotel;
    
    //Metodos da classe

    public String getPontosTurisiticos() {
        return pontosTurisiticos;
    }

    public void setPontosTurisiticos(String pontosTurisiticos) {
        this.pontosTurisiticos = pontosTurisiticos;
    }

    public float getCustoHotel() {
        return custoHotel;
    }

    public void setCustoHotel(float custoHotel) {
        this.custoHotel = custoHotel;
    }
    
    //Metodos com reescrita

    @Override
    public float calculaGastoTotal() {
        return super.calculaGastoTotal()+custoHotel; //To change body of generated methods, choose Tools | Templates.
    }
    
    
}
