/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package av2_c206;

/**
 *
 * @author Gabriel
 */
public class Instrumento 
{
    //Atributos do instrumento do músico
    private String modelo;
    private String cor;
    private int ano;
    
    //Metodos setters para trabalhar com os atributos
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }


    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }
    
    void mostraInfoInstrumento()
    {
        System.out.println("******** INFOS DOS INSTRUMENTOS UTILIZADOS PELOS MÚSICO********");
        System.out.println("Modelo: "+modelo);
        System.out.println("Cor: "+cor);
        System.out.println("Ano Fabricação: "+ano);
        System.out.println("*****************************************************************");
    }
}
