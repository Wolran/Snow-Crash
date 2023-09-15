# Rapport CTF - [level07]

## Informations générales
- **Durée :** [30 min]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Réalisations

1. ### Objectif 1 - Transfert du fichier "level07" avec SCP
   - **Description :** Transférer le fichier exécutable "level07" vers votre machine avec SCP.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Utilisation de la commande `scp` pour transférer le fichier "level07" depuis la machine distante vers votre machine locale.

2. ### Objectif 2 - Analyse du programme "level07" avec Ghidra
   - **Description :** Analyser le programme "level07" avec l'aide de Ghidra pour comprendre son fonctionnement.
   - **Solution :** Les étapes suivantes ont été suivies :
     - Lancement de Ghidra.
     - Importation du programme "level07" dans Ghidra.
     - Observation que le programme affiche la valeur de la variable d'environnement "LOGNAME".

3. ### Objectif 3 - Injection de commande "getflag"
   - **Description :** Injecter la commande "getflag" dans la variable d'environnement "LOGNAME" pour obtenir le flag.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Modification de la valeur de la variable d'environnement "LOGNAME" avec la commande `export LOGNAME='$(getflag)'`.
     - Lancement du programme "level07" avec `./level07`.

## Réflexions finales
- **Expérience globale :** L'épreuve liée à level07 a nécessité la compréhension des variables d'environnement et l'injection de commandes pour obtenir le flag.
- **Leçons apprises :** J'ai acquis des compétences en manipulation des variables d'environnement et en injection de commandes.
