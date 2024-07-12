# Rapport CTF - [level07]

### Observation:
Nous pouvons voir un exécutable `level07` avec les droits de `flag07`

### Code:
Nous allons décompiler l'exécutable avec ghidra pour voir ce qu'il contient :
```c
int __cdecl main(int argc, const char **argv, const char **envp)
{
  char *v3; // eax
  char *v5; // [esp+14h] [ebp-Ch] BYREF
  __gid_t v6; // [esp+18h] [ebp-8h]
  __uid_t v7; // [esp+1Ch] [ebp-4h]

  v6 = getegid();
  v7 = geteuid();
  setresgid(v6, v6, v6);
  setresuid(v7, v7, v7);
  v5 = 0;
  v3 = getenv("LOGNAME");
  asprintf(&v5, "/bin/echo %s ", v3);
  return system(v5);
}
```
Nous pouvons voir qu'il exécute la variable `LOGNAME` pour nous donner notre nom d'utilisateur.


### Solution:
On doit juste changer cette variable par une commande getflag avec les droits de flag07: \
`export LOGNAME='$(getflag)'`

### Nous avons donc directement le mot de passe de level08 sans avoir le flag07

