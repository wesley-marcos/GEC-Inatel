import com.google.gson.JsonObject;
import com.google.gson.JsonParser;


public class BuscaProfessor {

    ProfessorService professorService;

    public BuscaProfessor(ProfessorService pService) {
        this.professorService = pService;
    }

    public Professor searchProfessor(String nome){

        String professorJ = professorService.search(nome);

        JsonObject obj = JsonParser.parseString(professorJ).getAsJsonObject();

        return new Professor(
                obj.get("nomeDoProfessor").getAsString(),
                obj.get("horarioDeAtendimento").getAsString(),
                obj.get("periodo").getAsString(),
                obj.get("sala").getAsString());
    }

    public boolean verifyProfessorExists(String nome){

        boolean professor = professorService.professorExists(nome);

        if(professor){
            return true;
        }

        else{
            return false;
        }
    }
}
