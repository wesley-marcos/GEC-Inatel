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
public class    Agencia {

    //ATRIBUTOS DA CLASSE DA AGÊNCIA
    String nome;
    //Atributos implicitos da classe 
    Viagem viagens[] = new Viagem[10];

    //Metodos da classe
    void listaViagens() {
        System.out.println("-------AGENCIAMENTO DE VIAGENS---------");
        System.out.println("Agência: " + nome);
        System.out.println("**********NOTA FISCAL******************");
        for (int i = 0; i < viagens.length; i++) {
            if (viagens[i] != null) {
                if (viagens[i] instanceof Intercambio) {
                    System.out.println("Tipo De viagem: Intercâmbio");
                    Intercambio auxInt = (Intercambio) viagens[i];
                    System.out.println("Destino: " + auxInt.destino);
                    System.out.println("Duração Viagem: "+auxInt.duracao);
                    System.out.println("Custo Passagem: " + auxInt.passagem+" R$");
                    System.out.println("Custo Moradia: " + auxInt.getCustoMoradia()+" R$");
                    System.out.println("Faculdade: " + auxInt.getNomeFacul());
                    System.out.println("Gasto Total: " + auxInt.calculaGastoTotal() + " R$");
                    System.out.println("---------------------------------------------------");
                }
                if (viagens[i] instanceof Passeio) {
                    System.out.println("Tipo De viagem: Passeio");
                    Passeio auxPass = (Passeio) viagens[i];
                    System.out.println("Destino: " + auxPass.destino);
                    System.out.println("Duração Viagem: "+auxPass.duracao);
                    System.out.println("Custo Passagem: " + auxPass.passagem+" R$");
                    System.out.println("Pontos Turisticos: "+auxPass.getPontosTurisiticos());
                    System.out.println("Custo Hotel: "+auxPass.getCustoHotel()+" R$");
                    System.out.println("Custo Total Viagem: "+auxPass.calculaGastoTotal()+" R$");
                    System.out.println("---------------------------------------------------");
                }
                if (viagens[i] instanceof Trabalho) {
                    System.out.println("Tipo De viagem: Trabalho");
                    Trabalho trampo = (Trabalho) viagens[i];
                    System.out.println("Empresa: "+trampo.getNomeEmpresa());
                    System.out.println("Destino: " + trampo.destino);
                    System.out.println("Duração Viagem: "+trampo.duracao);
                    System.out.println("Custo Total Viagem: "+trampo.calculaGastoTotal()+" R$");
                    System.out.println("------------------------------------------------------");
                    
                }
            }
        }
    }

}
