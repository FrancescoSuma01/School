# DML

```SQL
--Riempimento della tabella Qualifica--
INSERT INTO Qualifica VALUES
(NULL, "Assistente"),
(NULL, "Autista");

mysql> SELECT * FROM Qualifica;
+--------------+------------+
| ID_Qualifica | nome       |
+--------------+------------+
|            1 | Assistente |
|            2 | Autista    |
+--------------+------------+
2 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Dipendente--
INSERT INTO Dipendente VALUES
(NULL, "Pat", "Rodriguez", 1,1),
(NULL, "Jarrett", "Kessler", 2,2),
(NULL, "Randi", "Crist", 3,2),
(NULL, "Roselyn", "Ernser", 4,1),
(NULL, "Ansley", "Graham", 5,1),
(NULL, "Alexandria", "Gusikowski", 6,2),
(NULL, "Hayden", "Bruen", 7,1),
(NULL, "Reinhold", "Mraz", 8,1),
(NULL, "Dorothea", "Mayert", 9,2),
(NULL, "Joe", "Rolfson", 10,2),
(NULL, "Candelario", "Stanton", 11,2),
(NULL, "Mckenzie", "Schulist", 12,1),
(NULL, "Amely", "Marquardt", 13,1),
(NULL, "Meagan", "Emmerich", 14,1),
(NULL, "Marco", "Ernser", 15,2),
(NULL, "Robert", "Torp", 16,2),
(NULL, "Loraine", "Larkin", 17,2),
(NULL, "Isadore", "Schumm", 18,2),
(NULL, "Bettye", "Casper", 19,1),
(NULL, "Vincenzo", "Skiles", 20,2);

mysql> SELECT * FROM Dipendente;
+----+------------+------------+------+-----------+
| cf | nome       | cognome    | id   | qualifica |
+----+------------+------------+------+-----------+
|  1 | Pat        | Rodriguez  |    1 |         1 |
|  2 | Jarrett    | Kessler    |    2 |         2 |
|  3 | Randi      | Crist      |    3 |         2 |
|  4 | Roselyn    | Ernser     |    4 |         1 |
|  5 | Ansley     | Graham     |    5 |         1 |
|  6 | Alexandria | Gusikowski |    6 |         2 |
|  7 | Hayden     | Bruen      |    7 |         1 |
|  8 | Reinhold   | Mraz       |    8 |         1 |
|  9 | Dorothea   | Mayert     |    9 |         2 |
| 10 | Joe        | Rolfson    |   10 |         2 |
| 11 | Candelario | Stanton    |   11 |         2 |
| 12 | Mckenzie   | Schulist   |   12 |         1 |
| 13 | Amely      | Marquardt  |   13 |         1 |
| 14 | Meagan     | Emmerich   |   14 |         1 |
| 15 | Marco      | Ernser     |   15 |         2 |
| 16 | Robert     | Torp       |   16 |         2 |
| 17 | Loraine    | Larkin     |   17 |         2 |
| 18 | Isadore    | Schumm     |   18 |         2 |
| 19 | Bettye     | Casper     |   19 |         1 |
| 20 | Vincenzo   | Skiles     |   20 |         2 |
+----+------------+------------+------+-----------+
20 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Ditta--
INSERT INTO Ditta VALUES
(NULL, "Teaganton", "Larson and Sons"),
(NULL, "South Wilbert", "Doyle LLC"),
(NULL, "Donatoshire", "Ryan, Cummings and Gorczany"),
(NULL, "Bellflower", "Wunsch - Stoltenberg"),
(NULL, "Greensboro", "Walter - Ullrich"),
(NULL, "Lake Sageshire", "Robel - Nitzsche"),
(NULL, "West Jessebury", "Schaden - Jast"),
(NULL, "East Marionside", "Wiza, Bergnaum and Franey"),
(NULL, "Gusikowskifort", "Schultz, Hermann and Spinka"),
(NULL, "Jurupa Valley", "Ernser - Wilderman");

mysql> SELECT * FROM Ditta;
+----------+-----------------+-----------------------------+
| ID_Ditta | citta           | nome                        |
+----------+-----------------+-----------------------------+
|        1 | Teaganton       | Larson and Sons             |
|        2 | South Wilbert   | Doyle LLC                   |
|        3 | Donatoshire     | Ryan, Cummings and Gorczany |
|        4 | Bellflower      | Wunsch - Stoltenberg        |
|        5 | Greensboro      | Walter - Ullrich            |
|        6 | Lake Sageshire  | Robel - Nitzsche            |
|        7 | West Jessebury  | Schaden - Jast              |
|        8 | East Marionside | Wiza, Bergnaum and Franey   |
|        9 | Gusikowskifort  | Schultz, Hermann and Spinka |
|       10 | Jurupa Valley   | Ernser - Wilderman          |
+----------+-----------------+-----------------------------+
10 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella GT--
INSERT INTO GT VALUES
(NULL, "2023-12-22", 1),
(NULL, "2023-05-27", 2),
(NULL, "2024-03-07", 3),
(NULL, "2023-09-18", 4),
(NULL, "2023-05-12", 5),
(NULL, "2023-07-26", 6),
(NULL, "2023-06-16", 7),
(NULL, "2023-09-11", 8),
(NULL, "2024-01-12", 9),
(NULL, "2023-05-23", 10),
(NULL, "2024-04-22", 1),
(NULL, "2023-09-17", 2),
(NULL, "2024-03-09", 3),
(NULL, "2023-12-16", 4),
(NULL, "2023-05-04", 5),
(NULL, "2023-09-25", 6),
(NULL, "2024-03-26", 7),
(NULL, "2023-09-07", 8),
(NULL, "2024-03-16", 9),
(NULL, "2023-07-15", 10);

mysql> SELECT * FROM GT;
+----+-------------------+-------+
| ID | last_Manutenzione | ditta |
+----+-------------------+-------+
|  1 | 2023-12-22        |     1 |
|  2 | 2023-05-27        |     2 |
|  3 | 2024-03-07        |     3 |
|  4 | 2023-09-18        |     4 |
|  5 | 2023-05-12        |     5 |
|  6 | 2023-07-26        |     6 |
|  7 | 2023-06-16        |     7 |
|  8 | 2023-09-11        |     8 |
|  9 | 2024-01-12        |     9 |
| 10 | 2023-05-23        |    10 |
| 11 | 2024-04-22        |     1 |
| 12 | 2023-09-17        |     2 |
| 13 | 2024-03-09        |     3 |
| 14 | 2023-12-16        |     4 |
| 15 | 2023-05-04        |     5 |
| 16 | 2023-09-25        |     6 |
| 17 | 2024-03-26        |     7 |
| 18 | 2023-09-07        |     8 |
| 19 | 2024-03-16        |     9 |
| 20 | 2023-07-15        |    10 |
+----+-------------------+-------+
20 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Utente--
INSERT INTO Utente VALUES
(NULL, "Ronaldo", "Collier", 2, NULL),
(NULL, "Rosamond", "Stanton", 3, NULL),
(NULL, "Shemar", "Thiel", 1, NULL),
(NULL, "Cale", "O'Reilly", 2, NULL),
(NULL, "Linnea", "Heathcote", 5, NULL),
(NULL, "Deja", "Fahey", 0, NULL),
(NULL, "Billie", "Jaskolski", 2, NULL),
(NULL, "Candelario", "Predovic", 4, NULL),
(NULL, "Lexi", "Bashirian", 1, NULL),
(NULL, "Katherine", "Paucek", 1, NULL),
(NULL, "Clair", "Schuppe", 3, NULL),
(NULL, "Orpha", "Wisozk", 5, NULL),
(NULL, "Kaela", "Daugherty", 2, NULL),
(NULL, "Jeanne", "McLaughlin", 3, NULL),
(NULL, "Julien", "Nader", 4, NULL),
(NULL, "Moses", "Predovic", 3, NULL),
(NULL, "Rylan", "Krajcik", 6, NULL),
(NULL, "Janis", "Yundt", 2, NULL),
(NULL, "Filomena", "Schmeler", 9, NULL),
(NULL, "Rosie", "Lowe", 0, NULL),
(NULL, "Jairo", "Bradtke", 2, NULL),
(NULL, "Deion", "Jast", 1, NULL),
(NULL, "Alena", "Hagenes", 7, NULL),
(NULL, "Aidan", "Howell", 0, NULL),
(NULL, "Margarett", "Mertz", 5, NULL),
(NULL, "Bertram", "Hoeger", 6, NULL),
(NULL, "Bianka", "Reichel", 9, NULL),
(NULL, "May", "Hand", 2, NULL),
(NULL, "Skylar", "Schinner", 3, NULL),
(NULL, "Shayna", "Conn", 3, NULL),
(NULL, "Jaylan", "Ortiz", 0, NULL);


mysql> SELECT * FROM Utente;
+----+------------+------------+-----------+-----------+
| CF | nome       | cognome    | num_figli | interesse |
+----+------------+------------+-----------+-----------+
|  1 | Ronaldo    | Collier    |         2 | NULL      |
|  2 | Rosamond   | Stanton    |         3 | NULL      |
|  3 | Shemar     | Thiel      |         1 | NULL      |
|  4 | Cale       | O'Reilly   |         2 | NULL      |
|  5 | Linnea     | Heathcote  |         5 | NULL      |
|  6 | Deja       | Fahey      |         0 | NULL      |
|  7 | Billie     | Jaskolski  |         2 | NULL      |
|  8 | Candelario | Predovic   |         4 | NULL      |
|  9 | Lexi       | Bashirian  |         1 | NULL      |
| 10 | Katherine  | Paucek     |         1 | NULL      |
| 11 | Clair      | Schuppe    |         3 | NULL      |
| 12 | Orpha      | Wisozk     |         5 | NULL      |
| 13 | Kaela      | Daugherty  |         2 | NULL      |
| 14 | Jeanne     | McLaughlin |         3 | NULL      |
| 15 | Julien     | Nader      |         4 | NULL      |
| 16 | Moses      | Predovic   |         3 | NULL      |
| 17 | Rylan      | Krajcik    |         6 | NULL      |
| 18 | Janis      | Yundt      |         2 | NULL      |
| 19 | Filomena   | Schmeler   |         9 | NULL      |
| 20 | Rosie      | Lowe       |         0 | NULL      |
| 21 | Jairo      | Bradtke    |         2 | NULL      |
| 22 | Deion      | Jast       |         1 | NULL      |
| 23 | Alena      | Hagenes    |         7 | NULL      |
| 24 | Aidan      | Howell     |         0 | NULL      |
| 25 | Margarett  | Mertz      |         5 | NULL      |
| 26 | Bertram    | Hoeger     |         6 | NULL      |
| 27 | Bianka     | Reichel    |         9 | NULL      |
| 28 | May        | Hand       |         2 | NULL      |
| 29 | Skylar     | Schinner   |         3 | NULL      |
| 30 | Shayna     | Conn       |         3 | NULL      |
| 31 | Jaylan     | Ortiz      |         0 | NULL      |
+----+------------+------------+-----------+-----------+
31 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Prenotazione--
INSERT INTO Prenotazione VALUES
(NULL, "2023-06-19 07:13:50", 1),
(NULL, "2023-06-07 11:24:04", 2),
(NULL, "2024-01-28 17:45:06", 3),
(NULL, "2023-07-30 18:09:16", 4),
(NULL, "2023-10-29 09:11:09", 5),
(NULL, "2024-01-08 07:52:35", 6),
(NULL, "2024-03-14 20:18:27", 7),
(NULL, "2023-11-29 00:14:18", 8),
(NULL, "2023-12-05 02:06:08", 9),
(NULL, "2024-02-15 15:16:22", 10),
(NULL, "2023-11-27 13:08:45", 11),
(NULL, "2024-03-04 20:00:34", 12),
(NULL, "2024-03-08 16:42:45", 13),
(NULL, "2024-04-30 07:18:56", 14),
(NULL, "2024-02-21 13:06:19", 15),
(NULL, "2023-06-09 12:44:54", 16),
(NULL, "2023-07-25 01:57:46", 17),
(NULL, "2023-12-25 03:46:02", 18),
(NULL, "2023-07-22 08:59:54", 19),
(NULL, "2023-10-22 00:09:18", 20),
(NULL, "2024-02-15 15:16:22", 21),
(NULL, "2023-11-27 13:08:45", 22),
(NULL, "2024-03-04 20:00:34", 23),
(NULL, "2024-03-08 16:42:45", 24),
(NULL, "2024-04-30 07:18:56", 25),
(NULL, "2024-02-21 13:06:19", 26),
(NULL, "2023-06-09 12:44:54", 27),
(NULL, "2023-07-25 01:57:46", 28),
(NULL, "2023-12-25 03:46:02", 29),
(NULL, "2023-07-22 08:59:54", 30),
(NULL, "2023-10-22 00:09:18", 31);

mysql> SELECT * FROM Prenotazione;
+-----------------+---------------------+------+
| ID_Prenotazione | giorno              | CF   |
+-----------------+---------------------+------+
|               1 | 2023-06-19 07:13:50 |    1 |
|               2 | 2023-06-07 11:24:04 |    2 |
|               3 | 2024-01-28 17:45:06 |    3 |
|               4 | 2023-07-30 18:09:16 |    4 |
|               5 | 2023-10-29 09:11:09 |    5 |
|               6 | 2024-01-08 07:52:35 |    6 |
|               7 | 2024-03-14 20:18:27 |    7 |
|               8 | 2023-11-29 00:14:18 |    8 |
|               9 | 2023-12-05 02:06:08 |    9 |
|              10 | 2024-02-15 15:16:22 |   10 |
|              11 | 2023-11-27 13:08:45 |   11 |
|              12 | 2024-03-04 20:00:34 |   12 |
|              13 | 2024-03-08 16:42:45 |   13 |
|              14 | 2024-04-30 07:18:56 |   14 |
|              15 | 2024-02-21 13:06:19 |   15 |
|              16 | 2023-06-09 12:44:54 |   16 |
|              17 | 2023-07-25 01:57:46 |   17 |
|              18 | 2023-12-25 03:46:02 |   18 |
|              19 | 2023-07-22 08:59:54 |   19 |
|              20 | 2023-10-22 00:09:18 |   20 |
|              21 | 2024-02-15 15:16:22 |   21 |
|              22 | 2023-11-27 13:08:45 |   22 |
|              23 | 2024-03-04 20:00:34 |   23 |
|              24 | 2024-03-08 16:42:45 |   24 |
|              25 | 2024-04-30 07:18:56 |   25 |
|              26 | 2024-02-21 13:06:19 |   26 |
|              27 | 2023-06-09 12:44:54 |   27 |
|              28 | 2023-07-25 01:57:46 |   28 |
|              29 | 2023-12-25 03:46:02 |   29 |
|              30 | 2023-07-22 08:59:54 |   30 |
|              31 | 2023-10-22 00:09:18 |   31 |
+-----------------+---------------------+------+
31 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Nazione--
INSERT INTO Nazione VALUES
    (NULL, 'Italia'),
    (NULL, 'Francia'),
    (NULL, 'Germania'),
    (NULL, 'Spagna'),
    (NULL, 'Belgio'),
    (NULL, 'Paesi Bassi'),
    (NULL, 'Grecia'),
    (NULL, 'Austria'),
    (NULL, 'Svezia'),
    (NULL, 'Portogallo'),
    (NULL, 'Regno Unito');

mysql> SELECT * FROM Nazione;
+------------+-------------+
| Id_Nazione | nome        |
+------------+-------------+
|          1 | Italia      |
|          2 | Francia     |
|          3 | Germania    |
|          4 | Spagna      |
|          5 | Belgio      |
|          6 | Paesi Bassi |
|          7 | Grecia      |
|          8 | Austria     |
|          9 | Svezia      |
|         10 | Portogallo  |
|         11 | Regno Unito |
+------------+-------------+
11 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Destinazione--
INSERT INTO Destinazione VALUES
    (NULL, 'Roma', 1),
    (NULL, 'Parigi', 2),
    (NULL, 'Berlino', 3),
    (NULL, 'Madrid', 4),
    (NULL, 'Bruxelles', 5),
    (NULL, 'Amsterdam', 6),
    (NULL, 'Atene', 7),
    (NULL, 'Vienna', 8),
    (NULL, 'Stoccolma', 9),
    (NULL, 'Lisbona', 10);

mysql> SELECT * FROM DESTINAZIONE;
+-----------------+-----------+---------+
| ID_Destinazione | nome      | Nazione |
+-----------------+-----------+---------+
|               1 | Roma      |       1 |
|               2 | Parigi    |       2 |
|               3 | Berlino   |       3 |
|               4 | Madrid    |       4 |
|               5 | Bruxelles |       5 |
|               6 | Amsterdam |       6 |
|               7 | Atene     |       7 |
|               8 | Vienna    |       8 |
|               9 | Stoccolma |       9 |
|              10 | Lisbona   |      10 |
+-----------------+-----------+---------+
10 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Tratta--
INSERT INTO Tratta VALUES
    (NULL, "2023-06-01 10:00:00", "2023-06-01 12:30:00", NULL, 1),
    (NULL, "2023-06-02 08:00:00", "2023-06-02 11:00:00", NULL, 2),
    (NULL, "2023-06-03 14:00:00", "2023-06-03 16:30:00", NULL, 3),
    (NULL, "2023-06-04 12:00:00", "2023-06-04 15:00:00", NULL, 4),
    (NULL, "2023-06-05 10:00:00", "2023-06-05 12:30:00", NULL, 5),
    (NULL, "2023-06-06 08:00:00", "2023-06-06 11:00:00", NULL, 6),
    (NULL, "2023-06-07 14:00:00", "2023-06-07 16:30:00", NULL, 7),
    (NULL, "2023-06-08 12:00:00", "2023-06-08 15:00:00", NULL, 8),
    (NULL, "2023-06-09 10:00:00", "2023-06-09 12:30:00", NULL, 9),
    (NULL, "2023-06-10 08:00:00", "2023-06-10 11:00:00", NULL, 10),
    (NULL, "2023-06-11 14:00:00", "2023-06-11 16:30:00", NULL, 1),
    (NULL, "2023-06-12 12:00:00", "2023-06-12 15:00:00", NULL, 2),
    (NULL, "2023-05-12 08:00:00", "2023-05-12 11:00:00", NULL, 3),
    (NULL, "2023-05-18 12:00:00", "2023-05-18 15:00:00", NULL, 4),
    (NULL, "2023-05-24 18:00:00", "2023-05-24 22:00:00", NULL, 5),
    (NULL, "2023-06-01 14:00:00", "2023-06-01 18:00:00", NULL, 6),
    (NULL, "2023-06-05 10:00:00", "2023-06-05 14:00:00", NULL, 7),
    (NULL, "2023-06-10 08:00:00", "2023-06-10 12:00:00", NULL, 8),
    (NULL, "2023-06-15 16:00:00", "2023-06-15 19:00:00", NULL, 9),
    (NULL, "2023-06-20 22:00:00", "2023-06-21 06:00:00", NULL, 10),
    (NULL, "2023-06-27 09:00:00", "2023-06-27 12:00:00", NULL, 1),
    (NULL, "2023-07-02 10:00:00", "2023-07-02 13:00:00", NULL, 2);

mysql> SELECT * FROM Tratta;
+-----------+---------------------+---------------------+------+--------------+
| ID_Tratta | partenza            | arrivo              | tipo | Destinazione |
+-----------+---------------------+---------------------+------+--------------+
|         1 | 2023-06-01 10:00:00 | 2023-06-01 12:30:00 | NULL |            1 |
|         2 | 2023-06-02 08:00:00 | 2023-06-02 11:00:00 | NULL |            2 |
|         3 | 2023-06-03 14:00:00 | 2023-06-03 16:30:00 | NULL |            3 |
|         4 | 2023-06-04 12:00:00 | 2023-06-04 15:00:00 | NULL |            4 |
|         5 | 2023-06-05 10:00:00 | 2023-06-05 12:30:00 | NULL |            5 |
|         6 | 2023-06-06 08:00:00 | 2023-06-06 11:00:00 | NULL |            6 |
|         7 | 2023-06-07 14:00:00 | 2023-06-07 16:30:00 | NULL |            7 |
|         8 | 2023-06-08 12:00:00 | 2023-06-08 15:00:00 | NULL |            8 |
|         9 | 2023-06-09 10:00:00 | 2023-06-09 12:30:00 | NULL |            9 |
|        10 | 2023-06-10 08:00:00 | 2023-06-10 11:00:00 | NULL |           10 |
|        11 | 2023-06-11 14:00:00 | 2023-06-11 16:30:00 | NULL |            1 |
|        12 | 2023-06-12 12:00:00 | 2023-06-12 15:00:00 | NULL |            2 |
|        13 | 2023-05-12 08:00:00 | 2023-05-12 11:00:00 | NULL |            3 |
|        14 | 2023-05-18 12:00:00 | 2023-05-18 15:00:00 | NULL |            4 |
|        15 | 2023-05-24 18:00:00 | 2023-05-24 22:00:00 | NULL |            5 |
|        16 | 2023-06-01 14:00:00 | 2023-06-01 18:00:00 | NULL |            6 |
|        17 | 2023-06-05 10:00:00 | 2023-06-05 14:00:00 | NULL |            7 |
|        18 | 2023-06-10 08:00:00 | 2023-06-10 12:00:00 | NULL |            8 |
|        19 | 2023-06-15 16:00:00 | 2023-06-15 19:00:00 | NULL |            9 |
|        20 | 2023-06-20 22:00:00 | 2023-06-21 06:00:00 | NULL |           10 |
|        21 | 2023-06-27 09:00:00 | 2023-06-27 12:00:00 | NULL |            1 |
|        22 | 2023-07-02 10:00:00 | 2023-07-02 13:00:00 | NULL |            2 |
+-----------+---------------------+---------------------+------+--------------+
22 rows in set (0.00 sec)
```

