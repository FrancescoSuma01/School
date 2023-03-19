**Schema (MySQL v8.0)**

    CREATE DATABASE IF NOT EXISTS Banca;
    
    
        CREATE TABLE IF NOT EXISTS Filiale(
          idFiliale int unsigned not null AUTO_INCREMENT primary key,
          nome VARCHAR(30),
          citta VARCHAR(30),
          patrimonio float
        );
    
    
        CREATE TABLE IF NOT EXISTS Cliente(
          idCliente int unsigned not null AUTO_INCREMENT primary key,
          cf VARCHAR(20),
          nominativo VARCHAR(20),
          indirizzo VARCHAR(30),
          citta VARCHAR(30),
          numeroTelefono VARCHAR(20)
        );
    
    
        CREATE TABLE IF NOT EXISTS Conto(
          idConto int unsigned not null AUTO_INCREMENT primary key,
          saldo float,
          idCliente int unsigned,
          FOREIGN KEY (idCliente) REFERENCES Cliente(idCliente)
        );
    
    
        CREATE TABLE IF NOT EXISTS Prestito(
          idPrestito int unsigned not null AUTO_INCREMENT primary key,
          idCliente int unsigned,
          quantita float,
          idFiliale int unsigned,
          matricolaImpiegato VARCHAR(30),
          startDate DATE,
          endDate DATE,
          FOREIGN KEY (idCliente) REFERENCES Cliente(idCliente),
          FOREIGN KEY (idFiliale) REFERENCES Filiale(idFiliale)
        );
    
    
        CREATE TABLE IF NOT EXISTS Intestatario(
          idConto int unsigned,
          idCliente int unsigned,
          PRIMARY KEY (idConto, idCliente),
          FOREIGN KEY (idConto) REFERENCES Conto(idConto),
          FOREIGN KEY (idCliente) REFERENCES Cliente(idCliente)
        );

---

**Query #1**

    INSERT INTO Filiale VALUES 
    (NULL, 'Filiale Milano', 'Milano', 100000.00),
    (NULL, 'Filiale Roma', 'Roma', 120000.00),
    (NULL, 'Filiale Napoli', 'Napoli', 80000.00),
    (NULL, 'Filiale Firenze', 'Firenze', 90000.00),
    (NULL, 'Filiale Torino', 'Torino', 110000.00),
    (NULL, 'Filiale Bologna', 'Bologna', 85000.00),
    (NULL, 'Filiale Venezia', 'Venezia', 95000.00),
    (NULL, 'Filiale Genova', 'Genova', 75000.00),
    (NULL, 'Filiale Palermo', 'Palermo', 70000.00),
    (NULL, 'Filiale Catania', 'Catania', 60000.00);

There are no results to be displayed.

---
**Query #2**

    INSERT INTO Cliente VALUES 
    (NULL, 'ABCDEF01G23H456I', 'Mario Rossi', 'Via Roma 1', 'Milano', '02 1234567'),
    (NULL, 'CDEFGH01I23L456M', 'Giuseppe Verdi', 'Via Garibaldi 2', 'Roma', '06 1234567'),
    (NULL, 'EFGHIJ01L23N456O', 'Paola Bianchi', 'Via Dante 3', 'Napoli', '081 1234567'),
    (NULL, 'GHIJKL01N23P456Q', 'Giovanni Neri', 'Via delle Rose 4', 'Firenze', '055 1234567'),
    (NULL, 'IJKLMN01P23R456S', 'Laura Verde', 'Via delle Viole 5', 'Torino', '011 1234567'),
    (NULL, 'KLMNOP01R23T456U', 'Luigi Gialli', 'Via del Mare 6', 'Bologna', '051 1234567'),
    (NULL, 'MNOPQR01T23V456W', 'Sara Rossi', 'Via degli Ulivi 7', 'Venezia', '041 1234567'),
    (NULL, 'OPQRST01V23Y456Z', 'Alessandro Bianchi', 'Via del Sole 8', 'Genova', '010 1234567'),
    (NULL, 'QRSTUV01X23A456B', 'Anna Verdi', 'Via dei Fiori 9', 'Palermo', '091 1234567'),
    (NULL, 'STUVWX01Z23B456C', 'Paolo Neri', 'Via delle Margherite 10', 'Catania', '095 1234567');

