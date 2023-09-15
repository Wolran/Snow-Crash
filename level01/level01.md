# Rapport CTF - [level01]

## Informations générales
- **Durée :** [10 min]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Réalisations

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

## Réflexions finales
- J'ai acquis de nouvelles compétences en décryptage de mots de passe à l'aide de John the Ripper.
