# Banca: console

### DDL

```sql
CREATE DATABASE IF NOT EXISTS Banca;
```

```sql
    CREATE TABLE IF NOT EXISTS Filiale(
      idFiliale int unsigned not null AUTO_INCREMENT primary key,
      nome VARCHAR(30),
      citta VARCHAR(30),
      patrimonio float
    );
```

```sql
    CREATE TABLE IF NOT EXISTS Cliente(
      idCliente int unsigned not null AUTO_INCREMENT primary key,
      cf VARCHAR(20),
      nominativo VARCHAR(20),
      indirizzo VARCHAR(30),
      citta VARCHAR(30),
      numeroTelefono VARCHAR(20)
    );
```

```sql
    CREATE TABLE IF NOT EXISTS Conto(
      idConto int unsigned not null AUTO_INCREMENT primary key,
      saldo float,
      idCliente int unsigned,
      FOREIGN KEY (idCliente) REFERENCES Cliente(idCliente)
    );
```

```sql
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
```

```sql
    CREATE TABLE IF NOT EXISTS Intestatario(
      idConto int unsigned,
      idCliente int unsigned,
      PRIMARY KEY (idConto, idCliente),
      FOREIGN KEY (idConto) REFERENCES Conto(idConto),
      FOREIGN KEY (idCliente) REFERENCES Cliente(idCliente)
    );
```

### QL

```sql
INSERT INTO Filiale VALUES 
('Filiale Roma Nord', 'Roma', 50000.00),
('Filiale Roma Sud', 'Roma', 60000.00),
('Filiale Milano Centro', 'Milano', 70000.00),
('Filiale Milano Est', 'Milano', 45000.00),
('Filiale Napoli Centro', 'Napoli', 40000.00),
('Filiale Napoli Est', 'Napoli', 55000.00),
('Filiale Firenze Centro', 'Firenze', 35000.00),
('Filiale Firenze Sud', 'Firenze', 48000.00),
('Filiale Torino Centro', 'Torino', 60000.00),
('Filiale Torino Nord', 'Torino', 43000.00),
('Filiale Bologna Centro', 'Bologna', 58000.00),
('Filiale Bologna Est', 'Bologna', 37000.00),
('Filiale Venezia Centro', 'Venezia', 32000.00),
('Filiale Venezia Nord', 'Venezia', 51000.00),
('Filiale Genova Centro', 'Genova', 42000.00),
('Filiale Genova Ovest', 'Genova', 45000.00),
('Filiale Palermo Centro', 'Palermo', 48000.00),
('Filiale Palermo Est', 'Palermo', 53000.00),
('Filiale Catania Centro', 'Catania', 55000.00),
('Filiale Catania Sud', 'Catania', 47000.00),
('Filiale Bari Centro', 'Bari', 39000.00),
('Filiale Bari Nord', 'Bari', 44000.00),
('Filiale Verona Centro', 'Verona', 51000.00),
('Filiale Verona Sud', 'Verona', 37000.00),
('Filiale Trieste Centro', 'Trieste', 29000.00),
('Filiale Trieste Ovest', 'Trieste', 35000.00),
('Filiale Cagliari Centro', 'Cagliari', 36000.00),
('Filiale Cagliari Nord', 'Cagliari', 43000.00),
('Filiale Reggio Calabria Centro', 'Reggio Calabria', 41000.00),
('Filiale Reggio Calabria Est', 'Reggio Calabria', 47000.00);
```

