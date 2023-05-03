# DDL

```SQL
--Creazione del database a--
CREATE DATABASE IF NOT EXISTS City2City;

--Specifica del database utilizzato--
USE City2City;

--Creazione della tabella Qualifica--
CREATE TABLE IF NOT EXISTS Qualifica(
    ID_Qualifica int AUTO_INCREMENT PRIMARY KEY, 
    nome VARCHAR(30)
);

--Creazione della tabella Dipendente--
CREATE TABLE IF NOT EXISTS Dipendente(
    cf int AUTO_INCREMENT PRIMARY KEY, 
    nome VARCHAR(30), 
    cognome VARCHAR(30), 
    id int, 
    qualifica int, 
    FOREIGN KEY (qualifica) REFERENCES Qualifica(ID_Qualifica)
);

--Creazione della tabella Ditta--
CREATE TABLE IF NOT EXISTS Ditta(
    ID_Ditta int AUTO_INCREMENT PRIMARY KEY, 
    citta VARCHAR(50), 
    nome VARCHAR(50)
);

--Creazione della tabella GT--
CREATE TABLE IF NOT EXISTS GT(
    ID int AUTO_INCREMENT PRIMARY KEY, 
    last_Manutenzione date, 
    ditta int, 
    FOREIGN KEY (ditta) REFERENCES Ditta(ID_Ditta)
);

--Creazione della tabella Utente--
CREATE TABLE IF NOT EXISTS Utente(
    CF int AUTO_INCREMENT PRIMARY KEY, 
    nome VARCHAR(30), 
    cognome VARCHAR(30), 
    num_figli int, 
    interesse VARCHAR(30)
);

--Creazione della tabella Prenotazione--
CREATE TABLE IF NOT EXISTS Prenotazione(
    ID_Prenotazione int AUTO_INCREMENT PRIMARY KEY, 
    giorno DATETIME, 
    CF int, 
    FOREIGN KEY (CF) REFERENCES Utente(CF)
);

--Creazione della tabella Nazione--
CREATE TABLE IF NOT EXISTS Nazione(
    Id_Nazione int AUTO_INCREMENT PRIMARY KEY, 
    nome VARCHAR(50)
);

--Creazione della tabella Destinazione--
CREATE TABLE IF NOT EXISTS Destinazione(
    ID_Destinazione int AUTO_INCREMENT PRIMARY KEY, 
    nome VARCHAR(30), 
    Nazione int, 
    FOREIGN KEY (nazione) REFERENCES Nazione(ID_nazione)
);

--Creazione della tabella Tratta--
CREATE TABLE IF NOT EXISTS Tratta(
    ID_Tratta int AUTO_INCREMENT PRIMARY KEY, 
    partenza DATETIME, 
    arrivo DATETIME, 
    tipo VARCHAR(50), 
    Destinazione int, 
    FOREIGN KEY (destinazione) REFERENCES Destinazione(ID_Destinazione)
);

--Creazione della tabella Viaggio--
CREATE TABLE IF NOT EXISTS Viaggio(
    ID_Viaggio int AUTO_INCREMENT PRIMARY KEY, 
    partenza DATETIME, 
    arrivo DATETIME, 
    Numero_Passeggeri int, 
    GT int,
    primoAutista int,
    secondoAutista int,
    assistente int,
    tratta int,
    prenotazione int,
    FOREIGN KEY (GT) REFERENCES GT(ID),
    FOREIGN KEY (primoAutista) REFERENCES Dipendente(cf),
    FOREIGN KEY (secondoAutista) REFERENCES Dipendente(cf),
    FOREIGN KEY (assistente) REFERENCES Dipendente(cf),
    FOREIGN KEY (tratta) REFERENCES Tratta(ID_Tratta),
    FOREIGN KEY (prenotazione) REFERENCES Prenotazione(ID_Prenotazione)
);
```
