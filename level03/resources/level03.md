# Rapport CTF - [level03]















1. ### Objectif 1 - Analyse de l'exécutable
   - **Description :** L'épreuve consistait à analyser un exécutable qui affiche le message "exploit me" lorsqu'il est exécuté.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Exécution de `ls -la` pour lister les fichiers dans le répertoire.
     - Découverte d'un exécutable.
     - Exécution de l'exécutable, qui a affiché "exploit me".
   
2. ### Objectif 2 - Transfert de l'exécutable vers un serveur Linux
   - **Description :** Transférer l'exécutable vers un serveur Linux pour une analyse plus approfondie avec Ghidra.
   - **Solution :** Les étapes suivantes ont été suivies :
     - Utilisation de la commande `scp` pour transférer l'exécutable depuis la machine de capture vers le serveur Linux.
     - Commande utilisée : `scp level03 vmuller@192.168.1.21:/home/vmuller`.

3. ### Objectif 3 - Analyse de l'exécutable avec Ghidra
   - **Description :** Analyser l'exécutable avec Ghidra pour examiner le code source ou le code assembleur.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Installation de Ghidra si ce n'était pas déjà fait.
     - Lancement de `./ghidraRun` et ouverture de Ghidra.
     - Utilisation de Ghidra pour désassembler le code de l'exécutable.
     - Identification du code source ou du code assembleur.

4. ### Objectif 4 - Découverte de la vulnérabilité
   - **Description :** Identifier la vulnérabilité dans le code, qui permettra d'exploiter le programme.
   - **Solution :** Les étapes suivantes ont été effectuées :
     - Examen du code désassemblé avec Ghidra.
     - Identification de la ligne `/usr/bin/env echo Exploit me`.
     - Identification de l'appel système `::system undefined system()`, indiquant que le programme exécute cette commande.

5. ### Objectif 5 - Exploitation de la vulnérabilité
   - **Description :** Exploiter la vulnérabilité pour exécuter une commande différente.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Création d'un nouveau fichier "echo" dans le répertoire "/tmp" avec la commande `echo whoami > /tmp/echo`.
     - Attribution des autorisations nécessaires au fichier "echo".
     - Modification du chemin d'accès avec `export PATH=/tmp:$PATH` pour donner la priorité au répertoire "/tmp".
     - Exécution de l'exécutable "level03" avec `./level03` pour constater qu'il appartient au groupe "flag03".
     - Modification du fichier "echo" pour exécuter `getflag` avec `echo getflag > /tmp/echo`.
     - Exécution de "level03" à nouveau pour obtenir le token : "qi0maab88jeaj46qoumi7maus".
