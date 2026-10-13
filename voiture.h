#pragma once

#include <string>

class CVoiture {
private:
    std::string marque;
    std::string modele;
    int puissance;
    std::string carburant;
    int vitesse;
    bool moteurDemarre;
    double posX;
    double posY;
    double kilometrageTotal;

public:
    CVoiture(std::string marque, std::string modele, int puissance, std::string carburant);
    void afficherInfos() const;
    void demarrer();
    void accelerer(int kmh);
    void ralentir(int kmh);
    void arreter();
    // Partie 1 : géolocalisation et kilométrage
    void deplacer(double deltaX, double deltaY);
    void afficherPosition() const;
    double getPosX() const;
    double getPosY() const;
    double getKilometrage() const;
};