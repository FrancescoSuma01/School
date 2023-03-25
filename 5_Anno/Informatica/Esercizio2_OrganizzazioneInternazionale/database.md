# Database: Organizzazione Internazionale

### DDL

```SQL
CREATE TABLE Ruolo (
  idRuolo INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
  tipo VARCHAR(50)
);

CREATE TABLE Iscritto (
  idIscritto INT PRIMARY KEY,
  nome VARCHAR(50),
  cognome VARCHAR(50),
  bDate DATE,
  telefono VARCHAR(50),
  nazione VARCHAR(50),
  idRuolo INT,
  FOREIGN KEY (idRuolo) REFERENCES Ruolo(idRuolo)
);

CREATE TABLE Iscrizione (
  idIscrizione INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
  data DATE,
  importo FLOAT,
  idIscritto INT,
  FOREIGN KEY (idIscritto) REFERENCES Iscritto(idIscritto)
);
```

### QL

```SQL
INSERT INTO Ruolo (idRuolo, tipo) VALUES 
(1, 'socio ordinario'),
(2, 'sostenitore'),
(3, 'affiliato');
```

```SQL
INSERT INTO Iscritto (idIscritto, nome, cognome, bDate, telefono, nazione, idRuolo) VALUES
(1, 'Cleora', 'Harris', '1992-02-27', '1-877-655-0936 x355', 'New Hampshire', 1),
(2, 'Cecil', 'Schowalter', '1997-04-25', '993.222.9340 x514', 'Nevada', 2),
(3, 'Kennedi', 'Brekke', '1993-08-14', '930-483-3086', 'Massachusetts', 3),
(4, 'Duncan', 'Dach', '2000-11-30', '658.556.7160 x52491', 'Tennessee', 1),
(5, 'Alexa', 'Jakubowski', '1989-01-07', '1-605-705-1196 x79028', 'West Virginia', 2),
(6, 'Cooper', 'Willms', '1995-06-18', '1-609-521-0608 x218', 'New Mexico', 3),
(7, 'Carlos', 'Jast', '1987-09-23', '(644) 869-1301 x858', 'Kansas', 1),
(8, 'Joshua', 'Hudson', '1999-12-12', '1-271-637-1481', 'Texas', 2),
(9, 'Ezequiel', 'Schimmel', '1991-03-10', '559-889-0255', 'Hawaii', 3),
(10, 'Reese', 'Bogisich', '1998-02-28', '673.202.3105 x17049', 'Georgia', 1),
(11, 'Aylin', 'Rau', '1990-05-09', '911.971.0562 x61303', 'Delaware', 2),
(12, 'Aubrey', 'Franecki', '1996-10-21', '(557) 947-2370 x808', 'Colorado', 3),
(13, 'Isadore', 'Larson', '1985-07-17', '655.263.6693 x42675', 'Wisconsin', 1),
(14, 'Coleman', 'Brakus', '1992-09-04', '240-232-9649 x023', 'New Jersey', 2),
(15, 'Berry', 'Gleichner', '1994-12-08', '247-773-1255 x8428', 'Minnesota', 3),
(16, 'Jayce', 'Kozey', '1988-02-29', '668-798-9913', 'Maine', 1),
(17, 'Marjolaine', 'Langworth', '2001-06-26', '391.391.8076 x6711', 'Pennsylvania', 2),
(18, 'Loma', 'Koelpin', '1997-11-01', '960.701.7762', 'Ohio', 3),
(19, 'Emelie', 'Sauer', '1990-04-14', '843.491.4518 x84755', 'Maine', 1),
(20, 'Simone', 'Swift', '1993-10-02', '207.709.3884', 'Indiana', 2),
(21, 'Ambrose', 'Quigley', '1999-01-15', '259.820.9481', 'Wyoming', 3),
(22, 'Kiarra', 'Sporer', '1996-07-29', '402-609-5631', 'Wisconsin', 1),
(23, 'Cade', 'Gulgowski', '1986-12-03', '1-884-772-1284 x6036', 'New Hampshire', 2),
(24, 'Maiya', 'Nienow', '1991-05-18', '1-711-423-6852', 'Nevada', 3),
(25, 'Alison', 'Cummings', '1998-09-06', '696.850.3253', 'Iowa', 1);
```

