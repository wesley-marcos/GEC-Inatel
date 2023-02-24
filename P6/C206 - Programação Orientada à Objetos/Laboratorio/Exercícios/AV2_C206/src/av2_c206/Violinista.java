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
public class Violinista extends Musico implements Som {
    //Atributos de um violinista
    private String marcaBreu;
    private boolean usaEspaleira;
    
    //Metódos Getters and setters
    //Usamos para trabalhar com os atributos privados da classe
    public void setMarcaBreu(String marcaBreu) {
        this.marcaBreu = marcaBreu;
    }


    public void setUsaEspaleira(boolean usaEspaleira) {
        this.usaEspaleira = usaEspaleira;
    }
    
    //Metodos de um Violinista

    @Override
    public void tocar() {
        System.out.println("O violinista, "+nome+" está tocando "+musica+" que bela apresentação!!!");
    }

    @Override
    public void desafinar() {
        System.out.println("IXIIII "+nome+" desafinou um pouco!!!");
        if(usaEspaleira==true)
        {
            pontuacao-=0.1*pontuacao;
        }
        else
            pontuacao-=0.05*pontuacao;
    }
    
    @Override
    public void mostraInfo()
    {
        System.out.println("O competidor é um violinista!!");
        super.mostraInfo();
        System.out.println("Marca Breu: "+marcaBreu);
        if(usaEspaleira==true)
            System.out.println("O Violinista está usando uma espaleira!!");
        else
            System.out.println("O Violinista não está usando uma espaleira");
        
    }
      
            
}
