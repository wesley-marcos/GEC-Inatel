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
public class Pianista extends Musico implements Tecnica,Tempo{
    //Atributos de um pianista
    private float alturaBanco;
    
    //Metodo get and set para trabalharmos com o atributo private

    public float getAlturaBanco() {
        return alturaBanco;
    }

    public void setAlturaBanco(float alturaBanco) {
        this.alturaBanco = alturaBanco;
    }
    
    //Metodos da classe do pianista
    //Todos são reescritos a partir da classe mãe e das interfaces

    @Override
    public void tocar() {
        System.out.println("O pianista, "+nome+" está tocando "+musica+" que bela apresentação!!!");
    }

    @Override
    public void tocarAcorde() {
        System.out.println("O Pianista "+nome+" tocou um acorde");
    }

    @Override
    public void errarPausa() {
        pontuacao-=25;
        System.out.println("O pianista errou o tempo e vai recomeçar!! ");
    }
    @Override
    public void mostraInfo()
    {
        System.out.println("O competidor é um pianista!!");
        super.mostraInfo();
        System.out.println("Altura Banco: "+alturaBanco+" cm");
        
    }
    
    
}
