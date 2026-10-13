#include "voiture.h"
#include <iostream>
#include <cmath>

using namespace std;

CVoiture::CVoiture(string marque, string modele, int puissance, string carburant)
    : marque(marque), modele(modele), puissance(puissance), carburant(carburant),
    vitesse(0), moteurDemarre(false), posX(0.0), posY(0.0), kilometrageTotal(0.0) {
}

void CVoiture::afficherInfos() const {
    cout << "=== Informations du véhicule ===" << endl;
    cout << "Marque : " << marque << endl;
    cout << "Modèle : " << modele << endl;
    cout << "Puissance : " << puissance << " ch" << endl;
    cout << "Carburant : " << carburant << endl;
    cout << "Vitesse : " << vitesse << " km/h" << endl;
    cout << "Moteur : " << (moteurDemarre ? "Allumé" : "Éteint") << endl;
    cout << "=============================== " << endl << endl;
}

// Partie 1 : géolocalisation et kilométrage
void CVoiture::deplacer(double deltaX, double deltaY) {
    double distance = std::sqrt(deltaX * deltaX + deltaY * deltaY);
    posX += deltaX;
    posY += deltaY;
    kilometrageTotal += distance;
    cout << "Déplacement de (" << deltaX << ", " << deltaY << ") km -> distance parcourue : " << distance << " km" << endl << endl;
}

void CVoiture::afficherPosition() const {
    cout << "Position (km) : (" << posX << ", " << posY << ")" << endl;
}

double CVoiture::getPosX() const { return posX; }
double CVoiture::getPosY() const { return posY; }
double CVoiture::getKilometrage() const { return kilometrageTotal; }

void CVoiture::demarrer() {
    if (moteurDemarre) {
        cout << "Le moteur est déjà démarré." << endl << endl;
    }
    else {
        moteurDemarre = true;
        cout << "Le moteur de la " << marque << " " << modele << " est démarré." << endl << endl;
    }
}

void CVoiture::accelerer(int kmh) {
    if (!moteurDemarre) {
        cout << "Impossible d'accélérer : le moteur n'est pas démarré !" << endl << endl;
        return;
    }
    vitesse += kmh;
    cout << "Accélération de " << kmh << " km/h. Vitesse : " << vitesse << " km/h." << endl << endl;
}

void CVoiture::ralentir(int kmh) {
    if (!moteurDemarre) {
        cout << "Impossible de ralentir : le moteur n'est pas démarré !" << endl << endl;
        return;
    }
    vitesse -= kmh;
    if (vitesse < 0) vitesse = 0;
    cout << "Ralentissement de " << kmh << " km/h. Vitesse : " << vitesse << " km/h." << endl << endl;
}

void CVoiture::arreter() {
    if (!moteurDemarre) {
        cout << "Le moteur est déjà arrêté." << endl << endl;
    }
    else {
        vitesse = 0;
        moteurDemarre = false;
        cout << "Le moteur est arrêté." << endl << endl;
    }
}