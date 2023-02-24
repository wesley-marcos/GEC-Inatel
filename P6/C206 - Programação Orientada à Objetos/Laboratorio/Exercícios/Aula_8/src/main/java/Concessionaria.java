public class Concessionaria implements Controle{

    //Atributos
    public String nome;

    //Criando arraz de Carro
    Carro[] carro = new Carro[10];


    @Override
    public void mostraInfo() {

        System.out.println("------------ DADOS -----------");
        System.out.println("Concessionária = " + nome);
        System.out.println("------------ CARROS -------------");

        for(int i = 0; i < carro.length; i++){

            if(carro[i] != null){

                if(carro[i] instanceof Hatch){
                    System.out.println("Tipo de carro: Hatch");
                    Hatch hAux = (Hatch)carro[i];
                    System.out.println("Valor = " + hAux.valor);
                    System.out.println("Cor = " + hAux.cor);
                    System.out.println("Ano = " + hAux.ano);
                    System.out.println("Número de portas = " + hAux.getPortas());
                    System.out.println("----------------------------------------");
                }

                if(carro[i] instanceof SUV){
                    System.out.println("Tipo de carro: SUV");
                    SUV sAux = (SUV)carro[i];
                    System.out.println("Valor = " + sAux.valor);
                    System.out.println("Cor = " + sAux.cor);
                    System.out.println("Ano = " + sAux.ano);
                    System.out.println("Tração = " + sAux.getTracao());
                    System.out.println("----------------------------------------");
                }

                if(carro[i] instanceof Sedan){
                    System.out.println("Tipo de carro: Sedan");
                    Sedan tAux = (Sedan) carro[i];
                    System.out.println("Valor = " + tAux.valor);
                    System.out.println("Cor = " + tAux.cor);
                    System.out.println("Ano = " + tAux.ano);
                    System.out.println("Capacidade do porta malas = " + tAux.getPortaMalas());
                    System.out.println("----------------------------------------");
                }
            }
        }
    }
}
