# Rapport CTF - [level02]

## Informations générales
- **Durée :** [30 min]
- **Équipe :** [vmuller]
- **Participants :** [Valentin Muller]

## Réalisations

1. ### Objectif 1 - Analyse d'un fichier PCAP
   - **Description :** L'épreuve consistait à analyser un fichier "level02.pcap" pour obtenir des informations importantes.
   - **Solution :** Les étapes suivantes ont été réalisées pour résoudre l'épreuve :
     - Exécution de `ls` pour afficher les fichiers dans le répertoire.
     - Découverte du fichier "level02.pcap".
     - Utilisation de Wireshark pour analyser le contenu du fichier PCAP.
   
2. ### Objectif 2 - Transfert du fichier vers un serveur Linux
   - **Description :** Transférer le fichier "level02.pcap" depuis la machine de capture vers un serveur Linux pour une analyse plus approfondie.
   - **Solution :** Les étapes suivantes ont été suivies :
     - Utilisation de la commande `scp` pour transférer le fichier depuis la machine de capture vers le serveur Linux.
     - Commande utilisée : `scp level02.pcap vmuller@192.168.1.21:/home/vmuller`.
     - Attribution des permissions appropriées avec `chmod 777 level02.pcap`.

3. ### Objectif 3 - Analyse du fichier PCAP avec Wireshark
   - **Description :** Analyser le fichier PCAP avec Wireshark pour examiner les données de la communication.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Ouverture du fichier "level02.pcap" avec Wireshark.
     - Identification d'un flux TCP dans la capture.
     - Exploration des données en utilisant l'option "Suivre" pour le protocole TCP.

4. ### Objectif 4 - Découverte du mot de passe caché
   - **Description :** Identifier un mot de passe caché dans la capture.
   - **Solution :** Les étapes suivantes ont été effectuées :
     - Identification d'un message contenant "Password: ft_wandr...NDRel.L0L", qui ne semble pas être le flag correct.
     - Analyse de l'hexdump pour comprendre la signification des caractères "7f" (delete).
     - Conversion des caractères "delete" en supprimant les caractères en trop pour obtenir le flag "ft_waNDReL0L".

5. ### Objectif 5 - Obtention du flag
   - **Description :** Utilisation du flag découvert pour obtenir le flag final.
   - **Solution :** Utilisation de la commande `getflag` pour obtenir le flag final après avoir découvert "ft_waNDReL0L".

## Réflexions finales
- **Expérience globale :** L'épreuve liée à level02 a été une expérience intéressante qui a nécessité des compétences d'analyse de fichiers PCAP, d'utilisation de Wireshark et de décodage.
- **Leçons apprises :** J'ai acquis de nouvelles compétences en analyse de captures réseau et en utilisation d'outils tels que Wireshark pour extraire des informations cachées.
