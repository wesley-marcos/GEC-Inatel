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
public class Intercambio extends Viagem {

    //Atributos da classe 
    private String nomeFacul;
    private float custoMoradia;

    //Metodo da classe
    public String getNomeFacul() {
        return nomeFacul;
    }

    public void setNomeFacul(String nomeFacul) {
        this.nomeFacul = nomeFacul;
    }

    public float getCustoMoradia() {
        return custoMoradia;
    }

    public void setCustoMoradia(float custoMoradia) {
        this.custoMoradia = custoMoradia;
    }

    @Override
    public float calculaGastoTotal() {
        return super.calculaGastoTotal() + custoMoradia; 
    }

}