There are no results to be displayed.

---
**Query #3**

    INSERT INTO Conto VALUES
    (NULL, 1000.00, 1),
    (NULL, 500.00, 2),
    (NULL, 750.00, 3),
    (NULL, 2000.00, 4),
    (NULL, 1500.00, 5),
    (NULL, 3000.00, 6),
    (NULL, 10000.00, 7),
    (NULL, 800.00, 8),
    (NULL, 2500.00, 9),
    (NULL, 5000.00, 10);

There are no results to be displayed.

---
**Query #4**

    INSERT INTO Prestito VALUES
    (NULL, 1, 5000.00, 1, 'AB123', '2022-01-01', '2022-12-31'),
    (NULL, 2, 3000.00, 1, 'AB123', '2022-02-15', '2023-02-15'),
    (NULL, 3, 7500.00, 2, 'CD456', '2022-03-01', '2022-12-31'),
    (NULL, 4, 10000.00, 2, 'CD456', '2022-01-01', '2022-12-31'),
    (NULL, 5, 1500.00, 3, 'EF789', '2022-05-01', '2023-05-01'),
    (NULL, 6, 5000.00, 3, 'EF789', '2022-01-01', '2023-01-01'),
    (NULL, 7, 8000.00, 4, 'GH123', '2022-06-01', '2023-06-01'),
    (NULL, 8, 2000.00, 4, 'GH123', '2022-03-15', '2023-03-15'),
    (NULL, 9, 10000.00, 5, 'IJ456', '2022-07-01', '2023-07-01'),
    (NULL, 10, 5000.00, 5, 'IJ456', '2022-01-01', '2022-12-31');

There are no results to be displayed.

---
**Query #5**

    INSERT INTO Intestatario (idConto, idCliente) VALUES (1, 10), (2, 9), (3, 8), (4, 7), (5, 6), (6, 5), (7, 4), (8, 3), (9, 2), (10, 1);

There are no results to be displayed.

---
**Query #6**

    SELECT Prestito.quantita, Prestito.idCliente, Cliente.cf, Cliente.nominativo, Cliente.indirizzo, Cliente.citta, Cliente.numeroTelefono
        FROM Prestito
        INNER JOIN Cliente ON Prestito.idCliente = Cliente.idCliente;

| quantita | idCliente | cf               | nominativo         | indirizzo               | citta   | numeroTelefono |
| -------- | --------- | ---------------- | ------------------ | ----------------------- | ------- | -------------- |
| 5000     | 1         | ABCDEF01G23H456I | Mario Rossi        | Via Roma 1              | Milano  | 02 1234567     |
| 3000     | 2         | CDEFGH01I23L456M | Giuseppe Verdi     | Via Garibaldi 2         | Roma    | 06 1234567     |
| 7500     | 3         | EFGHIJ01L23N456O | Paola Bianchi      | Via Dante 3             | Napoli  | 081 1234567    |
| 10000    | 4         | GHIJKL01N23P456Q | Giovanni Neri      | Via delle Rose 4        | Firenze | 055 1234567    |
| 1500     | 5         | IJKLMN01P23R456S | Laura Verde        | Via delle Viole 5       | Torino  | 011 1234567    |
| 5000     | 6         | KLMNOP01R23T456U | Luigi Gialli       | Via del Mare 6          | Bologna | 051 1234567    |
| 8000     | 7         | MNOPQR01T23V456W | Sara Rossi         | Via degli Ulivi 7       | Venezia | 041 1234567    |
| 2000     | 8         | OPQRST01V23Y456Z | Alessandro Bianchi | Via del Sole 8          | Genova  | 010 1234567    |
| 10000    | 9         | QRSTUV01X23A456B | Anna Verdi         | Via dei Fiori 9         | Palermo | 091 1234567    |
| 5000     | 10        | STUVWX01Z23B456C | Paolo Neri         | Via delle Margherite 10 | Catania | 095 1234567    |

