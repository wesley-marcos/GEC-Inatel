public class TerraMedia {

    //Array de habitantes
    private Habitante[] herois = new Habitante[20];

    //Método para adicionar habitantes
    public void addHabitante(Habitante habitante){

        for(int i = 0; i < herois.length; i++){

            if(herois[i] != null){

                herois[i] = habitante;
                break;
            }
        }
    }

    //Método para listar os habitantes
    public void listarHabitantes(){

        for(int i = 0; i < herois.length; i++){

            if(herois[i] != null){

                if(herois[i] instanceof Anao){
                    Anao anaoAux = (Anao) herois[i];
                    anaoAux.atacar();
                    anaoAux.minerar();
                }

                if(herois[i] instanceof Elfo){
                    Elfo elfoAux = (Elfo) herois[i];
                    elfoAux.atacar();
                    elfoAux.curar();
                    elfoAux.viajar();
                }

                if(herois[i] instanceof Mago){
                    Mago magoAux = (Mago) herois[i];
                    magoAux.atacar();
                    magoAux.lancaFeitico();
                    magoAux.curar();
                }

                herois[i].mostraInfo();
            }
        }
    }

    //Getter e Setter
    public Habitante[] getHerois() {
        return herois;
    }

    public void setHerois() {
        this.herois = herois;
    }
}
