# Schema relazionale Calcio22

__Squadra__(IDSquadra int pk, nome, indirizzo, citta, serie, buget, nabbonati, IDCapitano fk)

__Giocatore__(IDGiocatoreint pk, nome, cognome, bdate, ingaggio, valore di mercato,IDSquadra fk, IDProcuratore fk)

__Procuratore__(IDProcuratore int pk, nome, cognome)

