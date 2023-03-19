# MySQL

drop -> rimuove il database

'''sql

    CREATE DATABASE IF NOT EXIST nomeDatabase;

'''

crea il database

'''sql

    DROP DATABASE nomeDatabase;

'''

elimina 

'''sql

    select * from nomeDatabase;

'''

mosta tutto il database


    select attributo1 as Attributo, attributo2 as Attributo2 from nomeDatabase;

mostra solo il contenuto di questi attributi

'''sql

    SELECT P.nome as Nome, P.cognome as Cognome, P.citta as Citta, FROM nomeDatabase P WHERE P.codiceFiscale = "MRRSS";

'''

mostra solo chi  ha quel codice fiscale

'''sql

    SELECT P.nome as Nome, P.cognome as Cognome, P.citta as Citta, FROM nomeDatabase;

'''

mostra solo nome, cognome, citta

.\mysql -uroot -hlocalhost -p

__Update__ per aggiornare i dati inseriti

'''sql

    SELECT P.nome LIKE 'A%';

'''

prendo solo i nome che iniziano con A

## Muoversi nel terminale

1. PS C:\Users\franc> cd..
2. PS C:\Users> cd..
3. PS C:\> cd .\xampp\mysql\bin\
4. PS C:\xampp\mysql\bin> .\mysql -uroot -hlocalhost -p

MariaDB [(none)]> use nome_database
