package dao;

import java.sql.*;

public class ConnectionDAO {

    public Connection con; //conexão
    public PreparedStatement pst; // declaração(query) preparada - código em sql
    public Statement st; //declaração(query) - código em sql
    public ResultSet rs; //resposta do banco

    String database = "re4"; //Banco de dados
    String url = "jdbc:mysql://127.0.0.1:3306/" + database + "?useTimezone=true&serverTimezone=UTC&useSSL=false&allowPublicKeyRetrieval=true";
    String user = "root";
    String password = "root";

    //Método para conectar ao BD
    public void connectToDB() {
        try {
            con = DriverManager.getConnection(url, user, password);
            System.out.println("Conexão deu certo!");
        } catch(SQLException exc) {
            System.out.println("Erro: " + exc.getMessage());
        }
    }
}
