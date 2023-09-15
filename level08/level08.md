# Rapport CTF - [level08]

## Informations générales
- **Durée :** [3h]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Réalisations

1. ### Objectif 1 - Analyse de l'épreuve "level08" avec Ghidra
   - **Description :** Analyser l'épreuve "level08" à l'aide de Ghidra pour comprendre son fonctionnement.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Lancement de Ghidra.
     - Importation du programme "level08" dans Ghidra.
     - Observation que le programme "level08" lit tous les fichiers avec plus de droits que l'utilisateur, sauf dans le cas où le mot 'token' est présent dans le nom du fichier.

2. ### Objectif 2 - Création d'un lien symbolique
   - **Description :** Créer un lien symbolique vers le fichier contenant le token pour le lire avec le programme "level08".
   - **Solution :** Les étapes suivantes ont été suivies :
     - Création d'un lien symbolique vers le fichier "token" dans le répertoire "/tmp" avec la commande `ln -s /home/user/level08/token /tmp/test`.

3. ### Objectif 3 - Exécution du programme "level08"
   - **Description :** Exécuter le programme "level08" en utilisant le lien symbolique pour lire le token.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Lancement du programme "level08" en utilisant le fichier "/tmp/test" comme argument avec `./level08 /tmp/test`.

4. ### Objectif 4 - Obtenir le token
   - **Description :** Obtenir le token en lisant le fichier via le programme "level08".
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Passage à l'utilisateur "level08" avec `su level08`.
     - Exécution de la commande `getflag` pour obtenir le flag recherché.

## Réflexions finales
- **Expérience globale :** L'épreuve liée à level08 a nécessité la compréhension des droits d'accès aux fichiers et la création d'un lien symbolique pour accéder au flag.
- **Leçons apprises :** J'ai acquis des compétences en gestion des permissions de fichiers et en utilisation de liens symboliques.
