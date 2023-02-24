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
public class Trabalho extends Viagem {
    //Atributos da classe
    private String nomeEmpresa;
    //Metodos da classe

    public String getNomeEmpresa() {
        return nomeEmpresa;
    }

    public void setNomeEmpresa(String nomeEmpresa) {
        this.nomeEmpresa = nomeEmpresa;
    }
    @Override
    public float calculaGastoTotal() {
        return 0; //To change body of generated methods, choose Tools | Templates.
    }
    
    
}
