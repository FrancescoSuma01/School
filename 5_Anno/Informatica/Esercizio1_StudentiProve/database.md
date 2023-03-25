# Database: Studente - Prove

### DDL

```SQL
CREATE DATABASE IF NOT EXISTS Studente_Prova;

CREATE TABLE Studente (
  idStudente INT PRIMARY KEY,
  matricola VARCHAR(50),
  nome VARCHAR(50),
  cognome VARCHAR(50),
  bDate DATE
);

CREATE TABLE Materia (
  idMateria INT PRIMARY KEY,
  nome VARCHAR(50),
  oreSettimanali INT
);

CREATE TABLE Prova (
  idProva INT PRIMARY KEY,
  tipo VARCHAR(50),
  idMateria INT,
  FOREIGN KEY (idMateria) REFERENCES Materia(idMateria)
);

CREATE TABLE Effettua (
  idStudente INT,
  idProva INT,
  data DATE,
  voto FLOAT,
  PRIMARY KEY (idStudente, idProva),
  FOREIGN KEY (idStudente) REFERENCES Studente(idStudente),
  FOREIGN KEY (idProva) REFERENCES Prova(idProva)
);
```

### QL

```SQL
INSERT INTO Studente (idStudente, matricola, nome, cognome, bDate) VALUES 
(1, 'ABC123', 'Mario', 'Rossi', '2002-01-01'),
(2, 'DEF456', 'Giulia', 'Bianchi', '2002-02-02'),
(3, 'GHI789', 'Luca', 'Verdi', '2002-03-03'),
(4, 'JKL012', 'Simone', 'Neri', '2002-04-04'),
(5, 'MNO345', 'Sara', 'Gialli', '2002-05-05'),
(6, 'PQR678', 'Alessia', 'Marroni', '2002-06-06'),
(7, 'STU901', 'Marco', 'Celesti', '2002-07-07'),
(8, 'VWX234', 'Chiara', 'Arancioni', '2002-08-08'),
(9, 'YZA567', 'Paolo', 'Rosa', '2002-09-09'),
(10, 'BCD890', 'Valentina', 'Viola', '2002-10-10'),
(11, 'EFG123', 'Andrea', 'Blu', '2002-11-11'),
(12, 'HIJ456', 'Camilla', 'Verdi', '2002-12-12'),
(13, 'KLM789', 'Roberto', 'Neri', '2003-01-13'),
(14, 'NOP012', 'Federica', 'Gialli', '2003-02-14'),
(15, 'QRS345', 'Giovanni', 'Marroni', '2003-03-15'),
(16, 'TUV678', 'Marta', 'Celesti', '2003-04-16'),
(17, 'WXYZ01', 'Lorenzo', 'Arancioni', '2003-05-17'),
(18, 'BCDE23', 'Alice', 'Rosa', '2003-06-18'),
(19, 'FGH456', 'Francesco', 'Viola', '2003-07-19'),
(20, 'IJK789', 'Elisa', 'Blu', '2003-08-20'),
(21, 'LMN012', 'Matteo', 'Verdi', '2003-09-21'),
(22, 'OPQ345', 'Ginevra', 'Neri', '2003-10-22'),
(23, 'RST678', 'Gianluca', 'Gialli', '2003-11-23'),
(24, 'UVW901', 'Cristina', 'Marroni', '2003-12-24'),
(25, 'XYZ234', 'Davide', 'Celesti', '2004-01-25'),
(26, 'ABC567', 'Laura', 'Arancioni', '2004-02-26'),
(27, 'DEF890', 'Fabio', 'Rosa', '2004-03-27'),
(28, 'GHI123', 'Silvia', 'Viola', '2004-04-28'),
(29, 'JKL456', 'Stefano', 'Blu', '2004-05-29'),
(30, 'MNO789', 'Anna', 'Schinner', '2005-01-02');
```

```SQL
INSERT INTO Materia (idMateria, nome, oreSettimanali) 
VALUES 
(1, 'Matematica', 4),
(2, 'Fisica', 3),
(3, 'Informatica', 2),
(4, 'Storia', 2),
(5, 'Letteratura', 3),
(6, 'Arte', 2),
(7, 'Geografia', 2),
(8, 'Biologia', 3),
(9, 'Chimica', 3),
(10, 'Inglese', 4),
(11, 'Francese', 3),
(12, 'Spagnolo', 3),
(13, 'Tedesco', 3),
(14, 'Musica', 2),
(15, 'Educazione fisica', 2),
(16, 'Filosofia', 2),
(17, 'Religione', 1),
(18, 'Economia', 2),
(19, 'Diritto', 2),
(20, 'Psicologia', 2);
```

