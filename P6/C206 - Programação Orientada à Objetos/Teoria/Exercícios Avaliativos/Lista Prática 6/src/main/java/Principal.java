import modelo.Company;
import modelo.Game;
import modelo.Platform;
import other.CsvUtils;
import servico.Servico;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Principal {

    public static void main(String[] args) {

        Path caminho = null;

        try{

            caminho = Paths.get(ClassLoader.getSystemResource("vendas-games.csv").toURI());
        }

        catch(Exception e){
            e.printStackTrace();
        }

        List<Game> lista_jogos = CsvUtils.readGameCsv(caminho);

        int num_linhas = lista_jogos.size();

        //Imprimindo o número de linhas
        System.out.println("O número de linhas é " + num_linhas);

        List<Game> jogos_PS4 = Servico.gamesByPlatform(lista_jogos, Platform.PS4);

        //Imprimindo o número de jogos de PS4
        System.out.println("\nNúmero de jogos de PS4 (Melhor plaforma da lista): " + jogos_PS4.size() + "\n");
        System.out.println("São eles: ");
        jogos_PS4.forEach(e -> System.out.println("  " + e.getName()));
        System.out.println(" ");

        //Imprimindo o número de jogos da publisher Activision
        List<Game> jogos_activision = Servico.gamesByCompany(lista_jogos, Company.Activision);
        System.out.println("Número de jogos da Activision: " + jogos_activision.size() + "\n");
        System.out.println("São eles: ");
        jogos_activision.forEach(e -> System.out.println("  " + e.getName()));
    }
}
