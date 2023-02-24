public class Principal {

    public static void main(String[] args) {

        //Viagem de passeio
        Passeio p1 = new Passeio();
        p1.setPontosTuristicos("Cristo Redentor");
        p1.setCustoHotel(2000);

        //Viagem de intercambio
        Intercambio  i1 = new Intercambio();
        i1.setNomeFacul("Inatel");
        i1.setCustoMoradia(1500);

        //Viagem à trabalho
        Trabalho t1 = new Trabalho();
        t1.setNomeEmpresa("Coca-Cola FEMSA");

        Viagem[] v1 = new Viagem[5];
        v1[0] = p1;
        v1[1] = i1;
        v1[2] = t1;

        //Nome da agencia
        Agencia a1 = new Agencia();
        a1.nome = "CVC Viagens";
        a1.listarViagens(v1);

    }
}