```sql
INSERT INTO Cliente VALUES 
(NULL, , "Demarcus Lueilwitz", "077 Tania Drive", "Gottliebtown", "609-735-5211")
(NULL, , "Reese Cruickshank", "5174 Mosciski Streets", "Leesburg", "581-901-3972")
(NULL, , "Daniela Morissette", "45149 Waters Turnpike", "North Harvey", "622-284-8236")
(NULL, , "Anya Koss", "317 Joan Shoal", "Lake Murphyfort", "225-232-0803")
(NULL, , "Gudrun Bernhard", "3795 Crona Spurs", "Adeliastad", "472-797-5943")
(NULL, , "Bradley Jacobson", "9186 Elton Ville", "North Winstonside", "525-841-7737")
(NULL, , "Amelia Kuhn", "30749 Kutch Throughway", "Port Kaylah", "462-918-7946")
(NULL, , "Bennett Schaefer", "83689 Ronny Gateway", "Tyler", "724-977-1731")
(NULL, , "Sallie Torp", "8517 Osinski Mountain", "Albany", "830-822-8232")
(NULL, , "Kiana Stehr", "90337 Sofia Orchard", "Springfield", "222-714-7476")
(NULL, , "Adelle Mante", "4983 Emilia Greens", "West Lorinemouth", "276-608-7235")
(NULL, , "Melvin Braun", "110 Wolf Fork", "Port Gonzalo", "781-371-5507")
(NULL, , "Claudie O'Hara", "54058 Enoch Stravenue", "Margueriteburgh", "854-996-8893")
(NULL, , "Danielle Gerlach", "2032 Pagac Glens", "Hoppestad", "608-461-3144")
(NULL, , "Mireille Nicolas", "3468 Dasia Gardens", "New Ross", "225-924-7457")
(NULL, , "Carmelo O'Connell", "93553 Heath Burgs", "Boyleport", "463-206-8514")
(NULL, , "Lexi Emmerich", "67094 Brown Walks", "Spring Hill", "233-731-7121")
(NULL, , "Geraldine Nikolaus", "604 Rosa Skyway", "South Jacques", "378-709-3912")
(NULL, , "Ole O'Conner", "91349 Ted Freeway", "Millcreek", "268-642-6063")
(NULL, , "Georgette Mitchell", "0244 Haley Row", "North Naomiton", "282-453-0632")
(NULL, , "Adrianna Schoen", "42595 Quentin Drive", "Mansfield", "207-386-3237")
(NULL, , "Clarabelle Bayer", "10947 Lubowitz Springs", "Lake Medatown", "202-694-5234")
(NULL, , "Otis Johnston", "6339 Darian Unions", "Bryan", "675-973-5255")
(NULL, , "Zula Rice", "580 Brigitte Junctions", "Tamarac", "212-588-1536")
(NULL, , "Katrine Hammes", "385 Andres Land", "Trompport", "875-457-2837")
(NULL, , "Adolph Terry", "94506 Meta Drive", "Hamillfort", "941-413-9023")
(NULL, , "Percival Jacobson", "52694 Dana Park", "Jolietown", "263-525-7323")
(NULL, , "Leonie Padberg", "14041 Freida Unions", "Leuschkeborough", "730-880-1885")
(NULL, , "Assunta Schuster", "88489 Konopelski Ramp", "Osinskiport", "845-775-6306")
(NULL, , "Francesco Ortiz", "760 Dave Islands", "Mauriciobury", "573-272-7804")
(NULL, , "Kevon Hammes", "070 Rosanna Squares", "Lake Pearlie", "560-314-7669")
```

```sql
INSERT INTO Conto VALUES
 (NULL, 5000, 1),
 (NULL, 10000, 1),
 (NULL, 7500, 2),
 (NULL, 12000, 3),
 (NULL, 4000, 4),
 (NULL, 8000, 4),
 (NULL, 6500, 4),
 (NULL, 9000, 5),
 (NULL, 5500, 6),
 (NULL, 6000, 6),
 (NULL, 9500, 6),
 (NULL, 7000, 7),
 (NULL, 8500, 8),
 (NULL, 5000, 9),
 (NULL, 10000, 10),
 (NULL, 7500, 11),
 (NULL, 12000, 11),
 (NULL, 4000, 12),
 (NULL, 8000, 12),
 (NULL, 6500, 12),
 (NULL, 9000, 13),
 (NULL, 5500, 14),
 (NULL, 6000, 15),
 (NULL, 9500, 15),
 (NULL, 7000, 16),
 (NULL, 8500, 17),
 (NULL, 5000, 18),
 (NULL, 10000, 18),
 (NULL, 7500, 19),
 (NULL, 12000, 20),
 (NULL, 4000, 21),
 (NULL, 8000, 22),
 (NULL, 6500, 22),
 (NULL, 9000, 23),
 (NULL, 5500, 24),
 (NULL, 6000, 25),
 (NULL, 9500, 25),
 (NULL, 7000, 25),
 (NULL, 8500, 26),
 (NULL, 5000, 27),
 (NULL, 10000, 28),
 (NULL, 7500, 29);
```

```sql
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
```

```sql
INSERT INTO Intestatario (idConto, idCliente) VALUES (1, 10), (2, 9), (3, 8), (4, 7), (5, 6), (6, 5), (7, 4), (8, 3), (9, 2), (10, 1);
```

<!-- per ogni prestito, il valore del prestito e i dati identificativi dei clienti che lo hanno stipulato -->

```sql
SELECT Prestito.quantita, Prestito.idCliente, Cliente.cf, Cliente.nominativo, Cliente.indirizzo, Cliente.citta, Cliente.numeroTelefono
    FROM Prestito
    INNER JOIN Cliente ON Prestito.idCliente = Cliente.idCliente;
```

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

<!-- elenco di tutti i clienti che hanno almeno un deposito e almeno un prestito -->

```sql
SELECT DISTINCT Cliente.idCliente, Cliente.cf, Cliente.nominativo, Cliente.indirizzo, Cliente.citta, Cliente.numeroTelefono
    FROM Cliente
    INNER JOIN Conto ON Cliente.idCliente = Conto.idCliente
    INNER JOIN Prestito ON Cliente.idCliente = Prestito.idCliente;
```

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

<!-- elenco di tutti i clienti titolari di almeno un deposito ma non di un prestito -->

```sql
    SELECT Cliente.*
    FROM Cliente
    INNER JOIN Conto ON Cliente.idCliente = Conto.idCliente
    GROUP BY Cliente.idCliente;
```

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

<!-- per ogni filiale, il numero dei titolari di conti correnti (contare ogni cliente una sola volta) -->

```sql
SELECT F.id, COUNT(Distinct D.idCliente) as numCorrentisti FROM Filiale F LEFT JOIN;
```

<!-- elenco di tutte le filiali che hanno un patrimonio maggiore del più piccolo capitale delle filiali di Livorno -->
