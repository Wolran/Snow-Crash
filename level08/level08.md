
export LOGNAME='$(getflag)'

./level07

on reverse programme apeler level07

on vois qu'il ne fait qu'afficher la variable d'environement apeller LOGNAME qui est normalement censer donner juste le nom du compte su lequel on est.

du coup on a juste a changer la valeur de cette variable pour lui injecter un notre commande getflag

export LOGNAME='$(getflag)'

et on lance le ./level07 

magie