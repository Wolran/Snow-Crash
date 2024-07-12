# Rapport CTF - [level09]

### Observation:
Nous trouvons un exécutable `level09` et un fichier `token` avec des caracteres non affichables (donc surement encodé)

### Code:
On vas essayer de comprendre comment l'exécutable fonctionne:
- On ouvre ghidra et on regarde ce que donne l'exécutable.
- On comprend qu'à chaque caractere de ARV[1] on incrémente la valeur de i à chaque caractere
- Ou on peut juste tester `./level09 aaaaaaaaaaaaaaaaaaaaaaaaaa` et ça nous donne `abcdefghijklmnopqrstuvwxyz`

### Solution:
Il faut donc créer un programme qui permet d'inverser `./level09` et lui donner le fichier `token` -> (regarder main.c)\
Nous avons plus qu'à rediriger le contenu de token dans notre exécutable: 
`./a.out $(cat ./token)`

Nous avons notre flag pour pouvoir se connecter à l'utilisateur `flag09`

Flag: f3iji1ju5yuevaus41q1afiuq

