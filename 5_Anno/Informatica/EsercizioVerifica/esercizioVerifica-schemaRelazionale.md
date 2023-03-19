# Esercizio della verifica Schema Relazionale

Persona(cf(pk), nome, cognome, bdate);
Luogo(idLuogo(pk), nome, descrizione);
Foto(idFoto(pk), dimensione, data, nome, idPersona(fk), idLuogo(fk));
