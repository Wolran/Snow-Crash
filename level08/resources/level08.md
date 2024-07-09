# Rapport CTF - [level08]

ici nous observons 2 fichier `level08` et `token`
nous pouvons voir que token est creer par l'utilisateur flag08

nous allons decompiler l'executable avec ghidra pour voir ce qu'il contient:
- nous pouvons voir que l'executable ouvre le fichier suivant si seulement il ne se nome pas `token`

a partir de ce constat la rien de plus simple nous allons creer un lin symbolique (une sorte de racourcis) avec `token` pour pouvoir obtenir un nouveau nom:
- on effectue cette commande: `ln -s /home/user/level08/token /tmp/test`

ensuite nous n'avons plus qu'a lancer notre programme avec le nouveau lien: `./level08 /tmp/test`

nous obtenon un flag pour pouvoir se connecter a flag08

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

