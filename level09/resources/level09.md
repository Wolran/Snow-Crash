# Rapport CTF - [level09]

### Observation:
Nous trouvons un executable `level09` et un fichier `token` avec des caracteres non printable (surement encoder donc)

### Code:
On vas essayer de comprendre comment l'executable fonctonne:
- On ouvre ghidra et on regarde ce que donne l'executable.
- On comprend que a chaque caractere de ARV[1] on augmente sa valeur de i++ a chaque caractere
- Ou on peut juste tester `./level09 aaaaaaaaaaaaaaaaaaaaaaaaaa` et ca nous donne `abcdefghijklmnopqrstuvwxyz`

### Solution:
Il faut donc creer un programme qui permet d'inverser `./level09` et lui donner le fichier `token` -> (regarder main.c)\
Nous avons plus qu'a rediriger le contenu de token dans notre executable: 
`./a.out $(cat ./token)`

Nous avons notre flag pour pouvoir se connecter a l'utilisateur `flag09`

Flag: f3iji1ju5yuevaus41q1afiuq

