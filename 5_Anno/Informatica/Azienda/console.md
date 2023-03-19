# console

Creazione DATABASE

```SQL
MariaDB [(none)]> CREATE DATABASE IF NOT EXISTS esercitazione_2101;
Query OK, 1 row affected (0.011 sec)
```

Cambiamento DATABASE da utilizzare

```SQL
MariaDB [(none)]> USE esercitazione_2101;
Database changed
```

Creazione tabella reparto

```SQL
MariaDB [esercitazione_2101]> CREATE TABLE IF NOT EXISTS reparto(idReparto int unsigned not null AUTO_INCREMENT primary key, descrizione VARCHAR(30));
Query OK, 0 rows affected (0.065 sec)
```

Creazione tabella fornitore

```SQL
MariaDB [esercitazione_2101]> CREATE TABLE IF NOT EXISTS fornitore(partitaIVA int(11) unsigned not null AUTO_INCREMENT primary key, nome VARCHAR(50), indirizzo VARCHAR(100), citta VARCHAR(30));
Query OK, 0 rows affected (0.012 sec)
```

Creazione tabella prodotto

```SQL
CREATE TABLE IF NOT EXISTS prodotto(codProdotto int(5) unsigned not null AUTO_INCREMENT primary key, nome VARCHAR(50), costo float, prezzo float, idReparto int unsigned, idFornitore int(11) unsigned, FOREIGN KEY (idReparto) REFERENCES reparto(idReparto) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY (idFornitore) REFERENCES fornitore(partitaIVA) ON DELETE CASCADE ON UPDATE CASCADE);
```

Popolamento tabella reparto

```SQL
MariaDB [esercitazione_2101]> insert into reparto values(null, "Computer"),(null, "Periferiche"),(null, "Accessori");
Query OK, 3 rows affected (0.005 sec)
Records: 3  Duplicates: 0  Warnings: 0
```

Select tabella reparto

```SQL
MariaDB [esercitazione_2101]> select * from reparto;
+-----------+-------------+
| idReparto | descrizione |
+-----------+-------------+
|         1 | Computer    |
|         2 | Periferiche |
|         3 | Accessori   |
+-----------+-------------+
3 rows in set (0.000 sec)
```

Popolamento tabella fornitore

```SQL
insert into fornitore(nome, citta) values("F1", "Brindisi"), ("F2", "Bari"), ("F3", "Roma"), ("F4", "Milano"), ("F5","Torino"), ("F6","Napoli"),("F7","Roma");
Query OK, 7 rows affected (0.007 sec)
Records: 7  Duplicates: 0  Warnings: 0
```

Select della tabella fornitore

```SQL
MariaDB [esercitazione_2101]> select * from fornitore;
+------------+------+-----------+----------+
| partitaIVA | nome | indirizzo | citta    |
+------------+------+-----------+----------+
|          1 | F1   | NULL      | Brindisi |
|          2 | F2   | NULL      | Bari     |
|          3 | F3   | NULL      | Roma     |
|          4 | F4   | NULL      | Milano   |
|          5 | F5   | NULL      | Torino   |
|          6 | F6   | NULL      | Napoli   |
|          7 | F7   | NULL      | Roma     |
+------------+------+-----------+----------+
7 rows in set (0.018 sec)
```

Popolazione tabella prodotto

```SQL
MariaDB [esercitazione_2101]> Insert into prodotto values(null, "MAC mini 1", 600, 750, 1, 6),(null, "Tappetino Mouse", 40, 55, 3, 2),(null, "Mouse", 60, 75, 2, 4),(null, "LED", 10, 15, 3, 1),(null, "PC MSI", 800, 1200, 1, 7);
Query OK, 5 rows affected (0.003 sec)
Records: 5  Duplicates: 0  Warnings: 0
```

Select della tabella prodotto

```SQL
MariaDB [esercitazione_2101]> select * from prodotto;
+-------------+-----------------+-------+--------+-----------+-------------+
| codProdotto | nome            | costo | prezzo | idReparto | idFornitore |
+-------------+-----------------+-------+--------+-----------+-------------+
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |
|           3 | Mouse           |    60 |     75 |         2 |           4 |
|           4 | LED             |    10 |     15 |         3 |           1 |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |
+-------------+-----------------+-------+--------+-----------+-------------+
5 rows in set (0.002 sec)
```

