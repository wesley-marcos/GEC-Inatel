DROP DATABASE IF EXISTS RE4;
CREATE DATABASE RE4;
USE RE4;

-- -----------------------------------------------------
-- Criando Tabela "Merchant"
-- -----------------------------------------------------

CREATE TABLE IF NOT EXISTS Merchant(
   idMerchant INT NOT NULL,
   PRIMARY KEY (idMerchant)
);

-- -----------------------------------------------------
-- Criando Tabela "Player"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Player (
  idPlayer INT NOT NULL AUTO_INCREMENT,
  namePlayer VARCHAR(45) NOT NULL,
  pasetas DOUBLE NOT NULL,
  inventory INT NOT NULL,
  idMerchant INT NOT NULL,
  PRIMARY KEY (idPlayer),
  CONSTRAINT fk_Player_Merchant1
    FOREIGN KEY (idMerchant)
    REFERENCES Merchant (idMerchant)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);


-- -----------------------------------------------------
-- Criando Tabela "Item"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Item(
  idItem INT NOT NULL AUTO_INCREMENT,
  nameItem VARCHAR(45) NOT NULL,
  valueItem DOUBLE NOT NULL,
  idPlayer INT,
  PRIMARY KEY (idItem)
 );

-- -----------------------------------------------------
-- Criando Tabela "Gun"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Gun (
  idGun INT NOT NULL AUTO_INCREMENT,
  fire_power DOUBLE NOT NULL,
  firing_speed DOUBLE NOT NULL,
  reload_speed DOUBLE NOT NULL,
  capacity INT NOT NULL,
  rangeGun INT NOT NULL,
  explosion VARCHAR(10),
  capacity_total INT,
  num_bulls_mag INT,
  idItem INT NOT NULL,
  PRIMARY KEY (idGun),  
  CONSTRAINT fk_Gun_Item
    FOREIGN KEY (idItem)
    REFERENCES Item (idItem)
    ON DELETE CASCADE
    ON UPDATE CASCADE
  );
  
-- -----------------------------------------------------
-- Criando Tabela "Belong"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Belong (
  idPlayer INT NOT NULL,
  idItem INT NOT NULL,
  PRIMARY KEY (idPlayer, idItem),
  CONSTRAINT fk_Player_has_Item_Player1
    FOREIGN KEY (idPlayer)
    REFERENCES Player (idPlayer)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT fk_Player_has_Item_Item1
    FOREIGN KEY (idItem)
    REFERENCES Item (idItem)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);


-- -----------------------------------------------------
-- Setando Valores Estáticos
-- -----------------------------------------------------
INSERT INTO Merchant VALUES (1);
INSERT INTO Player VALUES (1, "Leon", 2000, 6, 1);
INSERT INTO Item VALUES (1, "Red 9", 0, 1);
INSERT INTO Gun VALUES (1, 6.5, 1.8, 3.2, 22, 9, "Não", 200, 20, 1);
INSERT INTO Belong VALUES (1, 1);

select * from Merchant;
select * from Player;
select * from Item;
select * from Belong;
select * from gun;