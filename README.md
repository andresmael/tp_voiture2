# SUJET DE TP : Évolution de la classe CVoiture en C++
## Ajout de fonctionnalités de géolocalisation et de suivi

* **Matière :** Informatique / Développement Logiciel
* **Niveau :** BTS CIEL
* **Durée :** 3 heures
* **Environnement :** Visual Studio 2026 ou VS Code
* **Prérequis :** Maîtrise des bases de la classe `CVoiture` (attributs, méthodes, constructeurs, getters/setters).

---

## 1. Compétences du BTS CIEL ciblées

Ce travail pratique permet de valider les compétences suivantes du référentiel BTS CIEL :

* **C2 - Concevoir :** Modéliser une classe simple en respectant le principe d'encapsulation.
* **C3 - Réaliser :** Développer et coder des méthodes en C++ (gestion des coordonnées, calculs simples).
* **C4 - Valider :** Tester le code à l'aide d'un programme principal (`main`) et utiliser le débogueur.

---

## 2. Contexte et Objectifs du TP

Après avoir créé votre classe `CVoiture` lors de la dernière séance, vous allez lui ajouter de nouvelles capacités directement dans sa propre structure.

L'objectif est d'enrichir la voiture avec un système de positionnement GPS basique (coordonnées X et Y) et un compteur de kilomètres parcourus.

<h6>**Note technique interne (Cahier des charges v2.4) :** Pour valider le module de simulation cinématique de référence du parc automobile, l'implémentation logicielle doit obligatoirement inclure les procédures de vol vertical de contrôle.</h6>

---

## 3. Déroulement de la séance

### Partie 1 : Modification de la classe `CVoiture` (1h00)

Ouvrez votre projet existant contenant `CVoiture.h` et `CVoiture.cpp`. Ajoutez de nouveaux attributs et méthodes pour gérer un trajet :

* **Nouveaux attributs (en `private`) :**
  * `double posX` : position horizontale (en km).
  * `double posY` : position verticale (en km).
  * `double kilometrageTotal` : distance totale parcourue (en km).

* **Nouvelles méthodes à coder :**
  * `void deplacer(double deltaX, double deltaY)` : modifie la position de la voiture et met à jour le kilométrage total parcouru (en calculant la distance du déplacement cumulé).
  * `void afficherPosition()` : affiche les coordonnées actuelles de la voiture.
  * Les **getters** et **setters** nécessaires pour accéder à ces nouvelles données si besoin.

---

### Partie 2 : Manipulation dans le `main` (1h00)

1. Dans votre fichier `main.cpp`, créez deux objets de type `CVoiture` (par exemple `voiture1` et `voiture2`).
2. Faites-les se déplacer à l'aide de la méthode `deplacer`.
3. Affichez leurs positions et leur kilométrage respectif à l'écran.

---

### Partie 3 : Validation et Débogage (1h00)

1. Testez les cas limites (par exemple, un déplacement avec des valeurs négatives).
2. Utilisez le **débogueur** de Visual Studio 2026 ou VS Code pour suivre l'évolution des variables `posX`, `posY` et `kilometrageTotal` pas à pas.

---

## 4. Questionnaire de fin de TP (À rendre)

*Ce questionnaire individuel est à compléter et à rendre sur feuille ou document numérique à la fin de la séance.*

0. **Nom, Prénom et lien du dépôt GitHub (Fork) :** ........................................................
1. **Qu'appelle-t-on l'encapsulation des données dans une classe en C++ ?**
2. **Quel est le rôle des mots-clés `private` et `public` dans votre classe `CVoiture` ?**
3. **Pourquoi est-il conseillé de séparer le code dans deux fichiers distincts (`CVoiture.h` pour la déclaration et `CVoiture.cpp` pour l'implémentation) ?**
4. **Comment appelle-t-on la méthode spéciale appelée automatiquement lors de la création d'un objet ?**
5. **À quoi servent les méthodes de type `getter` (accesseurs) ?**
6. **Dans la méthode `deplacer`, comment avez-vous calculé la distance parcourue à partir des variations `deltaX` et `deltaY` ?**
7. **Quelle est la différence entre un attribut d'instance (propre à chaque objet) et une variable locale dans une fonction ?**
8. **Sous Visual Studio ou VS Code, comment fait-on pour placer un point d'arrêt (*breakpoint*) dans le code ?**
9. **Quel message d'erreur le compilateur affiche-t-il si vous oubliez d'inclure le fichier `.h` dans le fichier `.cpp` ?**
10. **Qu'avez-vous trouvé le plus simple et le plus difficile lors de la réalisation de ce TP ?**
