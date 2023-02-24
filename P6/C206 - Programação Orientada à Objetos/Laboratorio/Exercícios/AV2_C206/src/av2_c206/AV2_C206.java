/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package av2_c206;

/**
 *
 * @author Gabriel Ilian Fonseca Barboza
 * Matricula: 1715
 * Curso: GEC
 */
public class AV2_C206 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Lógica do código que vamos utilizar
        
        //Criando nossa competição
        //Afinal, músicos precisam dela hehe
        Competicao competicao=new Competicao();
        
        //Criando objetos do tipo instrumento
        
        Instrumento inst=new Instrumento();
        inst.setAno(2006);
        inst.setCor("Vermelho");
        inst.setModelo("Draxler");
        
        Instrumento inst2=new Instrumento();
        inst2.setAno(2021);
        inst2.setCor("Preto");
        inst2.setModelo("BM8000");
        
        Instrumento inst3=new Instrumento();
        inst3.setAno(2018);
        inst3.setCor("Rosa");
        inst3.setModelo("09JUi");
        
        //Criando nossos competidores
        Pianista caraPiano=new Pianista();
        caraPiano.nome="Raul";
        caraPiano.idade=21;
        caraPiano.pontuacao=100;
        caraPiano.musica="Someone Like You";
        caraPiano.instrumento=inst;
        caraPiano.setAlturaBanco(45);
        
        Violinista caraViolino=new Violinista();
        caraViolino.nome="Luis Roberto";
        caraViolino.idade=65;
        caraViolino.setMarcaBreu("Teofilina");
        caraViolino.pontuacao=100;
        caraViolino.musica="Bumbum Tantã - MC Fiote";
        caraViolino.instrumento=inst2;
        
        Celista caraCelo=new Celista();
        caraCelo.nome="Ribamar";
        caraCelo.pontuacao=100;
        caraCelo.idade=35;
        caraCelo.musica="Hino Do Vasco Da Gama";
        caraCelo.instrumento=inst3;
        caraCelo.setSentado(false);
        
        //Adicionando os nossos competidores a competição
        competicao.addMusico(caraPiano);
        competicao.addMusico(caraViolino);
        competicao.addMusico(caraCelo);
        
        //Agora por ultimos mostramos nossos competidores
        competicao.listarCompetidores();
        
        
    }
    
}
