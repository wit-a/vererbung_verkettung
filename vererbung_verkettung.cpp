#include "vererbung_verkettung.h"
// Class Fahrzeug
// Adressen fuer die Listen
void Fahrzeug::addresseFahrzeug(Fahrzeug* address_VM) {
    fahrzeug_next_address = address_VM;
}
Fahrzeug* Fahrzeug::addresseFahrzeug() {
    return fahrzeug_next_address;
}
// Input in die Klasse
void Fahrzeug::inputDatenFahrzeug() {
    cout << "Kennzeichen Fahrzeug: ";
    getline(cin, fahrzeug_kennzeichen);
    cout << "Maximal Gewicht Fahrzeug: ";
    cin >> fahrzeug_maximal_gewicht;
}
// Ausgabe der Daten aus der Klasse
void Fahrzeug::outputDatenFahrzeug() {
    cout << endl << endl
        << "Kennzeichen vom Fahrzueg: " << fahrzeug_kennzeichen << endl
        << "Maximal Gewicht vom Fahrzeug: " << fahrzeug_maximal_gewicht << endl;
}
// Konstruktor
Fahrzeug::Fahrzeug()
    :fahrzeug_kennzeichen("empty")
{
    fahrzeug_maximal_gewicht = 0.0;
    fahrzeug_next_address = NULL;
}
Fahrzeug::Fahrzeug(string& fahrzeug_kennzeichen_VM, double& fahrzeug_max_gew_VM)
    : fahrzeug_kennzeichen(fahrzeug_kennzeichen_VM) {
    fahrzeug_maximal_gewicht = fahrzeug_max_gew_VM;
    fahrzeug_next_address = NULL;
}
// END Class Fahrzeug

// Class Pkw
// Input in die Klasse

void Pkw::inputDatenPkw() {
    inputDatenFahrzeug();
    cout << "Anzahl der Tueren Pkw: ";
    cin >> pkw_anzahl_tueren;
    cout << "Anzahl der Sitze Pkw";
    cin >> pkw_anzahl_sitze;
}
// Ausgabe der Daten aus der Klasse
void Pkw::outputDatenFahrzeug() {
    Fahrzeug::outputDatenFahrzeug();
    cout << endl << endl
        << "Anzahl der Tueren Pkw: " << pkw_anzahl_tueren << endl
        << "Anzahl der Sitze Pkw: " << pkw_anzahl_sitze << endl;
}
// Konstruktor
Pkw::Pkw() :Fahrzeug()
{
    pkw_anzahl_sitze = 0;
    pkw_anzahl_tueren = 0;
}
Pkw::Pkw(int& pkw_anz_sitz_VM, int& pkw_anz_tuer_VM, string& fahrzeug_kennzeichen_VM, double& fahrzeug_max_gew_VM) 
    : Fahrzeug(fahrzeug_kennzeichen_VM, fahrzeug_max_gew_VM) {
    pkw_anzahl_sitze = pkw_anz_sitz_VM;
    pkw_anzahl_tueren = pkw_anz_tuer_VM;
}

// END Class Pkw

// Class Lkw
// Input in die Klasse
void Lkw::inputDatenLkw() {
    inputDatenFahrzeug();
    cout << "Anzahl der Achsen Lkw: ";
    cin >> lkw_anzahl_achsen;
    cout << "Aufbau des Lkw: ";
    cin >> lkw_aufbau;
}
// Ausgabe der Daten aus der Klasse
void Lkw::outputDatenFahrzeug() {
    Fahrzeug::outputDatenFahrzeug();
    cout << endl << endl
        << "Anzahl der Achsen Lkw: " << lkw_anzahl_achsen << endl
        << "Art des Aufbaues Lkw: " << lkw_aufbau << endl;
}
// Konstruktor
Lkw::Lkw() :Fahrzeug(),
lkw_aufbau("empty")
{
    lkw_anzahl_achsen = 0;
}
Lkw::Lkw(int& lkw_anz_achsen_VM, string& lkw_aufbau_VM, string& fahrzeug_kennzeichen_VM, double& fahrzeug_max_gew_VM) 
    : Fahrzeug(fahrzeug_kennzeichen_VM, fahrzeug_max_gew_VM), 
    lkw_anzahl_achsen(lkw_anz_achsen_VM),
    lkw_aufbau(lkw_aufbau_VM) {
}
// END Class Lkw

// Class Anhaenger
// Input in die Klasse
void Anhaenger::inputDatenAnhaenger() {
    inputDatenFahrzeug();
    cout << "Bremse: ";
    cin >> anhaenger_bremse;
    cout << "Aufbau";
    cin >> anhaenger_aufbau;
}
// Ausgabe der Daten aus der Klasse
void Anhaenger::outputDatenFahrzeug() {
    Fahrzeug::outputDatenFahrzeug();
    cout << endl << endl 
        << "Die Beremsen des Anhaengers: " << anhaenger_bremse << endl
        << "Der Aufbau des Anhaengers:" << anhaenger_aufbau << endl;
}
// Konstruktor
Anhaenger::Anhaenger() :Fahrzeug(),
anhaenger_bremse("empty"),
anhaenger_aufbau("empty"){
}
Anhaenger::Anhaenger(string& anhaenger_bremse_VM, string& anhaenger_aufbau_VM, string& fahrzeug_kennzeichen_VM, double& fahrzeug_max_gew_VM) 
    :Fahrzeug(fahrzeug_kennzeichen_VM, fahrzeug_max_gew_VM),
    anhaenger_bremse(anhaenger_bremse_VM),
    anhaenger_aufbau(anhaenger_aufbau_VM) {
}
// END Class Anhaenger

// Class Liste
Fahrzeug* Liste::fistNodeListe() {
    return first_node;
}
void Liste::fistNodeListe(Fahrzeug* first_node_VM) {
    first_node = first_node_VM;
}
Fahrzeug* Liste::lastNodeListe() {
    return last_node;
}
void Liste::lastNodeListe(Fahrzeug* last_node_VM) {
    last_node = last_node_VM;
}
Liste::Liste() {
    first_node = NULL;
    last_node = NULL;
}
// END Class Liste
















