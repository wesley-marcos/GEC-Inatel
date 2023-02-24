package other;
import com.opencsv.bean.CsvToBean;
import com.opencsv.bean.CsvToBeanBuilder;
import modelo.Game;

import java.io.Reader;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;

public class CsvUtils {

    //Método que lerá os dados do arquivo "vendas-games.csv"
    public static List<Game> readGameCsv(Path csvFilePath){

        List<Game> lista_jogos = new ArrayList<>();

        try {
            Reader reader = Files.newBufferedReader(csvFilePath);
            CsvToBean<Game> csvToBean = new CsvToBeanBuilder(reader)
                    .withType(Game.class)
                    .withIgnoreLeadingWhiteSpace(true)
                    .build();

            lista_jogos = csvToBean.parse();

        } catch (Exception e) {
            e.printStackTrace();
        }
        return lista_jogos;
    }

}