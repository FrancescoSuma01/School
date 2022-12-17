# Esercizio Verifica

```sql

```

## DDL - Data Definition Language

Creazione e inizio ad utilizzare il database esercizioVerifica

```sql
MariaDB [(none)]> CREATE DATABASE IF NOT EXISTS esercizioVerifica;
Query OK, 1 row affected (0.041 sec)

MariaDB [(none)]> use esercizioVerifica;
Database changed
```

Creazione Tabella persona

```sql
MariaDB [esercizioVerifica]> MariaDB [esercizioVerifica]> CREATE TABLE IF NOT EXISTS persona(cf int unsigned not null auto_increment primary key, nome VARCHAR(20), cognome VARCHAR(20), bdate DATE);
Query OK, 0 rows affected (0.047 sec)
```

Creazione Tabella Luogo

```sql
MariaDB [esercizioVerifica]> CREATE TABLE IF NOT EXISTS luogo(idLuogo int unsigned not null auto_increment primary key, nome VARCHAR(20), descrizione VARCHAR(50));
Query OK, 0 rows affected (0.022 sec)
```

Creazione Tabella Foto

```sql
MariaDB [esercizioVerifica]> CREATE TABLE IF NOT EXISTS foto(idFoto int unsigned not null auto_increment primary key, dimensione float, data DATE, nome VARCHAR(20),idPersona int unsigned not null references Persona(idPersona), idLuogo int unsigned not null references Luogo(idLuogo));
Query OK, 0 rows affected (0.021 sec)
```

## DML - Data Manipulation Language

Inseimento nella tabella Persona di 5 persone

```sql
MariaDB [esercizioVerifica]> INSERT INTO persona VALUES(null, "Pippo", "Lino", 1978-12-11),(null, "Paperino", "Pino", 1990-02-01),(null, "Topolino", "Gino", 2002-06-05),(null, "Topolina", "Lina", 1960-11-12),(null, "Pluto", "Pina", 2009-04-25);
Query OK, 5 rows affected, 5 warnings (0.035 sec)
Records: 5  Duplicates: 0  Warnings: 0
```

Inserimento nella tabella Luogo di 5 luoghi

```sql
MariaDB [esercizioVerifica]> INSERT INTO luogo VALUES(null,"Torre Eiffel","Torre dimbolo di Parigi"),(null,"Statua della Libertà","Statua simbolo di New York"),(null,"Big Ban","Orologio storico e simbolo di Londra"),(null,"Colosseo","Struttura dell'epoca romana situata a Roma"),(null,"Senso-ji","Tempio buddhista situato a Tokyo");
Query OK, 5 rows affected (0.002 sec)
Records: 5  Duplicates: 0  Warnings: 0
```

Inserimento nella tabella Foto di 5 foto

```sql
MariaDB [esercizioVerifica]> INSERT INTO foto VALUES(null, 5.00, 2015-11-22, "Tokyo", 1, 5),(null, 5.00, 2018-02-29, "Roma", 2, 4),(null, 5.00, 2001-01-17, "Londra", 3, 3),(null, 5.00, 2010-03-27, "New York", 4, 2),(null, 5.00, 2001-01-17, "Parigi", 5, 1);
Query OK, 5 rows affected, 5 warnings (0.014 sec)
Records: 5  Duplicates: 0  Warnings: 0
```

## QL - Query Language

Stampa della tabella persona

```sql
MariaDB [esercizioVerifica]> select * from persona;
+----+----------+---------+------------+
| cf | nome     | cognome | bdate      |
+----+----------+---------+------------+
|  1 | Pippo    | Lino    | 1978-12-11 |
|  2 | Paperino | Pino    | 1990-02-01 |
|  3 | Topolino | Gino    | 2002-06-05 |
|  4 | Topolina | Lina    | 1960-11-12 |
|  5 | Pluto    | Pina    | 2009-04-25 |
+----+----------+---------+------------+
5 rows in set (0.000 sec)
```

Stampa della tabella luogo

```sql
MariaDB [esercizioVerifica]> select * from luogo;
+---------+----------------------+--------------------------------------------+
| idLuogo | nome                 | descrizione                                |
+---------+----------------------+--------------------------------------------+
|       1 | Torre Eiffel         | Torre dimbolo di Parigi                    |
|       2 | Statua della Libertà | Statua simbolo di New York                 |
|       3 | Big Ban              | Orologio storico e simbolo di Londra       |
|       4 | Colosseo             | Struttura dell'epoca romana situata a Roma |
|       5 | Senso-ji             | Tempio buddhista situato a Tokyo           |
+---------+----------------------+--------------------------------------------+
5 rows in set (0.000 sec)
```

Stampa della tabella foto

```sql
MariaDB [esercizioVerifica]> Select * From foto;
+--------+------------+------------+----------+-----------+---------+
| idFoto | dimensione | data       | nome     | idPersona | idLuogo |
+--------+------------+------------+----------+-----------+---------+
|      1 |          5 | 2015-11-22 | Tokyo    |         1 |       5 |
|      2 |          5 | 2018-02-28 | Roma     |         2 |       4 |
|      3 |          5 | 2001-01-17 | Londra   |         3 |       3 |
|      4 |          5 | 2010-03-27 | New York |         4 |       2 |
|      5 |          5 | 2001-01-17 | Parigi   |         5 |       1 |
+--------+------------+------------+----------+-----------+---------+
5 rows in set (0.000 sec)
```

Proiezione della tabella Persona di tutte le persona che hanno il nome che inizia con la lettera 'P'

```sql
MariaDB [esercizioVerifica]> SELECT * FROM persona WHERE nome LIKE 'P%';
+----+----------+---------+------------+
| cf | nome     | cognome | bdate      |
+----+----------+---------+------------+
|  1 | Pippo    | Lino    | 1978-12-11 |
|  2 | Paperino | Pino    | 1990-02-01 |
|  5 | Pluto    | Pina    | 2009-04-25 |
+----+----------+---------+------------+
3 rows in set (0.000 sec)
```

Proiezione della tabella Luogo di tutti i luoghi che iniziano con la lettera 'S'

```sql
MariaDB [esercizioVerifica]> SELECT * FROM Luogo WHERE nome LIKE 'S%';
+---------+----------------------+----------------------------------+
| idLuogo | nome                 | descrizione                      |
+---------+----------------------+----------------------------------+
|       2 | Statua della Libertà | Statua simbolo di New York       |
|       5 | Senso-ji             | Tempio buddhista situato a Tokyo |
+---------+----------------------+----------------------------------+
2 rows in set (0.001 sec)
```

Proiezione della tabella foto dove la foto è stata scattata tra il 01-02-2010 e il 31-12-2019

```sql
MariaDB [esercizioVerifica]> SELECT * FROM Foto WHERE data BETWEEN '2010-01-01' AND '2019-12-31';
+--------+------------+------------+----------+-----------+---------+
| idFoto | dimensione | data       | nome     | idPersona | idLuogo |
+--------+------------+------------+----------+-----------+---------+
|      1 |          5 | 2015-11-22 | Tokyo    |         1 |       5 |
|      2 |          5 | 2018-02-28 | Roma     |         2 |       4 |
|      4 |          5 | 2010-03-27 | New York |         4 |       2 |
+--------+------------+------------+----------+-----------+---------+
3 rows in set (0.012 sec)
```
