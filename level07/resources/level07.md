# Rapport CTF - [level07]

### Observation:
Nous pouvons voir un exécutable `level07` avec les droits de flag07

### Code:
Nous pouvons voir qu'il exécute la variable LOGNAME pour nous donner notre nom d'utilisateur.


### Solution:
On a juste à changer cette variable par une commande getflag avec les droits de flag07: `export LOGNAME='$(getflag)'`

### Nous avons donc directement le mot de passe de level08 sans avoir le flag07

