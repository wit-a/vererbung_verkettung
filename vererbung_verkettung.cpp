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
Kfz::Kfz(string& kennzeichen_VM, double& zulGewicht_VM)
    :kennzeichen_kfz(kennzeichen_VM), zul_ges_gew_kfz(zulGewicht_VM)
{
    next_adress_of_kfz = NULL;
}
Kfz::Kfz() {
}


