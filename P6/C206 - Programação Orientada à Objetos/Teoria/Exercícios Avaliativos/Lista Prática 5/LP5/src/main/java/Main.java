import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Main {

    public static void main(String[] args) {

        Path caminho = Paths.get("funcionarios.csv");
        Map<String, String> id_estCivil = new HashMap<>();
        Map<String, String> inst_filhos = new HashMap<>();
        Map<String, String> id_salario = new HashMap<>();

        try{

            List<String> linhas = Files.readAllLines(caminho);

            linhas.forEach(l -> {
                String linhaSplit[] = l.split(",");
                id_estCivil.put(linhaSplit[0], linhaSplit[1]);
                inst_filhos.put(linhaSplit[2], linhaSplit[3]);
                id_salario.put(linhaSplit[0], linhaSplit[4]);
            });

            id_estCivil.forEach((id, estado) -> {
                System.out.println("Id: " + id + ", Estado Civil: " + estado);
            });

        } catch(Exception e){
            System.out.println("Deu ruim.");
        }
    }
}
