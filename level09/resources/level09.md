# Rapport CTF - [level09]


on trouve un executable `level09` et un fichier `token` avec des caractere non printable (surement encoder donc)
On vas essayer de comprendre comment l'executable fonctonne:
- on ouvre ghidra et on regarde ce aue donne l'executable
- on comprend que a chaque caractere de ARVG[1] on augmente ca valeur de i++
- on a juste a creer un programme qui permet d'inverser tout ca et lui donner le fichier `token`

pour connaitre les caracteres non printable, pour ca nous allons utiliser l'hexdump : `printf $(cat ./token) | hexdump -C`
cette commande va nous permettre d'ecrire tout le contenu de notre fichier token en octet hexadecimal 

ensuite nous avons plus qu'a rediriger tout le contenu obtenu dans une chaine de caractere pour que notre programme puisse la dechifrer: 
`./a.out <<< echo $(printf "\x66\x34\x6b\x6d\x6d\x36\x70\x7c\x3d\x82\x7f\x70\x82\x6e\x83\x82\x44\x42\x83\x44\x75\x7b\x7f\x8c\x89")`

nous avons enfin notre flag pour pouvoir jmp a l'utilisateur `flag09`



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
     - Flag encodé : "f4kmm6p|=<82>^?p<82>n<83><82>DB<83>Du{^?<8c><89>".
     - Obtention du flag décodé : "f3iji1ju5yuevaus41q1afiuq".

4. ### Objectif 4 - Accès à l'utilisateur "flag09"
   - **Description :** Accéder à l'utilisateur "flag09" pour obtenir le flag final.
   - **Solution :** Les étapes suivantes ont été réalisées :
     - Passage à l'utilisateur "flag09" avec `su flag09`.
     - Exécution de la commande `getflag` pour obtenir le flag final.


