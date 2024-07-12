# Rapport CTF - [level08]

### Observation:
Nous observons 2 fichier `level08` et `token` \
Nous pouvons voir que token est créé par l'utilisateur flag08


### Code::
Nous allons décompiler l'exécutable avec ghidra pour voir ce qu'il contient :
```c
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v4; // [esp+24h] [ebp-40Ch]
  size_t v5; // [esp+28h] [ebp-408h]
  char buf[1024]; // [esp+2Ch] [ebp-404h] BYREF
  unsigned int v7; // [esp+42Ch] [ebp-4h]

  v7 = __readgsdword(0x14u);
  if ( argc == 1 )
  {
    printf("%s [file to read]\n", *argv);
    exit(1);
  }
  if ( strstr(argv[1], "token") )
  {
    printf("You may not access '%s'\n", argv[1]);
    exit(1);
  }
  v4 = open(argv[1], 0);
  if ( v4 == -1 )
    err(1, "Unable to open %s", argv[1]);
  v5 = read(v4, buf, 0x400u);
  if ( v5 == -1 )
    err(1, "Unable to read fd %d", v4);
  return write(1, buf, v5);
}
```
On peux voir que l'exécutable lis les fichier passés en paramètre, mais seulement il ne ce nomme pas `token`

### Solution:

À partir de ce constat, rien de plus simple, nous allons créer un lien symbolique avec le fichier `token` pour pouvoir obtenir un raccourci qui ne porte pas le même nom et qui pourra donc être lu par `level08`. 

On effectue cette commande: `ln -s /home/user/level08/token /tmp/try`

Ensuite, nous n'avons plus qu'à lancer notre programme avec le nouveau lien: `./level08 /tmp/try`

### Flag: quif5eloekouj29ke0vouxean
