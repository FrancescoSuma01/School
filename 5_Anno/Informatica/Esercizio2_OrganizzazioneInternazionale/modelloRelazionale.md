# Esercizio 2 (Organizzazione Internazionale): modello relazionale

Ruolo(idRuolo(pk), tipo)

Iscritto(idIscritto(pk), nome, cognome, bDate, telefono, nazione, idRuolo(fk))

Iscrizione(idIscrizione(pk), data, importo, idIscritto(fk))
