DROP DATABASE IF EXISTS RE4;
CREATE DATABASE RE4;
USE RE4;

-- -----------------------------------------------------
-- Criando Tabela "Merchant"
-- -----------------------------------------------------

CREATE TABLE IF NOT EXISTS Merchant(
   idMerchant INT NOT NULL,
   items INT NOT NULL,
   PRIMARY KEY (`idMerchant`)
);

-- -----------------------------------------------------
-- Criando Tabela "Player"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Player (
  idPlayer INT NOT NULL,
  namePlayer VARCHAR(45) NOT NULL,
  life DOUBLE NOT NULL,
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
  idItem INT NOT NULL,
  valueItem DOUBLE NOT NULL,
  typeItem VARCHAR(45) NOT NULL,
  nameItem VARCHAR(45) NOT NULL,
  idMerchant INT,
  PRIMARY KEY (idItem),
  CONSTRAINT fk_Item_Merchant1
    FOREIGN KEY (idMerchant)
    REFERENCES Merchant (idMerchant)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION
    );

-- -----------------------------------------------------
-- Criando Tabela "Gun"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Gun (
  idGun INT NOT NULL,
  fire_power DOUBLE NOT NULL,
  firing_speed DOUBLE NOT NULL,
  reload_speed DOUBLE NOT NULL,
  capacity INT NOT NULL,
  rangeGun INT NOT NULL,
  explosion varchar(10) NOT NULL,
  capacity_total INT NOT NULL,
  num_bulls_mag INT NOT NULL,
  idItem INT NOT NULL,
  PRIMARY KEY (idGun),  
  CONSTRAINT fk_Gun_Item1
    FOREIGN KEY (idItem)
    REFERENCES Item (idItem)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION
  );
  
-- -----------------------------------------------------
-- Criando Tabela "Treasure"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Treasure (
  idTreasures INT NOT NULL,
  nameTreasure VARCHAR(45) NOT NULL,
  idItem INT NOT NULL,
  PRIMARY KEY (idTreasures),
  CONSTRAINT fk_Treasures_Item1
    FOREIGN KEY (idItem)
    REFERENCES Item (idItem)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- -----------------------------------------------------
-- Criando Tabela "Heal"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Heal (
  idHeal INT NOT NULL,
  typeHeal VARCHAR(45) NOT NULL,
  effect VARCHAR(45) NOT NULL,
  idItem INT NOT NULL,
  PRIMARY KEY (idHeal),
  CONSTRAINT fk_Heal_Item1
    FOREIGN KEY (idItem)
    REFERENCES Item (idItem)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

-- -----------------------------------------------------
-- Criando Tabela "Granade"
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Granade (
  idGranade INT NOT NULL,
  typeGranade VARCHAR(45) NOT NULL,
  rangeGranade DOUBLE NOT NULL,
  explosion_power DOUBLE NOT NULL,
  color VARCHAR(15) NOT NULL,
  idItem INT NOT NULL,
  PRIMARY KEY (idGranade),
  CONSTRAINT fk_Granade_Item
    FOREIGN KEY (idItem)
    REFERENCES Item (idItem)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);


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

select * from gun;
select * from item;
select * from granade;
select * from heal;
select * from treasure;