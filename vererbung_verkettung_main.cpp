#include "vererbung_verkettung.h"
// * * * Class Kfz * * *
void Kfz::kennzeichenEingabeKfz(string& kennzeichen_WM) {
    kennzeichen_kfz = kennzeichen_WM;
}
string Kfz::kennzeichenAusgabeKfz() {
    return kennzeichen_kfz;
}
void Kfz::zulGesGewEingabeKfz(double gewichtVM) {
    zul_ges_gew_kfz = gewichtVM;
}
double Kfz::zulGesGewAusgabeKfz() {
    return zul_ges_gew_kfz;
}
Kfz::Kfz()
    :kennzeichen_kfz("empty")
{
    zul_ges_gew_kfz = NULL;
}
// * * * END Class Kfz * * *
// * * * Class Pkw * * *
void Pkw::anzahlSitzeEingabePkw(int sitzeVM) {
    anzahl_sitze_pkw = sitzeVM;
}
int Pkw::anzahlSitzeAusgabePkw() {
    return anzahl_sitze_pkw;
}
void Pkw::anzahlTuerEingabePkw(int tuerVM) {
    anzahl_tuer_pkw = tuerVM;
}
int Pkw::anzahlTuerAusgabePkw() {
    return anzahl_tuer_pkw;
}

Pkw::Pkw() {
    anzahl_sitze_pkw = NULL;
    anzahl_tuer_pkw = NULL;
}
// * * * END Class Pkw * * *
// * * * Class Lkw * * *
void Lkw::anzahlAchsenEingabeLkw(int achsenVM) {
    anzahl_achsen_lkw = achsenVM;
}
int Lkw::anzahlAchsenAusgabeLkw() {
    return anzahl_achsen_lkw;
}
void Lkw::aufbauEingabeLkw(string aufbauVM) {
    aufbau_lkw = aufbauVM;
}
string Lkw::aufbauAusgabeLkw() {
    return aufbau_lkw;
}
Lkw::Lkw()
    :aufbau_lkw("empty")
{
    anzahl_achsen_lkw = NULL;
}
// * * * END Class Lkw * * *
// * * * Class Anhaenger * * *
void Anhaenger::artBremseEingabeAnhaenger(int bremseVM) {
    art_bremse_anhaenger = bremseVM;
}
int Anhaenger::artBremseAusgabeAnhaenger() {
    return art_bremse_anhaenger;
}
void Anhaenger::aufbauEingabeAnhaenger(string aufbauVM) {
    aufbau_anhaenger = aufbauVM;
}
string Anhaenger::aufbauAusgabeAnhaenger() {
    return aufbau_anhaenger;
}
Anhaenger::Anhaenger()
    :aufbau_anhaenger("empty")
{
    art_bremse_anhaenger = NULL;
}
// * * * END Class Anhaenger * * *