Prodotto cartesiano

```SQL
select * from prodotto, fornitore;

+-------------+-----------------+-------+--------+-----------+-------------+------------+------+-----------+----------+
| codProdotto | nome            | costo | prezzo | idReparto | idFornitore | partitaIVA | nome | indirizzo | citta    |
+-------------+-----------------+-------+--------+-----------+-------------+------------+------+-----------+----------+
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          1 | F1   | NULL      | Brindisi |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          1 | F1   | NULL      | Brindisi |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          1 | F1   | NULL      | Brindisi |
|           4 | LED             |    10 |     15 |         3 |           1 |          1 | F1   | NULL      | Brindisi |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          1 | F1   | NULL      | Brindisi |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          2 | F2   | NULL      | Bari     |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          2 | F2   | NULL      | Bari     |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          2 | F2   | NULL      | Bari     |
|           4 | LED             |    10 |     15 |         3 |           1 |          2 | F2   | NULL      | Bari     |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          2 | F2   | NULL      | Bari     |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          3 | F3   | NULL      | Roma     |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          3 | F3   | NULL      | Roma     |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          3 | F3   | NULL      | Roma     |
|           4 | LED             |    10 |     15 |         3 |           1 |          3 | F3   | NULL      | Roma     |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          3 | F3   | NULL      | Roma     |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          4 | F4   | NULL      | Milano   |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          4 | F4   | NULL      | Milano   |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          4 | F4   | NULL      | Milano   |
|           4 | LED             |    10 |     15 |         3 |           1 |          4 | F4   | NULL      | Milano   |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          4 | F4   | NULL      | Milano   |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          5 | F5   | NULL      | Torino   |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          5 | F5   | NULL      | Torino   |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          5 | F5   | NULL      | Torino   |
|           4 | LED             |    10 |     15 |         3 |           1 |          5 | F5   | NULL      | Torino   |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          5 | F5   | NULL      | Torino   |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          6 | F6   | NULL      | Napoli   |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          6 | F6   | NULL      | Napoli   |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          6 | F6   | NULL      | Napoli   |
|           4 | LED             |    10 |     15 |         3 |           1 |          6 | F6   | NULL      | Napoli   |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          6 | F6   | NULL      | Napoli   |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |          7 | F7   | NULL      | Roma     |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |          7 | F7   | NULL      | Roma     |
|           3 | Mouse           |    60 |     75 |         2 |           4 |          7 | F7   | NULL      | Roma     |
|           4 | LED             |    10 |     15 |         3 |           1 |          7 | F7   | NULL      | Roma     |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |          7 | F7   | NULL      | Roma     |
+-------------+-----------------+-------+--------+-----------+-------------+------------+------+-----------+----------+
35 rows in set (0.001 sec)
```

```SQL
MariaDB [esercitazione_2101]> select * from prodotto, reparto;

+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
| codProdotto | nome            | costo | prezzo | idReparto | idFornitore | idReparto | descrizione |
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |         1 | Computer    |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |         2 | Periferiche |
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |         3 | Accessori   |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |         1 | Computer    |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |         2 | Periferiche |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |         3 | Accessori   |
|           3 | Mouse           |    60 |     75 |         2 |           4 |         1 | Computer    |
|           3 | Mouse           |    60 |     75 |         2 |           4 |         2 | Periferiche |
|           3 | Mouse           |    60 |     75 |         2 |           4 |         3 | Accessori   |
|           4 | LED             |    10 |     15 |         3 |           1 |         1 | Computer    |
|           4 | LED             |    10 |     15 |         3 |           1 |         2 | Periferiche |
|           4 | LED             |    10 |     15 |         3 |           1 |         3 | Accessori   |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |         1 | Computer    |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |         2 | Periferiche |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |         3 | Accessori   |
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
15 rows
```

