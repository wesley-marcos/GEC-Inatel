package servico;

import modelo.Company;
import modelo.Game;
import modelo.Platform;

import java.util.ArrayList;
import java.util.List;

public class Servico {

    //Método para busca de jogos pela platafoma
    public static List<Game> gamesByPlatform(List<Game> games, Platform plataforma){

        List<Game> jogos_plataforma = new ArrayList<>();

        try{
            games.stream().filter((game ->
                            game.getPlatflorm().equals(plataforma.name()))).
                            forEach(game -> jogos_plataforma.add(game));
        }

        catch(Exception e){
            System.out.println(e);
        }

        return jogos_plataforma;
    }

    //Método para busca de jogos pela empresa desenvolvedora
    public static List<Game> gamesByCompany(List<Game> games, Company company){

        List<Game> jogos_companies = new ArrayList<>();

        try{

            games.stream().filter((game ->
                            game.getPublisher().replaceAll("\\s+", "").equals(company.name()))).
                            forEach(game -> jogos_companies.add(game));


        }

        catch (Exception e){
            System.out.println(e);
        }

        return jogos_companies;
    }


}
