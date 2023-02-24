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
public class AtividadeAula08Viagem {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Criando objetos e testando validade da função
        Agencia ag1=new Agencia();
        ag1.nome="Super Dammas";
        
        //Criando tipos de viagens
        Trabalho t1=new Trabalho();
        t1.destino="El Salvador";
        t1.duracao="2h45";
        t1.passagem=350;
        t1.setNomeEmpresa("BMA Ltda");
        
        Passeio p1=new Passeio();
        p1.destino="Buenos Aires";
        p1.duracao="3h30";
        p1.passagem=3450.50f;
        p1.setPontosTurisiticos("Torre Da Grande Salvação");
        p1.setCustoHotel(650.0f);
        
        Intercambio interc=new Intercambio();
        interc.duracao="5h00";
        interc.destino="Portugal";
        interc.passagem=5000.50f;
        interc.setNomeFacul("Faculdade De Coimbra");
        interc.setCustoMoradia(23400.56f);
        
        ag1.viagens[0]=t1;
        ag1.viagens[1]=p1;
        ag1.viagens[2]=interc;
        
        ag1.listaViagens();
        
        
    }
    
}
