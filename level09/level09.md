# Rapport CTF - [level09]

## Informations générales
- **Durée :** [4h]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Réalisations

1. ### Objectif 1 - Analyse du programme "level09" avec Ghidra
   - **Description :** Analyser le programme "level09" avec Ghidra pour comprendre son fonctionnement.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Lancement de Ghidra.
     - Importation du programme "level09" dans Ghidra.
     - Observation que le programme "level09" recode un code en incrémentant chaque élément du code en ajoutant +1 (en ASCII) en fonction de sa place dans le code.

2. ### Objectif 2 - Création d'un programme de décodage en C
   - **Description :** Créer un programme en C pour décoder le code contenu dans le fichier "flag.txt".
   - **Solution :** Les étapes suivantes ont été suivies :
     - Création d'un programme en C qui inverse le processus de codage du programme "level09".
     - Le programme en C lit le contenu du fichier "flag.txt", décode le code et affiche le résultat.

3. ### Objectif 3 - Décodage du fichier "flag.txt"
   - **Description :** Décoder le contenu du fichier "flag.txt" à l'aide du programme créé.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Exécution du programme en C sur le fichier "flag.txt".
     - Flag encodé : "<82>^?p<82>n<83><82>DB<83>Du{^?<8c><89>".
     - Obtention du flag décodé : "f3iji1ju5yuevaus41q1afiuq".

4. ### Objectif 4 - Accès à l'utilisateur "flag09"
   - **Description :** Accéder à l'utilisateur "flag09" pour obtenir le flag final.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Passage à l'utilisateur "flag09" avec `su flag09`.
     - Exécution de la commande `getflag` pour obtenir le flag final.

## Réflexions finales
- **Expérience globale :** L'épreuve liée à level09 a nécessité la compréhension de l'encodage et du décodage des caractères ASCII.
- **Leçons apprises :** J'ai acquis des compétences en programmation C pour le décodage de données.
