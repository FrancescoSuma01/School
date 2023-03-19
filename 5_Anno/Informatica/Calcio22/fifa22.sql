-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Nov 06, 2022 alle 12:37
-- Versione del server: 10.4.25-MariaDB
-- Versione PHP: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `fifa22`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `giocatore`
--

CREATE TABLE `giocatore` (
  `idGiocatore` int(11) NOT NULL,
  `nome` varchar(20) DEFAULT NULL,
  `cognome` varchar(20) DEFAULT NULL,
  `bdate` date DEFAULT NULL,
  `ingaggio` date DEFAULT NULL,
  `valoreMercato` double DEFAULT NULL,
  `idSquadra` int(11) DEFAULT NULL,
  `IDProcuratore` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `giocatore`
--

INSERT INTO `giocatore` (`idGiocatore`, `nome`, `cognome`, `bdate`, `ingaggio`, `valoreMercato`, `idSquadra`, `IDProcuratore`) VALUES
(1, 'Rafael', 'Leão', '1999-06-10', NULL, 100000000, 1, 2),
(2, 'Zlatan', 'Ibrahimović', '1981-10-03', NULL, 3000000, 1, 3),
(3, 'Walid', 'Cheddira', '1998-01-22', NULL, 2500000, 2, 1),
(4, 'Lorenzo', 'Insigne', '1991-06-04', NULL, 20000000, 4, 2),
(5, 'Cosimo', 'Patierno', '1991-03-01', NULL, 200000, 3, 1);

-- --------------------------------------------------------

--
-- Struttura della tabella `procuratore`
--

CREATE TABLE `procuratore` (
  `IDProcuratore` int(11) NOT NULL,
  `nome` varchar(20) DEFAULT NULL,
  `cognome` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `procuratore`
--

INSERT INTO `procuratore` (`IDProcuratore`, `nome`, `cognome`) VALUES
(1, 'Mario', 'Rossi'),
(2, 'Paolo', 'Verdi'),
(3, 'Marco', 'Bianchi');

-- --------------------------------------------------------

--
-- Struttura della tabella `squadra`
--

CREATE TABLE `squadra` (
  `idSquadra` int(11) NOT NULL,
  `nome` varchar(20) DEFAULT NULL,
  `indirizzo` varchar(20) DEFAULT NULL,
  `citta` varchar(30) DEFAULT NULL,
  `serie` varchar(10) DEFAULT NULL,
  `budget` double DEFAULT NULL,
  `nAbbonati` int(11) DEFAULT NULL,
  `idCapitano` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `squadra`
--

INSERT INTO `squadra` (`idSquadra`, `nome`, `indirizzo`, `citta`, `serie`, `budget`, `nAbbonati`, `idCapitano`) VALUES
(1, 'Milan', 'Aldo Rossi', 'Milano', 'A', 297700000, 42000, 2),
(2, 'Bari', 'Strada Torrebella', 'Bari', 'B', 13750000, 7651, 3),
(3, 'Virtus Francavilla', 'Quinto Ennio', 'Francavilla Fontana', 'C', 300000, 500, 5),
(4, 'Napoli', 'Del Maio Di Porto', 'Napoli', 'A', 501000, 40000, 4);

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `giocatore`
--
ALTER TABLE `giocatore`
  ADD PRIMARY KEY (`idGiocatore`),
  ADD KEY `idSquadra` (`idSquadra`),
  ADD KEY `IDProcuratore` (`IDProcuratore`);

--
-- Indici per le tabelle `procuratore`
--
ALTER TABLE `procuratore`
  ADD PRIMARY KEY (`IDProcuratore`);

--
-- Indici per le tabelle `squadra`
--
ALTER TABLE `squadra`
  ADD PRIMARY KEY (`idSquadra`),
  ADD KEY `idCapitano` (`idCapitano`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `procuratore`
--
ALTER TABLE `procuratore`
  MODIFY `IDProcuratore` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT per la tabella `squadra`
--
ALTER TABLE `squadra`
  MODIFY `idSquadra` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Limiti per le tabelle scaricate
--

--
-- Limiti per la tabella `giocatore`
--
ALTER TABLE `giocatore`
  ADD CONSTRAINT `giocatore_ibfk_1` FOREIGN KEY (`idSquadra`) REFERENCES `squadra` (`idSquadra`),
  ADD CONSTRAINT `giocatore_ibfk_2` FOREIGN KEY (`IDProcuratore`) REFERENCES `procuratore` (`IDProcuratore`);

--
-- Limiti per la tabella `squadra`
--
ALTER TABLE `squadra`
  ADD CONSTRAINT `squadra_ibfk_1` FOREIGN KEY (`idCapitano`) REFERENCES `giocatore` (`idGiocatore`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
