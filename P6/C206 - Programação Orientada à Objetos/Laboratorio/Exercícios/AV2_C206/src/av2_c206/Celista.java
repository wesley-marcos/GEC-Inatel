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
public class Celista extends Musico implements Som {

    //Atributos de um celista
    private boolean sentado;

    //Getter and setters para trabalharmos com o atributo do Celista
    public void setSentado(boolean sentado) {
        this.sentado = sentado;
    }

    //Metodos obtidos através da classe mãe e da interface
    //Todos são abstratos e devem ser reescritos
    @Override
    public void tocar() {
        System.out.println("O celista, "+nome+" está tocando "+musica+" que bela apresentação!!!");
    }

    @Override
    public void desafinar() {
        System.out.println("IXIIII "+nome+" desafinou um pouco!!!");
        pontuacao-=0.05*pontuacao;
    }
    
    @Override
    public void mostraInfo()
    {
        System.out.println("Competidor é um Celista");
        super.mostraInfo();
        if(sentado==true)
        {
            System.out.println("O Celista se encontra sentado!! ");
        }
        else
            System.out.println("O celista se encontra de pé!!");
        
        
    }
}
