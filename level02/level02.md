
ls 

on trouve un fichier "level02.pcap"

on vas devoir utiliser Wireshark pour savoir ce qu'il contient

on vas utiliser ssh pour l'envoyer sur le linux

scp = commande pour transferer des fichier

./level02.pcap est le fichier

ensuite on met l'ip du serv ssh du linux et le path de la ou on veux recevoir le fichier

scp <path du fichier> <user>@192.168.xxx.xxx:/<PATH>

scp level02.pcap vmuller@192.168.1.21:/home/vmuller

une fois qu'il est sur linux on dois lui donner les drois 

chmod 777 level02.pcap

on l'ouvre avec wireshark

on vois que c'est un flux TCP

ensuite on vas essayer d'ouvrir l'hexdump pour voir les transitions entre le serv et le client

pour ca on va  dans analyser/suivre/TCP

une fois a l'interieur on peux voir ce message:

Password: ft_wandr...NDRel.L0L

mais ce n'est pas notre flag

pour comprendre ouvront l'hexdump

la ou il y a marque : "afficher les données comme: " remplacer ASCII par HEXDUMP

nous voilla dans l'HEXDUMP

et la nous pouvons voir quelque chose d'etrange:

le code ascii pour les "." sont 7f qui est en decimal 127 et dont la touche "del"  en ascii, cella veux dire que les "." que nous voyons sont en fait des delete 

avec cette information nous pouvons reconstituer le code en enlevant les caracteres en trop

ce qui donne: 
ft_waNDReL0L

et nous avons notre flag

getflag