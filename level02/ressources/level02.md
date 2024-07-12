# Rapport CTF - [level02]

### Observation:
En arrivant sur le niveau on trouve un fichier pcap (packet capture) nommé `level02.pcap` qui a été créé par flag02: `ls -la`

### Code:
On utilise la commande `scp` pour ramener le fichier sur notre pc:
`scp -P {PORT} level02@localhost:/home/user/level02/level02.pcap .`
On lui donne les droits:
`chmod 777 ./level2.pcap`

On ouvre notre fichier pcap avec wireshark pour analyser son flux TCP:
`wireshark ./level02.pcap`

On va suivre notre flux TCP, donc dans wireshark nous allons dans: `analyze/follow/TCP Stream`:
```
Linux 2.6.38-8-generic-pae (::ffff:10.1.1.2) (pts/10)

..wwwbugs login: l.le.ev.ve.el.lX.X
..
Password: ft_wandr...NDRel.L0L
.
..
Login incorrect
wwwbugs login: 
```

On ouvre ensuite l'hexdump et on obtient ça:
```
000000D6  00 0d 0a 50 61 73 73 77  6f 72 64 3a 20            ...Passw ord: 
000000B9  66                                                 f
000000BA  74                                                 t
000000BB  5f                                                 _
000000BC  77                                                 w
000000BD  61                                                 a
000000BE  6e                                                 n
000000BF  64                                                 d
000000C0  72                                                 r
000000C1  7f                                                 .
000000C2  7f                                                 .
000000C3  7f                                                 .
000000C4  4e                                                 N
000000C5  44                                                 D
000000C6  52                                                 R
000000C7  65                                                 e
000000C8  6c                                                 l
000000C9  7f                                                 .
000000CA  4c                                                 L
000000CB  30                                                 0
000000CC  4c                                                 L
000000CD  0d                                                 .
```


### Solution :

Nous avons donc le flag en clair, mais pas totalement, car les '.' Sont en realité des caractères `7f` en hexadécimal et donc un caractère `DEL` (delete) en ASCII.
Nous enlevons donc une lettre à chaque fois que nous avons un caractère `DEL` et nous obtenons le flag : ft_waNDReL0L

