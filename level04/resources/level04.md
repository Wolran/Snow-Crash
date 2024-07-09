# Rapport CTF - [level04]

1. ### Objectif 1 - Exploration des fichiers
   - **Description :** L'épreuve consistait à explorer les fichiers disponibles sur la machine.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Exécution de `ls` pour lister les fichiers dans le répertoire.
     - Découverte du fichier "level04.pl" en Perl.

2. ### Objectif 2 - Analyse du code Perl
   - **Description :** Analyser le code Perl du fichier "level04.pl" pour comprendre son fonctionnement.
   - **Solution :** Les étapes suivantes ont été suivies :
     - Utilisation de `cat level04.pl` pour afficher le contenu du fichier Perl.
     - Identification d'une mention d'un serveur local écoutant sur le port 4747.

3. ### Objectif 3 - Recherche de l'adresse IP du serveur
   - **Description :** Trouver l'adresse IP à laquelle le serveur local écoute.
   - **Solution :** Les étapes suivantes ont été effectuées :
     - Recherche sur Internet pour trouver l'adresse IP locale du serveur.
     - Confirmation que le serveur était accessible via cette adresse.

4. ### Objectif 4 - Utilisation de la vulnérabilité
   - **Description :** Exploiter une vulnérabilité dans le code Perl pour exécuter des commandes à distance.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Accès au serveur local sur le port 4747 en utilisant l'adresse IP trouvée.
     - Observation d'une page vide.
     - Analyse du code Perl pour identifier une routine qui exécute du code.
     - Utilisation de l'URL suivante : `http://192.168.1.18:4747/level04.pl?x=command` pour exécuter des commandes.
     - Exécution de commandes telles que "whoami" et "getflag".
   
5. ### Objectif 5 - Obtention du flag
   - **Description :** Utilisation de la vulnérabilité pour exécuter la commande "getflag" et obtenir le flag.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Exécution de la commande "getflag" via l'URL exploitée.
     - Obtention du token : "ne2searoevaevoem4ov4ar8ap".
