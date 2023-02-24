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
public class Competicao 
{
    //Arrays de músicos que temos em uma competição
    Musico []competidores=new Musico[15];
    
    //Metódos que permitem adicionarmos os músicos no array
    public void addMusico(Musico musico)
    {
        //Percorrendo o array e verificando posições onde podemos não ter músicos adicionados
        for (int i = 0; i <competidores.length; i++) 
        {
            
            if(competidores[i]==null)//Verificando se a posição i está vazia
            {
                competidores[i]=musico;
                break;//Paramos o loop para caso a posição já tenha sido preenchida
            }
                
        }
    }
    
    public void listarCompetidores()
    {
        System.out.println("Seja bem-vindo(a) a nossa competição!!");
        System.out.println("Hoje está bem maneiro!!!!");
        System.out.println("Estes são nossos competidores e eles estão botando pra quebrar!!! ");
        System.out.println("******************************************************************");
        for (int i = 0; i <competidores.length; i++) 
        {
            if(competidores[i]!=null)
            {
                if(competidores[i] instanceof Celista)
                {
                  Celista auxCelista=(Celista)competidores[i];
                  auxCelista.tocar();
                  auxCelista.desafinar();
                  
                }
                if(competidores[i] instanceof Violinista)
                {
                    Violinista auxViolinista=(Violinista)competidores[i];
                    auxViolinista.tocar();
                    auxViolinista.desafinar();
                    
                }
                if(competidores[i] instanceof Pianista)
                {
                    Pianista auxPianista=(Pianista)competidores[i];
                    auxPianista.tocar();
                    auxPianista.tocarAcorde();
                    auxPianista.errarPausa();  
                    
                }
                competidores[i].mostraInfo();
                
            }
        }
    }
}
