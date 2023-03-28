import java.util.ArrayList;

public class MockProfessorService implements ProfessorService{
    private ArrayList<Integer> predios = new ArrayList<Integer>();
    @Override
    public String search(String name) {
        if (name.equalsIgnoreCase("Chris")){
            return ProfessorConst.CHRIS;
        }

        else if (name.equalsIgnoreCase("Renzo")){
            return ProfessorConst.RENZO;
        }

        else if (name.equalsIgnoreCase("Marcelo")){
            return ProfessorConst.MARCELO;
        }

        else if (name.equalsIgnoreCase("Yvo")){
            return ProfessorConst.YVO;
        }

        else if (name.equalsIgnoreCase("Samuel")) {
            return ProfessorConst.SAMUEL;
        }

        else{
            return ProfessorConst.INEXISTENTE;
        }
    }

    @Override
    public boolean professorExists(String name) {

        ArrayList<String> lista = new ArrayList<String>();
        lista.add("Chris");
        lista.add("Renzo");
        lista.add("Marcelo");
        lista.add("Yvo");
        lista.add("Samuel");

        for (int i=0; i < lista.size(); i++){
            if (lista.get(i).equals(name)){
                return true;
            }else{
                return false;
            }
        }

        return false;
    }
}
