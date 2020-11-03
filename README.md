# FOM Übungsaufgabe

Ihr CD-Ständer hat 100 Fächer, die fortlaufend von 1–100 nummeriertsind. In jedem Fach befindet sich eine CD. Formulieren Sie einen Algorithmus, mit dessen Hilfe Sie die CDs alphabetisch nach Interpretensortieren können! 

Das Verfahren soll dabei auf den beiden folgenden Grundfunktionen basieren:

- vergleiche(n,m)  Vergleichen Sie CDs in den Fächern n und m. DasErgebnis ist „richtig“ oder „falsch“, je nachdem, ob diebeiden CDs in der richtigen oder falschen Reihenfolgeim Ständer stehen.

- tausche(n,m)  Tauschen Sie die CDs in den Fächern n und m.

# Hilfsmittel

Für die Erstellung von Nassi-Shneiderman-Diagrammen wurde die Software "[Structorizer](https://structorizer.fisch.lu/)" von Bob Fisch verwendet. Für das PAP die Software [PapDesigner](http://friedrich-folkmann.de/papdesigner/Hauptseite.html) von Friedrich Folkmann. Beide Programm können kostenlos bezogen werden.

# Lösungsansatz

Als Algorithmus kommt in diesem einfachen Fall ein einfacher Bubble-Sort zum Einsatz. Dieser hat den Vorteil der leichten Verständlichkeit - dem gegenüber steht der Nachteil der vergleichsweisen schlechten Performance.

In der ersten Iteration des Lösungsansatzes habe ich zunächst - noch von der Ziellösung abweichend - die einfachste Lösung gewählt und mit einem Zahlen-Array gearbeitet.

Die zweite Iteration verfolgt dann im kleinen Maßstab den finalen Ansatz. Dieser ist in ANSI-C geringfügig aufwändiger umzusetzen.

Die dritte Iteration erfüllt schließlich die Aufgabe 100 Interpreten, die in willkürlicher Reihenfolge vorliegen, alphabetisch aufsteigend zu sortieren. Dazu wurde Iteration 2 um eine Methode zum einlesen der ersten 100 Zeilen einer Textdatei erweitert und eine solche Datei mit 100 Interpreten hinzugefügt.

Selbstverständlich könnte anstelle der Interpreten auch der Name eines Albums stehen oder eine Kombination aus beidem wie z.B. "Infected Mushroom - Legend of the Black Shawarma".

## Diagramme

Nassi-Shneiderman-Diagramm:

![Bubble-Sort](https://github.com/napolitano/fom-excercises-bubble-sort/blob/main/bubble-sort-nassi-shneiderman.png)

PAP

![Bubble-Sort](https://github.com/napolitano/fom-excercises-bubble-sort/blob/main/bubble-sort-pap.png)
