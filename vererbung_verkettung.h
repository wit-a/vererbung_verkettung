#ifndef FAHRZEUG_UND_LISTE_H
#define FAHRZEUG_UND_LISTE_H

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
/*
* 1) Klasse Fahrzeug ist die Parent Class die an die Weiteren Klassen Pkw, Lkw, Anhaenger vererbt wird.
* 2) Die Klasse Fahzeug hat eine virtuale Methode "virtual void outputDatenFahrzeug();" die von,
*    anderen Klassen überschrieben wird. Bsp:  "Pkw - void outputDatenFahrzeug();" 
*    Damit wird das problemm des vom Pointer gelöst. "Fahrzeug* fahrzeug_next_address;" kann sonst nur daten von Typ
*    Fahrzeug ausgeben in der main.cpp "addresse_neu_1->outputDatenFahrzeug();" wenn man die Methode überschreibt funktioniert es.
*/
class Fahrzeug {
private:
    string fahrzeug_kennzeichen;
    double fahrzeug_maximal_gewicht;
    Fahrzeug* fahrzeug_next_address;
public:
    // Adressen fuer die Listen
    void addresseFahrzeug(Fahrzeug*);
    Fahrzeug* addresseFahrzeug();
    // Input in die Klasse
    void inputDatenFahrzeug();
    // Ausgabe der Daten aus der Klasse
    virtual void outputDatenFahrzeug();
    // Konstruktor
    Fahrzeug();
    Fahrzeug(string&, double&);
};
/*
* 1) Klassen Pkw, Lkw, Anhanger vererben die public Methoden der Parent Class Fahrzug, 
*    weil diese Klassen über die selben eigenschaften verfügen "kennzeichen, maxi_gewicht wie die Basis Class. 
* 2) Zum übersreiben/ausgabe der virtualen Methode verfügen diese Classen über outputDatenFahrzeug().
*/
// END Fahrzeug
class Pkw :public Fahrzeug {
private:
    int pkw_anzahl_tueren;
    int pkw_anzahl_sitze;
public:
    // Input in die Klasse
    void inputDatenPkw();
    // Ausgabe der Daten aus der Klasse
    void outputDatenFahrzeug();
    // void outputDatenPkw();
    // Konstruktor
    Pkw();
    Pkw(int&, int&, string&, double&);
};
// END Pkw
class Lkw :public Fahrzeug {
private:
    int lkw_anzahl_achsen;
    string lkw_aufbau;
public:
    // Input in die Klasse
    void inputDatenLkw();
    // Ausgabe der Daten aus der Klasse
    void outputDatenFahrzeug();
    // Konstruktor
    Lkw();
    Lkw(int&, string&, string&, double&);
};
// END Lkw
class Anhaenger :public Fahrzeug {
private:
    string anhaenger_bremse;
    string anhaenger_aufbau;
public:
    // Input in die Klasse
    void inputDatenAnhaenger();
    // Ausgabe der Daten aus der Klasse
    void outputDatenFahrzeug();
    // Konstruktor
    Anhaenger();
    Anhaenger(string&, string&, string&, double&);
};
// END Anhaenger
/*
* 1) Die CLaasse Liste ist eine selbständige Class zum aufbauen von einer einfach verketteten Liste.
*    sie besitz alle dazu notwendigen Eigenschaften und Methoden 
*/
class Liste {
private:
    Fahrzeug* first_node;
    Fahrzeug* last_node;
public:
    Fahrzeug* fistNodeListe();
    void fistNodeListe(Fahrzeug*);
    Fahrzeug* lastNodeListe();
    void lastNodeListe(Fahrzeug*);
    Liste();
};
// END Liste
#endif // FAHRZEUG_UND_LISTE_H