```SQL
MariaDB [esercitazione_2101]> select * from prodotto inner join reparto on prodotto.idReparto = reparto.idReparto;
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
| codProdotto | nome            | costo | prezzo | idReparto | idFornitore | idReparto | descrizione |
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |         1 | Computer    |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |         3 | Accessori   |
|           3 | Mouse           |    60 |     75 |         2 |           4 |         2 | Periferiche |
|           4 | LED             |    10 |     15 |         3 |           1 |         3 | Accessori   |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |         1 | Computer    |
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
5 rows in set (0.001 sec)
```

```SQL
MariaDB [esercitazione_2101]> select * from prodotto natural join reparto;
+-----------+-------------+-----------------+-------+--------+-------------+-------------+
| idReparto | codProdotto | nome            | costo | prezzo | idFornitore | descrizione |
+-----------+-------------+-----------------+-------+--------+-------------+-------------+
|         1 |           1 | MAC mini 1      |   600 |    750 |           6 | Computer    |
|         3 |           2 | Tappetino Mouse |    40 |     55 |           2 | Accessori   |
|         2 |           3 | Mouse           |    60 |     75 |           4 | Periferiche |
|         3 |           4 | LED             |    10 |     15 |           1 | Accessori   |
|         1 |           5 | PC MSI          |   800 |   1200 |           7 | Computer    |
+-----------+-------------+-----------------+-------+--------+-------------+-------------+
5 rows in set (0.001 sec)
```

```SQL
MariaDB [esercitazione_2101]> select * from prodotto right outer join reparto on prodotto.idReparto = reparto.idReparto;

+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
| codProdotto | nome            | costo | prezzo | idReparto | idFornitore | idReparto | descrizione |
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
|           1 | MAC mini 1      |   600 |    750 |         1 |           6 |         1 | Computer    |
|           2 | Tappetino Mouse |    40 |     55 |         3 |           2 |         3 | Accessori   |
|           3 | Mouse           |    60 |     75 |         2 |           4 |         2 | Periferiche |
|           4 | LED             |    10 |     15 |         3 |           1 |         3 | Accessori   |
|           5 | PC MSI          |   800 |   1200 |         1 |           7 |         1 | Computer    |
+-------------+-----------------+-------+--------+-----------+-------------+-----------+-------------+
5 rows in set (0.001 sec)
```

conta quanti prodotti uguali ci sono nella tabella

```SQL
MariaDB [esercitazione_2101]> select P.nome, count(P.codProdotto) from prodotto P group by P.nome;
+-----------------+----------------------+
| nome            | count(P.codProdotto) |
+-----------------+----------------------+
| LED             |                    1 |
| MAC mini 1      |                    1 |
| Mouse           |                    1 |
| PC MSI          |                    1 |
| Tappetino Mouse |                    1 |
+-----------------+----------------------+
5 rows in set (0.012 sec)
```

```SQL
MariaDB [esercitazione_2101]> select P.nome, count(P.codProdotto) as giacienza, P.prezzo * count(P.codProdotto) as ricavo from prodotto P group by P.nome;
+-----------------+-----------+--------+
| nome            | giacienza | ricavo |
+-----------------+-----------+--------+
| LED             |         1 |     15 |
| MAC mini 1      |         1 |    750 |
| Mouse           |         1 |     75 |
| PC MSI          |         1 |   1200 |
| Tappetino Mouse |         1 |     55 |
+-----------------+-----------+--------+
5 rows in set (0.002 sec)
```

arrotondamento

```SQL
MariaDB [esercitazione_2101]> select P.nome, count(P.codProdotto) as giacienza, Round(P.prezzo * count(P.codProdotto), 2) as ricavo, round((P.prezzo-P.costo)*count(P.codProdotto),2) as utile from prodotto P group by P.nome;
+-----------------+-----------+---------+--------+
| nome            | giacienza | ricavo  | utile  |
+-----------------+-----------+---------+--------+
| LED             |         1 |   15.00 |   5.00 |
| MAC mini 1      |         1 |  750.00 | 150.00 |
| Mouse           |         1 |   75.00 |  15.00 |
| PC MSI          |         1 | 1200.00 | 400.00 |
| Tappetino Mouse |         1 |   55.00 |  15.00 |
+-----------------+-----------+---------+--------+
5 rows in set (0.001 sec)
```
