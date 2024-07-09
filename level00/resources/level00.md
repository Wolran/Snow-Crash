# Rapport CTF - [Level00]


quand on se connecte on ne trouve aucun fichier donc le but est de trouver un fichier qui a ete creer par notre utilisateur pour cella nous regardons tout les users du systeme J'ai utilisé la commande `cat /etc/passwd`

et ensuite nous trouvons tous les fichiers que mon user a creer : `find ./ -user "user_name" -type f`



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


