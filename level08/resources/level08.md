# Rapport CTF - [level08]

### Observation:
Nous observons 2 fichier `level08` et `token` \
Nous pouvons voir que token est créer par l'utilisateur flag08


### Code::
Nous allons décompiler l'exécutable avec ghidra pour voir ce qu'il contient : \
On peux voir que l'exécutable lis les fichier passer en parametre, mais seulement il ne ce nome pas `token`

### Solution:

À partir de ce constat, rien de plus simple, nous allons créer un lien symbolique avec le fichier `token` pour pouvoir obtenir un raccourci qui ne porte pas le même nom et qui donc pourra être lu par `level08`. 

On effectue cette commande: `ln -s /home/user/level08/token /tmp/try`

Ensuite, nous n'avons plus qu'à lancer notre programme avec le nouveau lien: `./level08 /tmp/try`

### Flag: quif5eloekouj29ke0vouxean
