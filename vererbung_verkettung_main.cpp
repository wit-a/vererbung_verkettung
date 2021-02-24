#include "vererbung_verkettung.h"

int main() {
    int art_des_fahrzeuges = 0;
    Liste Liste_Autos;
    Fahrzeug* addresse_neu_1 = NULL;
    Fahrzeug* addresse_neu_2 = NULL;
    bool erstes_fahrzeug = true;
    int counter = 1;

    cout << endl << endl << "Fuhrpark" << endl << endl;
    /* zum testen werden die Classen mit testdaten befühlt*/
    do {
        cout << "Was moechten Sie eingeben?" << endl
            << "(1) Pkw" << endl
            << "(2) Lkw" << endl
            << "(3) Anhaenger" << endl
            << "(9) Liste Ausgeben" << endl
            << "(10) ende aund ausgabe" << endl;
        cin >> art_des_fahrzeuges;

        if (art_des_fahrzeuges == 1) {
            // Test Daten
            string fahrzeug_var_1 = "P-KW 1111";
            double fahrzeug_var_2 = 1111.1 + counter++;
            int pkw_var1 = counter++;
            int pkw_var2 = counter++;
            // Pkw* addresse_neu_1 = NULL;
            addresse_neu_1 = new Pkw(pkw_var1, pkw_var2, fahrzeug_var_1, fahrzeug_var_2);
        }
        if (art_des_fahrzeuges == 2) {
            // Test Daten
            string fahrzeug_var_1 = "L-KW 2222";
            double fahrzeug_var_2 = 2222.1 + counter++;
            int pkw_var1 = counter++;
            string pkw_var2 = "Lkw-Aufbau: Voll";
            addresse_neu_1 = new Lkw(pkw_var1, pkw_var2, fahrzeug_var_1, fahrzeug_var_2);
        }
        if (art_des_fahrzeuges == 3) {
            // Test Daten
            string fahrzeug_var_1 = "A-NH 3333";
            double fahrzeug_var_2 = 3333.1 + counter++;
            string pkw_var1 = "Anhanger Bremse: Scheibenbremse";
            string pkw_var2 = "Anhanger Aufbau: kein";
            addresse_neu_1 = new Anhaenger(pkw_var1, pkw_var2, fahrzeug_var_1, fahrzeug_var_2);
        }
        /* Erstellung einer Liste: 
        * 1)
        *   erstes_fahrzeug = true wichtig wenn es das erste Node in der Liste ist. 
        *   Wird mit: Liste_Autos.fistNodeListe(addresse_neu_1); die adresse des Node in die Liste eingetragen. 
        *   erstes_fahrzeug wird auf false gesetzt und weiter gehts mit els zweig 
        * 2) 
        *   addresse_neu_2->addresseFahrzeug(addresse_neu_1);
        *   addresse_neu_2 wird mit der nächsten Adresse aus der Liste beschrieben. 
        * 3)
        *   addresse_neu_2 = addresse_neu_1; wird zum zwischen Speicher der nächsten Adresse.
        * 4)
        *   Abschluss der Liste wird die Adresse des Letzten Elements in die Liste eigetragen.  
        */
        // 1)
        if (erstes_fahrzeug == true) { // dieser Zweig wird nur für das erste Element der Liste benötigt
            Liste_Autos.fistNodeListe(addresse_neu_1); 
            erstes_fahrzeug = false;
        }
        // 2)
        else { // weitere Listen Elemente werden hier angelegt
            addresse_neu_2->addresseFahrzeug(addresse_neu_1);
        }
        // 3)
        addresse_neu_2 = addresse_neu_1;
    } while (art_des_fahrzeuges != 10);
        // 4)
    Liste_Autos.lastNodeListe(addresse_neu_1);

    // Ausgabe der Daten für Test zwecke
    cout << endl << endl << "ausgabe" << endl << endl;

    addresse_neu_1 = Liste_Autos.fistNodeListe();
    addresse_neu_2 = NULL;
    while (addresse_neu_2 != Liste_Autos.lastNodeListe()) {
        addresse_neu_1->outputDatenFahrzeug();
        addresse_neu_2 = addresse_neu_1;
        addresse_neu_1 = addresse_neu_2->addresseFahrzeug();
    }

    return 0;
}

