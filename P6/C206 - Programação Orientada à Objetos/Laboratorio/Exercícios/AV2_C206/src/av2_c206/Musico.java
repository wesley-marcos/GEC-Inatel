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
public abstract class Musico {
    //Atributos da Classe Do Músico
    protected static int contador=0;
    protected int codigo;
    protected String nome;
    protected int idade;
    protected String musica;
    protected int pontuacao;
    
    //Atributos implicitos de um músico
    Instrumento instrumento;
    
    //Construtor da classe do músico
    Musico(){
        codigo=contador++;
    }
    
    //Metódos da classe do músico
    //Tocar é um metodo abstrato que deve ser reescrito em cada uma das classes filhas
    public abstract void tocar();
    
    public void mostraInfo()
    {
        System.out.println("-------------------------------");
        System.out.println("INFORMAÇÕES DO NOSSO MÚSICO!!!");
        System.out.println("Código: "+codigo);
        System.out.println("Nome: "+nome);
        System.out.println("Idade: "+idade);
        System.out.println("Musica: "+musica);
        System.out.println("Pontuacao: "+pontuacao);
        instrumento.mostraInfoInstrumento();
        
    }


    
    
    
}
