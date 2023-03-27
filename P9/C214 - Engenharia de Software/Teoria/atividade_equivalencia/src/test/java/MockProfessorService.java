import java.util.ArrayList;

public class MockProfessorService implements ProfessorService{

    @Override
    public String search(String name) {
        if (name == "Christopher"){
            return ProfessorConst.CHRIS;
        }

        else if (name == "Renzo"){
            return ProfessorConst.RENZO;
        }

        else if (name == "Marcelo"){
            return ProfessorConst.MARCELO;
        }

        else if (name == "Yvo"){
                return ProfessorConst.YVO;
        }

        else if (name == "Samuel") {
                    return ProfessorConst.SAMUEL;
        }

        else{
            return ProfessorConst.INEXISTENTE;
        }
    }

    @Override
    public boolean professorExists(String name) {

        ArrayList<String> lista = new ArrayList<String>();
        lista.add("Christopher");
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
