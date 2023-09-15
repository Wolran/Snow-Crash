# Rapport CTF - [level06]

## Informations générales
- **Durée :** [7h]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Réalisations

1. ### Objectif 1 - Création d'un fichier d'exploit
   - **Description :** L'épreuve consistait à créer un fichier d'exploit pour le programme "level06".
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Création d'un fichier "exploit" dans le répertoire "/tmp" avec la commande `echo '[x ${getflag}]' > /tmp/exploit`.
     - Affichage du contenu du fichier "exploit" avec `cat /tmp/exploit`.

2. ### Objectif 2 - Exécution du programme "level06"
   - **Description :** Exécuter le programme "level06" en utilisant le fichier d'exploit pour tenter une injection de code.
   - **Solution :** Les étapes suivantes ont été suivies :
     - Lancement du programme "level06" en utilisant le fichier "exploit" comme argument avec `./level06 /tmp/exploit`.

3. ### Objectif 3 - Analyse de l'injection de code
   - **Description :** Analyser l'injection de code dans le programme "level06" et comprendre son fonctionnement.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Soumission du fichier "exploit" à un reverse PHP sur Internet.
     - Observation que le caractère 'x' est remplacé par '.' mais n'est jamais vérifié.
     - Identification que le résultat de 'x' est utilisé dans la fonction 'y', ce qui permet d'injecter du code directement dans la fonction 'y'.
     - Création d'un fichier "exploit" contenant le code `[x ${getflag}]`.
     - Affichage du contenu du fichier "exploit" avec `cat /tmp/exploit`.

4. ### Objectif 4 - Exécution du code malveillant
   - **Description :** Exécuter le code malveillant injecté dans la fonction "y".
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Lancement du programme "level06" en utilisant le fichier "exploit" avec `./level06 /tmp/exploit`.

## Réflexions finales
- **Expérience globale :** L'épreuve liée à level06 a nécessité la compréhension de l'injection de code et de l'exécution de code malveillant dans un programme.
- **Leçons apprises :** J'ai acquis des compétences en injection de code PHP.
