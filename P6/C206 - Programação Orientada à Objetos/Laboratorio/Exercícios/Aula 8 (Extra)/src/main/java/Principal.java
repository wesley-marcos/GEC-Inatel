import java.lang.reflect.Array;

public class Principal {

    public static void main(String[] args) {

        TerraMedia t = new TerraMedia();
        Anao anao = new Anao();
        Elfo elfo = new Elfo();
        Mago mago = new Mago();

        //Dados do anão
        anao.nome = "Brok";
        anao.setIdade(215);
        anao.setAltura(1.2f);
        anao.setReino("Nidavellir");
        //anao.arma.setMagica(true);

        //Dados do elfo
        elfo.nome = "Frey";
        elfo.setIdade(650);
        elfo.setTribo("Álfheim");
        //elfo.arma.setMagica(true);

        //Dados do mago
        mago.nome = "Gandalf";
        mago.setIdade(150);
        mago.setCor("Branco");
        //mago.arma.setMagica(false);

        Array.set(t.getHerois(), 0, anao);
        Array.set(t.getHerois(), 1, elfo);
        Array.set(t.getHerois(), 2, mago);

        t.listarHabitantes();
    }
}
