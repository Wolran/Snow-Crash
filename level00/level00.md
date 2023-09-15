# Rapport CTF - [Level00]

## Informations générales
- **Durée :** [2min]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Épreuves résolues

1. ### Objectif 1 - Identification de l'utilisateur actuel
   - **Description :** L'épreuve consistait à déterminer quel utilisateur est actuellement connecté.
   - **Solution :** Pour trouver l'utilisateur actuel, j'ai utilisé la commande `whoami`.
   
2. ### Objectif 2 - Exploration du système de fichiers
   - **Description :** L'objectif était de naviguer dans le système de fichiers pour obtenir des informations.
   - **Solution :** J'ai utilisé les commandes `ls -la` pour afficher les fichiers et répertoires avec des détails, et `cd /` pour revenir à la racine du système de fichiers.

3. ### Objectif 3 - Liste des utilisateurs
   - **Description :** Cette épreuve impliquait la recherche de la liste de tous les utilisateurs du système.
   - **Solution :** J'ai utilisé la commande `cat /etc/passwd` pour afficher la liste de tous les utilisateurs du système.

4. ### Objectif 4 - Recherche de fichiers par utilisateur
   - **Description :** L'objectif était de trouver tous les fichiers créés par un utilisateur spécifique.
   - **Solution :** J'ai utilisé la commande `find ./ -user "user_name" -type f` en remplaçant "user_name" par le nom de l'utilisateur cible pour afficher tous les fichiers qu'il a créés.

5. ### Objectif 5 - Décodage du flag
   - **Description :** L'épreuve consistait à décoder un flag chiffré.
   - **Solution :** J'ai utilisé un décodage par substitution en appliquant d'abord ROT16, suivi de ROT10, pour obtenir le flag déchiffré, qui était "nottoohardhere".

6. ### Objectif 6 - Élévation des privilèges
   - **Description :** L'objectif était d'accéder au compte de l'utilisateur "level00".
   - **Solution :** J'ai utilisé la commande `su level00` pour passer au compte de l'utilisateur "level00" et obtenir le flag avec la commande `getflag`