---
**Query #7**

    SELECT DISTINCT Cliente.idCliente, Cliente.cf, Cliente.nominativo, Cliente.indirizzo, Cliente.citta, Cliente.numeroTelefono
        FROM Cliente
        INNER JOIN Conto ON Cliente.idCliente = Conto.idCliente
        INNER JOIN Prestito ON Cliente.idCliente = Prestito.idCliente;

| idCliente | cf               | nominativo         | indirizzo               | citta   | numeroTelefono |
| --------- | ---------------- | ------------------ | ----------------------- | ------- | -------------- |
| 1         | ABCDEF01G23H456I | Mario Rossi        | Via Roma 1              | Milano  | 02 1234567     |
| 2         | CDEFGH01I23L456M | Giuseppe Verdi     | Via Garibaldi 2         | Roma    | 06 1234567     |
| 3         | EFGHIJ01L23N456O | Paola Bianchi      | Via Dante 3             | Napoli  | 081 1234567    |
| 4         | GHIJKL01N23P456Q | Giovanni Neri      | Via delle Rose 4        | Firenze | 055 1234567    |
| 5         | IJKLMN01P23R456S | Laura Verde        | Via delle Viole 5       | Torino  | 011 1234567    |
| 6         | KLMNOP01R23T456U | Luigi Gialli       | Via del Mare 6          | Bologna | 051 1234567    |
| 7         | MNOPQR01T23V456W | Sara Rossi         | Via degli Ulivi 7       | Venezia | 041 1234567    |
| 8         | OPQRST01V23Y456Z | Alessandro Bianchi | Via del Sole 8          | Genova  | 010 1234567    |
| 9         | QRSTUV01X23A456B | Anna Verdi         | Via dei Fiori 9         | Palermo | 091 1234567    |
| 10        | STUVWX01Z23B456C | Paolo Neri         | Via delle Margherite 10 | Catania | 095 1234567    |

---
**Query #8**

    SELECT c.*
    FROM Cliente c
    INNER JOIN Conto co ON c.idCliente = co.idCliente
    GROUP BY c.idCliente;

| idCliente | cf               | nominativo         | indirizzo               | citta   | numeroTelefono |
| --------- | ---------------- | ------------------ | ----------------------- | ------- | -------------- |
| 1         | ABCDEF01G23H456I | Mario Rossi        | Via Roma 1              | Milano  | 02 1234567     |
| 2         | CDEFGH01I23L456M | Giuseppe Verdi     | Via Garibaldi 2         | Roma    | 06 1234567     |
| 3         | EFGHIJ01L23N456O | Paola Bianchi      | Via Dante 3             | Napoli  | 081 1234567    |
| 4         | GHIJKL01N23P456Q | Giovanni Neri      | Via delle Rose 4        | Firenze | 055 1234567    |
| 5         | IJKLMN01P23R456S | Laura Verde        | Via delle Viole 5       | Torino  | 011 1234567    |
| 6         | KLMNOP01R23T456U | Luigi Gialli       | Via del Mare 6          | Bologna | 051 1234567    |
| 7         | MNOPQR01T23V456W | Sara Rossi         | Via degli Ulivi 7       | Venezia | 041 1234567    |
| 8         | OPQRST01V23Y456Z | Alessandro Bianchi | Via del Sole 8          | Genova  | 010 1234567    |
| 9         | QRSTUV01X23A456B | Anna Verdi         | Via dei Fiori 9         | Palermo | 091 1234567    |
| 10        | STUVWX01Z23B456C | Paolo Neri         | Via delle Margherite 10 | Catania | 095 1234567    |

---

[View on DB Fiddle](https://www.db-fiddle.com/)