```SQL
--Riempimento della tabella Viaggio
INSERT INTO Viaggio VALUES
(NULL, "2023-06-01 10:00:00", "2023-06-01 12:30:00", 55, 1, 2, 3, 1, 1, 1),
(NULL, "2023-06-02 08:00:00", "2023-06-02 11:00:00", 55, 2, 20, 9, 5, 2, 2),
(NULL, "2023-06-03 14:00:00", "2023-06-03 16:30:00", 55, 3, 11, 16, 19, 3, 3),
(NULL, "2023-06-04 12:00:00", "2023-06-04 15:00:00", 55, 4, 6, 10, 7, 4, 4),
(NULL, "2023-06-05 10:00:00", "2023-06-05 12:30:00", 55, 5, 17, 18, 4, 5, 5),
(NULL, "2023-06-06 08:00:00", "2023-06-06 11:00:00", 55, 6, 16, 15, 14, 6, 6),
(NULL, "2023-06-07 14:00:00", "2023-06-07 16:30:00", 55, 7, 17, 2, 12, 7, 7),
(NULL, "2023-06-08 12:00:00", "2023-06-08 15:00:00", 55, 8, 15, 6, 13, 8, 8),
(NULL, "2023-06-09 10:00:00", "2023-06-09 12:30:00", 55, 9, 18, 3, 14, 9, 9),
(NULL, "2023-06-10 08:00:00", "2023-06-10 11:00:00", 55, 10, 16, 10, 19, 10, 10),
(NULL, "2023-06-11 14:00:00", "2023-06-11 16:30:00", 55, 11, 20, 15, 8, 11, 11),
(NULL, "2023-06-12 12:00:00", "2023-06-12 15:00:00", 55, 12, 16, 2, 5, 12, 12),
(NULL, "2023-05-12 08:00:00", "2023-05-12 11:00:00", 55, 13, 10, 9, 1, 13, 13),
(NULL, "2023-05-18 12:00:00", "2023-05-18 15:00:00", 55, 14, 18, 3, 14, 14, 14),
(NULL, "2023-05-24 18:00:00", "2023-05-24 22:00:00", 55, 15, 11, 15, 12, 15, 15),
(NULL, "2023-06-01 14:00:00", "2023-06-01 18:00:00", 55, 16, 6, 9, 7, 16, 16),
(NULL, "2023-06-05 10:00:00", "2023-06-05 14:00:00", 55, 17, 11, 18, 13, 17, 17),
(NULL, "2023-06-10 08:00:00", "2023-06-10 12:00:00", 55, 18, 6, 17, 5, 18, 18),
(NULL, "2023-06-15 16:00:00", "2023-06-15 19:00:00", 55, 19, 2, 20, 13, 19, 19),
(NULL, "2023-06-20 22:00:00", "2023-06-21 06:00:00", 55, 20, 17, 9, 4, 20, 20);

mysql> SELECT * FROM Viaggio;
+------------+---------------------+---------------------+-------------------+------+--------------+----------------+------------+--------+--------------+
| ID_Viaggio | partenza            | arrivo              | Numero_Passeggeri | GT   | primoAutista | secondoAutista | assistente | tratta | prenotazione |
+------------+---------------------+---------------------+-------------------+------+--------------+----------------+------------+--------+--------------+
|          1 | 2023-06-01 10:00:00 | 2023-06-01 12:30:00 |                55 |    1 |            2 |              3 |          1 |      1 |            1 |
|          2 | 2023-06-02 08:00:00 | 2023-06-02 11:00:00 |                55 |    2 |           20 |              9 |          5 |      2 |            2 |
|          3 | 2023-06-03 14:00:00 | 2023-06-03 16:30:00 |                55 |    3 |           11 |             16 |         19 |      3 |            3 |
|          4 | 2023-06-04 12:00:00 | 2023-06-04 15:00:00 |                55 |    4 |            6 |             10 |          7 |      4 |            4 |
|          5 | 2023-06-05 10:00:00 | 2023-06-05 12:30:00 |                55 |    5 |           17 |             18 |          4 |      5 |            5 |
|          6 | 2023-06-06 08:00:00 | 2023-06-06 11:00:00 |                55 |    6 |           16 |             15 |         14 |      6 |            6 |
|          7 | 2023-06-07 14:00:00 | 2023-06-07 16:30:00 |                55 |    7 |           17 |              2 |         12 |      7 |            7 |
|          8 | 2023-06-08 12:00:00 | 2023-06-08 15:00:00 |                55 |    8 |           15 |              6 |         13 |      8 |            8 |
|          9 | 2023-06-09 10:00:00 | 2023-06-09 12:30:00 |                55 |    9 |           18 |              3 |         14 |      9 |            9 |
|         10 | 2023-06-10 08:00:00 | 2023-06-10 11:00:00 |                55 |   10 |           16 |             10 |         19 |     10 |           10 |
|         11 | 2023-06-11 14:00:00 | 2023-06-11 16:30:00 |                55 |   11 |           20 |             15 |          8 |     11 |           11 |
|         12 | 2023-06-12 12:00:00 | 2023-06-12 15:00:00 |                55 |   12 |           16 |              2 |          5 |     12 |           12 |
|         13 | 2023-05-12 08:00:00 | 2023-05-12 11:00:00 |                55 |   13 |           10 |              9 |          1 |     13 |           13 |
|         14 | 2023-05-18 12:00:00 | 2023-05-18 15:00:00 |                55 |   14 |           18 |              3 |         14 |     14 |           14 |
|         15 | 2023-05-24 18:00:00 | 2023-05-24 22:00:00 |                55 |   15 |           11 |             15 |         12 |     15 |           15 |
|         16 | 2023-06-01 14:00:00 | 2023-06-01 18:00:00 |                55 |   16 |            6 |              9 |          7 |     16 |           16 |
|         17 | 2023-06-05 10:00:00 | 2023-06-05 14:00:00 |                55 |   17 |           11 |             18 |         13 |     17 |           17 |
|         18 | 2023-06-10 08:00:00 | 2023-06-10 12:00:00 |                55 |   18 |            6 |             17 |          5 |     18 |           18 |
|         19 | 2023-06-15 16:00:00 | 2023-06-15 19:00:00 |                55 |   19 |            2 |             20 |         13 |     19 |           19 |
|         20 | 2023-06-20 22:00:00 | 2023-06-21 06:00:00 |                55 |   20 |           17 |              9 |          4 |     20 |           20 |
+------------+---------------------+---------------------+-------------------+------+--------------+----------------+------------+--------+--------------+
20 rows in set (0.00 sec)
```
