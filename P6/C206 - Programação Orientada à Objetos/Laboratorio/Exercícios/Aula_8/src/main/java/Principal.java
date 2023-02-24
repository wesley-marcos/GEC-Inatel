public class Principal{

    public static void main(String[] args) {

        //Criando concessionária
        Concessionaria conc = new Concessionaria();
        conc.nome = "Tatita";

        //Criando carro hatch
        Hatch h1 = new Hatch();
        h1.valor = 48900;
        h1.ano = 2020;
        h1.cor = "Branco";
        h1.setPortas(4);

        //Criando carro SUV
        SUV s1 = new SUV();
        s1.valor = 74900;
        s1.ano = 2021;
        s1.cor = "Preto";
        s1.setTracao("Dianteira");

        //Criando carro sedan
        Sedan t1 = new Sedan();
        t1.valor = 115000;
        t1.ano = 2018;
        t1.cor = "Prata";
        t1.setPortaMalas(480);

        //Passando os dados para o array criado na classe Concessionaria
        conc.carro[0] = h1;
        conc.carro[1] = s1;
        conc.carro[2] = t1;

        //Chamando o método mostraInfo() da função Concessionaria
        conc.mostraInfo();


    }
}
