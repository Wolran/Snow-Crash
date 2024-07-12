# Rapport CTF - [level01]

### Observation:
Dans le niveau précédant avec le commande `cat /etc/passwd` nous avons trouvé une chaîne de caractère étrange au niveau de l'identifiant de l'utilisateur flag01:
`flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash` = `42hDRfypTqqnw`
On le test comme flag, mais ça ne fonctionne pas, il est sûrement crypté.


### Solution :

Nous allons donc utliser john the ripper qui est un logiciel pour pouvoir facilement décrypter des mots de passe simple:
On lance un docker kali: `docker run --tty --interactive kalilinux/kali-rolling:latest bash`
On lance ensuite `apt update` / `apt install john`

Maintenant, qu'on a john on met notre mot de passe dans un fichier `echo 42hDRfypTqqnw > test.txt`
Ensuite, on demande à John d'afficher le résultat de son travail: `john --show "test".txt`

Cela nous donne le résultat suivant: 
```
?:abcdefg

1 password hash cracked, 0 left
```

Ainsi le mot de passe `abcdefg` est révélé et nous pouvons l'utiliser sur l'utilisateur flag01 pour pouvoir `getflag` et obtenir le mot de passe de l'utilisateur level02