# Esercizio Alunni

## Creazione del database

```sql
MariaDB [(none)]> CREATE DATABASE IF NOT EXISTS Alunni;
Query OK, 1 row affected (0.001 sec)

MariaDB [(none)]> use Alunni;
Database changed
```

## Creazione della tabella alunni

```sql
MariaDB [Alunni]> CREATE TABLE IF NOT EXISTS alunno(idAlunno int unsigned not null auto_increment primary key, cognome varchar(20), nome varchar(20), indirizzo varchar(20), classe char(2), mediaVoto double, maggiorenne boolean);
Query OK, 0 rows affected (0.027 sec)
```

## Describe della tabella alunni

```sql
MariaDB [Alunni]> describe alunno;
+-------------+------------------+------+-----+---------+----------------+
| Field       | Type             | Null | Key | Default | Extra          |
+-------------+------------------+------+-----+---------+----------------+
| idAlunno    | int(10) unsigned | NO   | PRI | NULL    | auto_increment |
| cognome     | varchar(20)      | YES  |     | NULL    |                |
| nome        | varchar(20)      | YES  |     | NULL    |                |
| indirizzo   | varchar(20)      | YES  |     | NULL    |                |
| classe      | char(2)          | YES  |     | NULL    |                |
| mediaVoto   | double           | YES  |     | NULL    |                |
| maggiorenne | tinyint(1)       | YES  |     | NULL    |                |
+-------------+------------------+------+-----+---------+----------------+
7 rows in set (0.021 sec)
```

## Inserimento di alcuni record

```sql
MariaDB [Alunni]> INSERT INTO alunno values(null, "Suma", "Francesco", "Informatica", "5B", 7.5, true),(null, "Pippo", "Lino", "Informatica", "5A", 6.5, true),(null, "Pluto", "Gino", "Informatica", "4A", 6.8, false),(null, "Verdi", "Mario", "Informatica", "5B", 6.0, true),(null, "Paperino", "Pino", "Informatica", "5B", 6.5, false),(null, "Taz", "Nino", "Informatica", "4A", 6.0, false);
Query OK, 6 rows affected (0.003 sec)
Records: 6  Duplicates: 0  Warnings: 0
```

## Stampa della tabella alunni

```sql
MariaDB [Alunni]> select * from alunno;
+----------+----------+-----------+-------------+--------+-----------+-------------+
| idAlunno | cognome  | nome      | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+----------+-----------+-------------+--------+-----------+-------------+
|        1 | Suma     | Francesco | Informatica | 5B     |       7.5 |           1 |
|        2 | Pippo    | Lino      | Informatica | 5A     |       8.5 |           1 |
|        3 | Pluto    | Gino      | Informatica | 4A     |       6.8 |           0 |
|        4 | Verdi    | Mario     | Informatica | 5B     |         6 |           1 |
|        5 | Paperino | Pino      | Informatica | 5B     |       6.5 |           0 |
|        6 | Taz      | Nino      | Informatica | 4A     |         6 |           0 |
|        7 | Rossi    | Paolo     | Informatica | 2B     |       6.3 |           0 |
|        8 | Gialli   | Maria     | Informatica | 2B     |         5 |           0 |
|        9 | Azzurri  | Anna      | Informatica | 2B     |         7 |           0 |
+----------+----------+-----------+-------------+--------+-----------+-------------+
9 rows in set (0.000 sec)
```

## Stampa degli alunni maggiorenni

```sql
MariaDB [Alunni]> select * from alunno where maggiorenne=1;
+----------+---------+-----------+-------------+--------+-----------+-------------+
| idAlunno | cognome | nome      | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+---------+-----------+-------------+--------+-----------+-------------+
|        1 | Suma    | Francesco | Informatica | 5B     |       7.5 |           1 |
|        2 | Pippo   | Lino      | Informatica | 5A     |       6.5 |           1 |
|        4 | Verdi   | Mario     | Informatica | 5B     |
6 |           1 |
+----------+---------+-----------+-------------+--------+-----------+-------------+
3 rows in set (0.000 sec)
```

## Stampa degli alunni della 4A

```sql
MariaDB [Alunni]> select * from alunno where classe='4A';
+----------+---------+------+-------------+--------+-----------+-------------+
| idAlunno | cognome | nome | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+---------+------+-------------+--------+-----------+-------------+
|        3 | Pluto   | Gino | Informatica | 4A     |       6.8 |           0 |
|        6 | Taz     | Nino | Informatica | 4A     |         6 |           0 |
+----------+---------+------+-------------+--------+-----------+-------------+
2 rows in set (0.001 sec)
```

## Inserimento degli alunni della 2B

