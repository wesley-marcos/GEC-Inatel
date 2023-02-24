package delete;

import items.Item;

import java.sql.SQLException;
import dao.ConnectionDAO;

public class Delete_gun extends ConnectionDAO {

    boolean sucesso = false;

    public Item buscar(Item item) {

        connectToDB();
        Item itemAux = null;
        String sql = "SELECT * FROM Item WHERE typeItem = ?";

        try {
            pst = con.prepareStatement(sql);
            pst.setString(1, item.typeItem);
            rs = pst.executeQuery();
            while (rs.next()) {
                String aux = rs.getString("type");
                if (aux.isEmpty()) {
                    sucesso = false;
                } else {
                    itemAux = new Item(0);
                    itemAux.nameItem = rs.getString("name");
                    itemAux.idItem = rs.getInt("id");
                    System.out.println("Nome = " + itemAux.nameItem);
                    System.out.println("ID = " + itemAux.idItem);
                    System.out.println("--------------------------------");
                }
            }
            sucesso = true;
        } catch (SQLException e) {
            System.out.println("Erro: " + e.getMessage());
            sucesso = false;
        } finally {
            try {
                con.close();
                pst.close();
            } catch (SQLException e) {
                System.out.println("Erro: " + e.getMessage());
            }
        }
        return itemAux;
    }
}