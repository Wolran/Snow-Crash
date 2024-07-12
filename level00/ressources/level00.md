# Rapport CTF - [Level00]

### Observation:
Quand on se connecte, on ne trouve aucun fichier donc le but est de trouver un fichier qui a été créer par notre utilisateur pour cela nous regardons tous les utilisateur du système: `cat /etc/passwd`

Nous pouvons voir plusieurs chose:
- Il y a plusieurs types d'utilisateurs: `levelxx` et `flagxx`
- On peut voir une étrange chaîne de caractère au niveau de l'utilisateur flag01 (elle nous servira plus tard)





### Solution :

Le but de ce niveau est donc de trouver un moyen de se connecter à l'utilisateur flag00 pour pouvoir obtenir le mot de passe de level01

En continuant nos recherches, nous trouvons tous les fichiers que flag00 à créer : `find / -type f -user flag00 2>/dev/null` ou `ls -lRa 2>/dev/null| grep "flag00"`

Nous pouvons voir un fichier étrange vu la date et le nom: 
```bash
----r--r--  1 flag00  flag00      15 Mar  5  2016 john
----r--r--  1 flag00  flag00      15 Mar  5  2016 john
```

```sh
/usr/sbin/john
/rofs/usr/sbin/john
```

Le nom du fichier 'john' nous rappelle l'outil de décryptage john the ripper.
Ouvrons le fichier pour voir: `cat /usr/sbin/john`
cela nous donne une sorte de mot de passe: `cdiiddwpgswtgt`
On le test, mais cela ne fonctionne pas, vu que le fichier s'appelle john on suppose que le mot de passe est encrypté.
On met le mot de passe encrypté dans un décrypteur en ligne et on obtient: `nottoohardhere`

On test le flag `nottoohardhere` et ça fonctionne, il ne reste plus qu'à `getflag` pour obtenir notre mot de passe de level01