```sql
MariaDB [Alunni]> INSERT INTO alunno values(null, "Rossi", "Paolo", "Informatica", "2B", 8, false),(null, "Gialli", "Maria", "Informatica", "2B", 5.0, false),(null, "Azzurri", "Anna", "Informatica", "2B", 7.5, false);
Query OK, 3 rows affected (0.003 sec)
Records: 3  Duplicates: 0  Warnings: 0

MariaDB [Alunni]> select * from alunno;
+----------+----------+-----------+-------------+--------+-----------+-------------+
| idAlunno | cognome  | nome      | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+----------+-----------+-------------+--------+-----------+-------------+
|        1 | Suma     | Francesco | Informatica | 5B     |       7.5 |           1 |
|        2 | Pippo    | Lino      | Informatica | 5A     |       6.5 |           1 |
|        3 | Pluto    | Gino      | Informatica | 4A     |       6.8 |           0 |
|        4 | Verdi    | Mario     | Informatica | 5B     |         6 |           1 |
|        5 | Paperino | Pino      | Informatica | 5B     |       6.5 |           0 |
|        6 | Taz      | Nino      | Informatica | 4A     |         6 |           0 |
|        7 | Rossi    | Paolo     | Informatica | 2B     |         8 |           0 |
|        8 | Gialli   | Maria     | Informatica | 2B     |         5 |           0 |
|        9 | Azzurri  | Anna      | Informatica | 2B     |       7.5 |           0 |
+----------+----------+-----------+-------------+--------+-----------+-------------+
9 rows in set (0.000 sec)
```

## Elementi tra 6 e 7, non della 5A e 5B

```sql
MariaDB [Alunni]> select * from alunno where mediavoto between 6.0 and 7.0 and classe not in ("5A","5B");
+----------+---------+-------+-------------+--------+-----------+-------------+
| idAlunno | cognome | nome  | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+---------+-------+-------------+--------+-----------+-------------+
|        3 | Pluto   | Gino  | Informatica | 4A     |       6.8 |           0 |
|        6 | Taz     | Nino  | Informatica | 4A     |         6 |           0 |
|        7 | Rossi   | Paolo | Informatica | 2B     |       6.3 |           0 |
|        9 | Azzurri | Anna  | Informatica | 2B     |         7 |           0 |
+----------+---------+-------+-------------+--------+-----------+-------------+
4 rows in set (0.013 sec)
```

## Elementi tra 6 e 7, 8 e 9

```sql
MariaDB [Alunni]> select * from alunno where mediavoto between 5.0 and 6.0 or mediavoto between 8.0 and 9.0;
+----------+---------+-------+-------------+--------+-----------+-------------+
| idAlunno | cognome | nome  | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+---------+-------+-------------+--------+-----------+-------------+
|        2 | Pippo   | Lino  | Informatica | 5A     |       8.5 |           1 |
|        4 | Verdi   | Mario | Informatica | 5B     |         6 |           1 |
|        6 | Taz     | Nino  | Informatica | 4A     |         6 |           0 |
|        8 | Gialli  | Maria | Informatica | 2B     |         5 |           0 |
+----------+---------+-------+-------------+--------+-----------+-------------+
4 rows in set (0.002 sec)
```

## Elementi della classi 4 e 5

```sql
MariaDB [Alunni]> select * from alunno where classe like "4%" or classe like "5%";
+----------+----------+-----------+-------------+--------+-----------+-------------+
| idAlunno | cognome  | nome      | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+----------+-----------+-------------+--------+-----------+-------------+
|        1 | Suma     | Francesco | Informatica | 5B     |       7.5 |           1 |
|        2 | Pippo    | Lino      | Informatica | 5A     |       8.5 |           1 |
|        3 | Pluto    | Gino      | Informatica | 4A     |       6.8 |           0 |
|        4 | Verdi    | Mario     | Informatica | 5B     |         6 |           1 |
|        5 | Paperino | Pino      | Informatica | 5B     |       6.5 |           0 |
|        6 | Taz      | Nino      | Informatica | 4A     |         6 |           0 |
+----------+----------+-----------+-------------+--------+-----------+-------------+
6 rows in set (0.015 sec)
```

## Elementi il cui cognome inizia con 'P' o 'S'

```sql
MariaDB [Alunni]> select * from alunno where cognome like "P%" or cognome like "S%";
+----------+----------+-----------+-------------+--------+-----------+-------------+
| idAlunno | cognome  | nome      | indirizzo   | classe | mediaVoto | maggiorenne |
+----------+----------+-----------+-------------+--------+-----------+-------------+
|        1 | Suma     | Francesco | Informatica | 5B     |       7.5 |           1 |
|        2 | Pippo    | Lino      | Informatica | 5A     |       8.5 |           1 |
|        3 | Pluto    | Gino      | Informatica | 4A     |       6.8 |           0 |
|        5 | Paperino | Pino      | Informatica | 5B     |       6.5 |           0 |
+----------+----------+-----------+-------------+--------+-----------+-------------+
4 rows in set (0.000 sec)
```
