# Ospedale: schema relazionale

**Paziente**(idPaziente(pk), nome, cognome, stato, cf, idLetto(fk))
**Letto**(idLetto(pk), tipo, numero, idReparto(fk))
**Controllo**(idControllo(pk), tipologia, data, ora, tipo, esito, valore)
**Personale**(idPersonale(pk), nome, cognome, mansione, idReparto(fk))
**Reparto**(idReparto(pk), nome, descrizione)
**Attrezzatura**(idAttrezzatura(pk), data, denominazione, idPersonale(fk))