```SQL
INSERT INTO Iscrizione (idIscrizione, data, importo, idIscritto) VALUES
(1, '2022-01-01', 100.00, 1),
(2, '2022-01-02', 150.50, 2),
(3, '2022-01-03', 75.20, 3),
(4, '2022-01-04', 120.00, 4),
(5, '2022-01-05', 90.30, 5),
(6, '2022-01-06', 200.00, 6),
(7, '2022-01-07', 50.00, 7),
(8, '2022-01-08', 180.00, 8),
(9, '2022-01-09', 130.50, 9),
(10, '2022-01-10', 75.00, 10),
(11, '2022-01-11', 90.00, 11),
(12, '2022-01-12', 220.50, 12),
(13, '2022-01-13', 150.00, 13),
(14, '2022-01-14', 100.00, 14),
(15, '2022-01-15', 120.00, 15),
(16, '2023-01-16', 90.50, 16),
(17, '2022-01-17', 80.00, 17),
(18, '2022-01-18', 150.00, 18),
(19, '2023-01-19', 70.00, 19),
(20, '2022-01-20', 120.00, 20),
(21, '2022-01-21', 100.50, 21),
(22, '2022-01-22', 50.00, 22),
(23, '2023-01-23', 130.00, 23),
(24, '2022-01-24', 90.00, 24),
(25, '2022-01-25', 100.00, 25);
```

### Query richieste:

----

1. iscritti con cognome, nome, telefono;

```SQL
SELECT cognome, nome, telefono FROM Iscritto;
```

| cognome    | nome       | telefono              |
| ---------- | ---------- | --------------------- |
| Harris     | Cleora     | 1-877-655-0936 x355   |
| Schowalter | Cecil      | 993.222.9340 x514     |
| Brekke     | Kennedi    | 930-483-3086          |
| Dach       | Duncan     | 658.556.7160 x52491   |
| Jakubowski | Alexa      | 1-605-705-1196 x79028 |
| Willms     | Cooper     | 1-609-521-0608 x218   |
| Jast       | Carlos     | (644) 869-1301 x858   |
| Hudson     | Joshua     | 1-271-637-1481        |
| Schimmel   | Ezequiel   | 559-889-0255          |
| Bogisich   | Reese      | 673.202.3105 x17049   |
| Rau        | Aylin      | 911.971.0562 x61303   |
| Franecki   | Aubrey     | (557) 947-2370 x808   |
| Larson     | Isadore    | 655.263.6693 x42675   |
| Brakus     | Coleman    | 240-232-9649 x023     |
| Gleichner  | Berry      | 247-773-1255 x8428    |
| Kozey      | Jayce      | 668-798-9913          |
| Langworth  | Marjolaine | 391.391.8076 x6711    |
| Koelpin    | Loma       | 960.701.7762          |
| Sauer      | Emelie     | 843.491.4518 x84755   |
| Swift      | Simone     | 207.709.3884          |
| Quigley    | Ambrose    | 259.820.9481          |
| Sporer     | Kiarra     | 402-609-5631          |
| Gulgowski  | Cade       | 1-884-772-1284 x6036  |
| Nienow     | Maiya      | 1-711-423-6852        |
| Cummings   | Alison     | 696.850.3253          |

---

2. elenco degli iscritti (cognome, nome, tipo socio) di una nazione;

```SQL
SELECT cognome, nome, telefono FROM Iscritto WHERE nazione = 'Nevada';
```

| cognome    | nome  | tipo        |
| ---------- | ----- | ----------- |
| Schowalter | Cecil | sostenitore |
| Nienow     | Maiya | affiliato   |

---

3. tutti i dati degli iscritti di un determinato tipo;

```SQL
SELECT *
FROM Iscritto
INNER JOIN Ruolo ON Iscritto.idRuolo = Ruolo.idRuolo
WHERE Ruolo.tipo = 'socio ordinario';
```