```SQL
INSERT INTO Prova (idProva, tipo, idMateria)
VALUES 
  (1, 'Esame', 4),
  (2, 'Scritto', 13),
  (3, 'Orale', 1),
  (4, 'Esame', 4),
  (5, 'Scritto', 6),
  (6, 'Orale', 1),
  (7, 'Esame', 19),
  (8, 'Scritto', 14),
  (9, 'Orale', 16),
  (10, 'Esame', 14),
  (11, 'Scritto', 12),
  (12, 'Orale', 4),
  (13, 'Esame', 19),
  (14, 'Scritto', 17),
  (15, 'Orale', 10),
  (16, 'Esame', 15),
  (17, 'Scritto', 4),
  (18, 'Orale', 18),
  (19, 'Esame', 20),
  (20, 'Scritto', 2),
  (21, 'Orale', 11),
  (22, 'Esame', 15),
  (23, 'Scritto', 7),
  (24, 'Orale', 9),
  (25, 'Esame', 15),
  (26, 'Scritto', 1),
  (27, 'Orale', 14),
  (28, 'Esame', 3),
  (29, 'Scritto', 15),
  (30, 'Orale', 18);
```

```SQL
INSERT INTO Effettua (idStudente, idProva, data, voto) VALUES 
(1, 1, '2022-01-01', 8.5),
(2, 2, '2022-02-01', 7.2),
(3, 3, '2022-03-01', 6.8),
(4, 4, '2022-04-01', 9.1),
(5, 5, '2022-05-01', 5.6),
(6, 6, '2022-06-01', 8.3),
(7, 7, '2022-07-01', 7.9),
(8, 8, '2022-08-01', 6.1),
(9, 9, '2022-09-01', 9.7),
(10, 10, '2022-10-01', 7.5),
(11, 11, '2022-11-01', 8.8),
(12, 12, '2022-12-01', 6.9),
(13, 13, '2023-01-01', 7.3),
(14, 14, '2023-02-01', 6.4),
(15, 15, '2023-03-01', 8.2),
(16, 16, '2023-04-01', 7.6),
(17, 17, '2023-05-01', 9.3),
(18, 18, '2023-06-01', 6.2),
(19, 19, '2023-07-01', 8.7),
(20, 20, '2023-08-01', 7.8),
(21, 1, '2023-09-01', 8.9),
(22, 2, '2023-10-01', 7.1),
(23, 3, '2023-11-01', 6.5),
(24, 4, '2023-12-01', 9.0),
(25, 5, '2024-01-01', 5.9),
(26, 6, '2024-02-01', 8.6),
(27, 7, '2024-03-01', 7.4),
(28, 8, '2024-04-01', 6.0),
(29, 9, '2024-05-01', 8.1),
(30,22, '2023-01-04', 4.5);
```

### Query richieste:

----

1. studenti interrogati in una materia di cui si conosce il codice (elenco con cognome, nome, voto);

```SQL
SELECT s.cognome, s.nome, e.voto
FROM Studente s
JOIN Effettua e ON s.idStudente = e.idStudente
JOIN Prova p ON e.idProva = p.idProva
WHERE p.idProva = '10';
```

Risultato:

| cognome | nome      | voto |
| ------- | --------- | ---- |
| Viola   | Valentina | 7.5  |

---

2. materie nelle quali è stato valutato positivamente (voto non minore di 6) uno studente del quale si conosce la matricola (elenco con nome materia, data e voto)

```SQL
SELECT s.cognome, s.nome, e.voto, e.data
FROM Studente s
JOIN Effettua e ON s.idStudente = e.idStudente
JOIN Prova p ON e.idProva = p.idProva
WHERE e.voto >= 6.0 AND s.matricola = 'FGH456';
```

| cognome | nome      | voto | data       |
| ------- | --------- | ---- | ---------- |
| Viola   | Francesco | 8.7  | 2023-07-01 |

----

3. studenti interrogati in una materia di cui si conosce il nome (elenco con cognome, nome, data, voto);

```SQL
SELECT s.cognome, s.nome, e.data, e.voto 
FROM Studente s 
JOIN Effettua e ON s.idStudente = e.idStudente 
JOIN Prova p ON e.idProva = p.idProva 
WHERE p.idMateria = 6;
```

| cognome | nome   | data       | voto |
| ------- | ------ | ---------- | ---- |
| Gialli  | Sara   | 2022-05-01 | 5.6  |
| Celesti | Davide | 2024-01-01 | 5.9  |

----

4. materie insegnate per più di 3 ore settimanali:

```SQL
SELECT * FROM Materia WHERE oreSettimanali>=3;
```

| idMateria | nome        | oreSettimanali |
| --------- | ----------- | -------------- |
| 1         | Matematica  | 4              |
| 2         | Fisica      | 3              |
| 5         | Letteratura | 3              |
| 8         | Biologia    | 3              |
| 9         | Chimica     | 3              |
| 10        | Inglese     | 4              |
| 11        | Francese    | 3              |
| 12        | Spagnolo    | 3              |
| 13        | Tedesco     | 3              |

----

5. studenti senza voti (elenco con nome, cognome, matricola)

```SQL
SELECT cognome, nome, matricola 
FROM Studente 
WHERE idStudente NOT IN (SELECT idStudente FROM Effettua);
```

| cognome | nome  | matricola |
| ------- | ----- | --------- |
| Rosa    | Fabio | DEF890    |
