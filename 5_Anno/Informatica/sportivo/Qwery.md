# Console

__Qwery 1:__ Numero degli studenti che partecipano a una determinata manifestazione sportiva;

```SQL
SELECT COUNT(*), attivita, idAttivita
FROM Studente
INNER JOIN Partecipazione P on P.matricola = S.matricola
INNER JOIN Attivita A on A.idAttivita = P.idAttivita
GROUP BY A.nome
HAVING A.nome LIKE "";
```

__Qwery 2:__ Elenco alfabetico degli allenatori di un’attivita sportiva;

```SQL
SELECT P.nome, P.cognome 
FROM Professore P
INNER JOIN Attivita A ON A.idAttivita = P.idAttivita
ORDER BY P.cognome ASC;
```

__Qwery 3:__ Elenco delle scuole (denominazione) con il numero di studenti che partecipano alle attivita sportive;

```SQL
SELECT I.nome, COUNT(P.matricola)
FROM Istituto I
INNER JOIN Studente S ON S.idIstituto = I.idIstituto
INNER JOIN Partecipa P ON P.matricola = S.matricola;
```

__Qwery 4:__ Elenco delle scuole con studenti che partecipano a una determinata manifestazione sportiva;

```SQL
SELECT i.nome
FROM Studente s
INNER JOIN Istituto I ON S.Istituto = I.idIstituto
INNER JOIN Partecipa P ON S.matricola = P.matricola
INNER JOIN Attivita A ON P.idAttivita = A.idAttivita
WHERE A.nome = 'nomeAttivita';
```

__Qwery 5:__ Elenco dei professori (cognome e nome) e scuole (denominazione) di appartenenza in ordine alfabetico;

```SQL
SELECT P.nome, P.cognome, I.nome
FROM Professore P
INNER JOIN Istituto I ON I.idIstituto = P.idIstituto
ORDER BY I.nome ASC;
```

__Qwery 6:__ Numero degli studenti partecipanti di una determinata scuola per ciascuna delle manifestazioni sportive;

```SQL
SELECT A.nome, COUNT(P.matricola)
FROM Attivita A
INNER JOIN Partecipa P ON A.idAttivita = P.idAttivita
INNER JOIN Studente S ON P.matricola = S.matricola
WHERE S.Istituto = 'nomeIstituto';
```
