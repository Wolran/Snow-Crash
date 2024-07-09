# Rapport CTF - [level01]


dans le level precedant nous avons trouver une chaine de carractere etrange au niveau de l'identifiant de l'utilisateur flag01:
- 42hDRfypTqqnw

on le test mais ca ne fonctionne pas, on pense que c'est un fichier crypter, nous allons donc utliser john the ripper qui est un logiciel pour pouvoir facilement decripter notre mots de passe:
- mettre notre mdp dans un fichier `.txt`
- lancer john the ripper avec le fichier `john --single "fichier".txt`
- Affichage du résultat avec `john --show "fichier".txt`

cella révéle le mot de passe "abcdefg" que nous pouvons utiliser sur l'utiisateur flag01 pour pouvoir getflag et obtenir le mdp de l'utilisateur level02












1. ### Objectif 1 - Identification de l'utilisateur actuel
   - **Description :** Trouver l'utilisateur actuellement connecté.
   - **Solution :** Utilisation de la commande `whoami`.

2. ### Objectif 2 - Exploration du système de fichiers
   - **Description :** Naviguer dans le système de fichiers pour obtenir des informations.
   - **Solution :** Utilisation des commandes `ls -la` pour afficher les fichiers et répertoires et `cd /` pour revenir à la racine.

3. ### Objectif 3 - Liste des utilisateurs
   - **Description :** Obtenir la liste de tous les utilisateurs du système.
   - **Solution :** Utilisation de la commande `cat /etc/passwd`. Identification de "42hDRfypTqqnw" dans l'identifiant de l'utilisateur flag01.

4. ### Objectif 4 - Casser un mot de passe avec John the Ripper
   - **Description :** Casser le mot de passe de l'utilisateur "42hDRfypTqqnw" en utilisant John the Ripper.
   - **Solution :** Création d'un fichier texte `text.txt` contenant l'identifiant. Utilisation de John the Ripper avec `john --single test.txt`. Affichage du résultat avec `john --show test.txt`, révélant le mot de passe "abcdefg".

5. ### Objectif 5 - Élévation des privilèges
   - **Description :** Accéder au compte de l'utilisateur "flag02" avec le mot de passe "abcdefg".
   - **Solution :** Utilisation de la commande `su flag02 abcdefg` pour accéder au compte et obtenir le flag avec `getflag`.