| idIscritto | nome    | cognome  | bDate      | telefono            | nazione       | idRuolo | idRuolo | tipo            |
| ---------- | ------- | -------- | ---------- | ------------------- | ------------- | ------- | ------- | --------------- |
| 1          | Cleora  | Harris   | 1992-02-27 | 1-877-655-0936 x355 | New Hampshire | 1       | 1       | socio ordinario |
| 4          | Duncan  | Dach     | 2000-11-30 | 658.556.7160 x52491 | Tennessee     | 1       | 1       | socio ordinario |
| 7          | Carlos  | Jast     | 1987-09-23 | (644) 869-1301 x858 | Kansas        | 1       | 1       | socio ordinario |
| 10         | Reese   | Bogisich | 1998-02-28 | 673.202.3105 x17049 | Georgia       | 1       | 1       | socio ordinario |
| 13         | Isadore | Larson   | 1985-07-17 | 655.263.6693 x42675 | Wisconsin     | 1       | 1       | socio ordinario |
| 16         | Jayce   | Kozey    | 1988-02-29 | 668-798-9913        | Maine         | 1       | 1       | socio ordinario |
| 19         | Emelie  | Sauer    | 1990-04-14 | 843.491.4518 x84755 | Maine         | 1       | 1       | socio ordinario |
| 22         | Kiarra  | Sporer   | 1996-07-29 | 402-609-5631        | Wisconsin     | 1       | 1       | socio ordinario |
| 25         | Alison  | Cummings | 1998-09-06 | 696.850.3253        | Iowa          | 1       | 1       | socio ordinario |

---


4. elenco dei pagamenti con cognome, data, importo;

```SQL
SELECT Iscritto.cognome, Iscrizione.data, Iscrizione.importo
FROM Iscrizione
JOIN Iscritto ON Iscritto.idIscritto = Iscrizione.idIscritto;
```

| cognome    | data       | importo |
| ---------- | ---------- | ------- |
| Harris     | 2022-01-01 | 100     |
| Schowalter | 2022-01-02 | 150.5   |
| Brekke     | 2022-01-03 | 75.2    |
| Dach       | 2022-01-04 | 120     |
| Jakubowski | 2022-01-05 | 90.3    |
| Willms     | 2022-01-06 | 200     |
| Jast       | 2022-01-07 | 50      |
| Hudson     | 2022-01-08 | 180     |
| Schimmel   | 2022-01-09 | 130.5   |
| Bogisich   | 2022-01-10 | 75      |
| Rau        | 2022-01-11 | 90      |
| Franecki   | 2022-01-12 | 220.5   |
| Larson     | 2022-01-13 | 150     |
| Brakus     | 2022-01-14 | 100     |
| Gleichner  | 2022-01-15 | 120     |
| Kozey      | 2023-01-16 | 90.5    |
| Langworth  | 2022-01-17 | 80      |
| Koelpin    | 2022-01-18 | 150     |
| Sauer      | 2023-01-19 | 70      |
| Swift      | 2022-01-20 | 120     |
| Quigley    | 2022-01-21 | 100.5   |
| Sporer     | 2022-01-22 | 50      |
| Gulgowski  | 2023-01-23 | 130     |
| Nienow     | 2022-01-24 | 90      |
| Cummings   | 2022-01-25 | 100     |

---


5. tutti i dati dei pagamenti effettuati nell’anno in corso con cognome e nome degli iscritti che hanno effettuato i pagamenti;

```SQL
SELECT Iscritto.nome, Iscritto.cognome, Iscrizione.data, Iscrizione.importo 
FROM Iscritto 
JOIN Iscrizione ON Iscritto.idIscritto = Iscrizione.idIscritto 
WHERE YEAR(Iscrizione.data) = YEAR(CURDATE())
```

| nome   | cognome   | data       | importo |
| ------ | --------- | ---------- | ------- |
| Jayce  | Kozey     | 2023-01-16 | 90.5    |
| Emelie | Sauer     | 2023-01-19 | 70      |
| Cade   | Gulgowski | 2023-01-23 | 130     |

---
