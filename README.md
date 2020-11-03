# FOM Übungsaufgabe

Ihr CD-Ständer hat 100 Fächer, die fortlaufend von 1–100 nummeriertsind. In jedem Fach befindet sich eine CD. Formulieren Sie einen Algorithmus, mit dessen Hilfe Sie die CDs alphabetisch nach Interpretensortieren können! 

Das Verfahren soll dabei auf den beiden folgenden Grundfunktionen basieren:

- vergleiche(n,m)  Vergleichen Sie CDs in den Fächern n und m. DasErgebnis ist „richtig“ oder „falsch“, je nachdem, ob diebeiden CDs in der richtigen oder falschen Reihenfolgeim Ständer stehen.

- tausche(n,m)  Tauschen Sie die CDs in den Fächern n und m.

# Hilfsmittel

Für die Erstellung von Nassi-Shneiderman-Diagrammen wurde die Software "[Structorizer](https://structorizer.fisch.lu/)" von Bob Fisch verwendet. Für das PAP die Software [PapDesigner](http://friedrich-folkmann.de/papdesigner/Hauptseite.html) von Friedrich Folkmann. Beide Programm können kostenlos bezogen werden.

# Lösungsansatz

Als Algorithmus kommt in diesem einfachen Fall ein einfacher Bubble-Sort zum Einsatz. Dieser hat den Vorteil der leichten Verständlichkeit - dem gegenüber steht der Nachteil der vergleichsweisen schlechten Performance.

In der ersten Iteration des Lösungsansatzes wird zunächst - noch von der Ziellösung abweichend - lediglich mit einem Zahlen-Array gearbeitet und damit die Grundlage für die alphabetische Sortierung eines Arrays mit Zeichenketten (Interpreten) geschaffen.

Die zweite Iteration verfolgt dann schließlich den finalen Ansatz. Dieser ist in ANSI_C etwas komplexer umzusetzen und auch in der Darstellung als PAP/Struktogramm aufwändiger, da nicht alleine eine einfache Liste mit Integer-Werten zu betrachten ist, sondern komplexe Zeichenketten mit einer verglichen werden müssen.

## Iteration 1

Nassi-Shneiderman-Diagramm:

![Bubble-Sort](https://github.com/napolitano/fom-excercises-bubble-sort/blob/main/bubble-sort-nassi-shneiderman.png)

PAP

![Bubble-Sort](https://github.com/napolitano/fom-excercises-bubble-sort/blob/main/bubble-sort-pap.png)

## Iteration 2

...
