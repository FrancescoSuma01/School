-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Nov 27, 2022 alle 12:26
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
-- Database: `pagamentobollette`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `bollette`
--

CREATE TABLE `bollette` (
  `idBolette` int(10) UNSIGNED NOT NULL,
  `tipo` varchar(20) DEFAULT NULL,
  `importo` double DEFAULT NULL,
  `scadenza` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `bollette`
--

INSERT INTO `bollette` (`idBolette`, `tipo`, `importo`, `scadenza`) VALUES
(1, 'acqua', 100.2, '2022-11-30'),
(2, 'luce', 75.5, '2022-12-05'),
(3, 'gas', 250, '2023-03-30'),
(4, 'telefono', 30.5, '2022-12-25'),
(5, 'tv', 85, '2022-12-10'),
(6, 'rifiuti', 400.5, '2023-01-22');

-- --------------------------------------------------------

--
-- Struttura della tabella `paga`
--

CREATE TABLE `paga` (
  `idUtente` int(10) UNSIGNED NOT NULL,
  `idBollette` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `paga`
--

INSERT INTO `paga` (`idUtente`, `idBollette`) VALUES
(1, 6),
(2, 5),
(3, 4),
(4, 3),
(5, 2),
(6, 1);

-- --------------------------------------------------------

--
-- Struttura della tabella `utente`
--

CREATE TABLE `utente` (
  `idUtente` int(10) UNSIGNED NOT NULL,
  `nome` varchar(20) DEFAULT NULL,
  `cognome` varchar(20) DEFAULT NULL,
  `indirizzo` varchar(20) DEFAULT NULL,
  `citta` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `utente`
--

INSERT INTO `utente` (`idUtente`, `nome`, `cognome`, `indirizzo`, `citta`) VALUES
(1, 'Ted', 'Mosby', 'via a, n.1', 'New York'),
(2, 'Robin', 'Scherbatsky', 'via b, n.32', 'New York'),
(3, 'Barney', 'Stinson', 'via c, n.20', 'New York'),
(4, 'Lily', 'Aldrin', 'via d, n.50', 'New York'),
(5, 'Marshall', 'Eriksen', 'via e, n.44', 'New York'),
(6, 'Tracy', 'McConnell', 'via f, n.11', 'New York');

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `bollette`
--
ALTER TABLE `bollette`
  ADD PRIMARY KEY (`idBolette`);

--
-- Indici per le tabelle `paga`
--
ALTER TABLE `paga`
  ADD PRIMARY KEY (`idUtente`,`idBollette`);

--
-- Indici per le tabelle `utente`
--
ALTER TABLE `utente`
  ADD PRIMARY KEY (`idUtente`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `bollette`
--
ALTER TABLE `bollette`
  MODIFY `idBolette` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT per la tabella `utente`
--
ALTER TABLE `utente`
  MODIFY `idUtente` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
