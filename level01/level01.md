
cd / = revenir a la racine 

cat /etc/passwd = voir tout les users

on trouve "42hDRfypTqqnw" dans l'id de l'user flag01

on utilse l'application john the ripper

on met l'id : "42hDRfypTqqnw" dans un fichier txt

echo 42hDRfypTqqnw > text.txt

puis on lance john : 

john --single test.txt

john --show test.txt

le mot de passe est dechifrer : abcdefg

su flag02
abcdefg

getflag
