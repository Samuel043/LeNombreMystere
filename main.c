#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*          == INDICATEUR D'ETAT DE LA CONSOLE ==           */
/* Selon l'etat a la fin du logiciel, un chiffre s'affiche.
   0 | L'operation s'est deroulee sans probleme.
   1 | L'utilisateur a rentre un/des caracteres non autorises.
   Autre | Erreur systÃ¨me inexpliquÃ©e.                      */

int main(int argc, char *argv[])
{
  /* Variables mode Solo */
  int mode;
  int Niveau;
  int nombre_mystere;
  int nombre_utilisateur;
  int MIN = 1;
  int nombre_coups = 0;

  /* Variables mode Multijoueur */
  char joueur1[200] = "Joueur 1";
  char joueur2[200] = "Joueur 2";
  int niveau;
  int nu1;
  int nu2;
  int nc1 = 0;
  int nc2 = 0;
  int nmystere = 0;

  printf("                          == Le Nombre Mystere v3 ==\n\n");
  printf("--------------------------------------------------------------------------------\n");
  printf("Bienvenue dans le jeu du Nombre Mystere ! Dans ce jeu, vous devez trouver le nombre mystere grace a des indices. Bonne chance !\n");
  printf("--------------------------------------------------------------------------------\n");
  printf("Choisissez un mode de jeu.\n");
  printf("1. Solo | Trouvez le nombre mystere en faisant le moins de coups !\n");
  printf("2. Multijoueur | Trouvez le nombre mystere avant l'autre joueur !\n");
  printf("\nVous choisissez : ");
  scanf("%d", &mode);
  printf("\n");
  switch (mode)
  {
  case 1:
  printf("Choisissez un niveau de difficulte.\n");
  printf("1. Debutant | Nombre compris entre 1 et 50\n");
  printf("2. Intermediaire | Nombre compris entre 1 et 100\n");
  printf("3. Difficile | Nombre compris entre 1 et 500\n");
  printf("4. Extreme | Nombre compris entre 1 et 1 000\n");
  printf("\nVous choisissez : ");
  scanf("%d", &Niveau);

  printf("\n");
  switch (Niveau)
  {
    case 1:
       printf("                     Mode Solo - Niveau %d\n", Niveau);
       /* ParamÃ¨tres */
       int MAX=50;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
              break;

    case 2:
    printf("                     Mode Solo - Niveau %d\n", Niveau);
    /* ParamÃ¨tres */
       int MAX=100;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN
              break;

       case 3:
       printf("                     Mode Solo - Niveau %d\n", Niveau);
       /* ParamÃ¨tres */
       int MAX=500;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
              break;

       case 4:
       printf("                     Mode Solo - Niveau %d\n", Niveau);
       /* ParamÃ¨tres */
       int MAX=1000;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
       

       break;

default:
printf("Le logiciel va Ãªtre fermÃ©. Vous avez entrÃ© un(des) caractÃ¨re(s) incorrect(s).");
return 1;
break;
/* Niveau */
       printf("Le nombre mystÃ¨re a Ã©tÃ© dÃ©fini. Bonne chance ! \n");
      printf("Nombre : ");
       scanf("%d", &nombre_utilisateur);
       nombre_coups++;
       while (nombre_utilisateur != nombre_mystere) {


if (nombre_utilisateur > MAX)
{
    printf("ERREUR : Le nombre mystÃ¨re est uniquement compris entre %d et %d.\n\n", MIN, MAX);
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur < nombre_mystere)
{
    printf("Le nombre mystÃ¨re est supÃ©rieur Ã  celui qui vient d'Ãªtre entrÃ©.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur > nombre_mystere)
{
    printf("Le nombre mystÃ¨re est infÃ©rieur Ã  celui qui vient d'Ãªtre entrÃ©.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
       }
}

  nombre_coups++;
  printf("\nBravo ! Vous avez gagne en %d coups !", nombre_coups);
  printf("\n\n");
  printf("--------------------------------------------------------------------------------\n");
  printf("         Par Samuel043, le 18 mars 2013 a 09:40 - www.samuel043.tk\n\n\n        ");
  return 0;

break;
case 2:
  printf("Choisissez un niveau de difficulte.\n");
  printf("1. Debutant | Nombre compris entre 1 et 50\n");
  printf("2. Intermediaire | Nombre compris entre 1 et 100\n");
  printf("3. Difficile | Nombre compris entre 1 et 500\n");
  printf("4. Extreme | Nombre compris entre 1 et 1 000\n");
  printf("\nVous choisissez : ");
  scanf("%d", &niveau);

  printf("\n");
  switch (niveau)
  {
   case 1:
   printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* DÃ©finition des paramÃ¨tres */
   srand(time(NULL));
   nmystere = (rand() % (MAX - MIN + 1)) + MIN;
     break;
  case 2:
  printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* DÃ©finition des parametres */
   srand(time(NULL));
   nmystere = (rand() % (MAX - MIN + 1)) + MIN;
break;
     case 3:
  printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* DÃ©finition des paramÃ¨tres */
   srand(time(NULL));
   nmystere = (rand() % (MAX3 - MIN + 1)) + MIN;
   
  case 4:
   printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* DÃ©finition des paramÃ¨tres */
   p
   srand(time(NULL));
   nmystere = (rand() % (MAX4 - MIN + 1)) + MIN;
   
   }
   }
  break;
printf("Nom du Joueur 1 : ");
   scanf("%s", &joueur1);
   printf("\n");
   printf("Nom du Joueur 2 : ");
   scanf("%s", &joueur2);
   printf("\n\n");
/* Niveau */
   printf("Le nom des deux joueurs et le nombre mystÃ¨re ont Ã©tÃ© dÃ©finis. Bonne chance !\n");
   while(nu1 != nmystere || nu2 != nmystere)
   {
      printf("%s, Ã  vous de jouer : ", joueur1);
      scanf("%d", &nu1);
      nc1++;

      if (nu1 > MAX4)
      {
          nc1++;
          printf("ERREUR : Le nombre mystÃ¨re est uniquement compris entre %d et %d.\n\n", MIN, MAX);
      }

      else if (nu1 < nmystere)
      {
          printf("Le nombre mystÃ¨re est supÃ©rieur Ã  celui qui vient d'Ãªtre entrÃ©.\n\n");
          nc1++;
      }

      else if (nu1 > nmystere)
      {
          printf("Le nombre mystÃ¨re est infÃ©rieur Ã  celui qui vient d'Ãªtre entrÃ©.\n\n");
          nc1++;
      }

      else
      {
          nc1++;
          printf("Bravo, c'est bien le nombre mystÃ¨re !\nLa partie a Ã©tÃ© remportÃ©e par %s en %d coups, fÃ©licitations ! Dommage pour vous, %s. Vous aurez peut-Ãªtre plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel BoÃ¯tÃ©, le 7 novembre 2012 Ã  11:56 - www.samuel-blog.tk\n\n\n", joueur1, nc1/2, joueur2);
          return 0;
      }

      printf("%s, Ã  vous de jouer : ", joueur2);
      scanf("%d", &nu2);
      nc2++;

      if (nu2 > MAX)
      {
          printf("ERREUR : Le nombre mystÃ¨re est uniquement compris entre %d et %d.\n\n", MIN, MAX4);
      }

      else if (nu2 < nmystere)
      {
          printf("Le nombre mystÃ¨re est supÃ©rieur Ã  celui qui vient d'Ãªtre entrÃ©.\n\n");
          nc2++;
      }

      else if (nu2 > nmystere)
      {
          printf("Le nombre mystÃ¨re est infÃ©rieur Ã  celui qui vient d'Ãªtre entrÃ©.\n\n");
          nc2++;
      }

      else
      {
          nc2++;
          printf("Bravo, c'est bien le nombre mystÃ¨re !\nLa partie a Ã©tÃ© remportÃ©e par %s en %d coups, fÃ©licitations ! Dommage pour vous, %s. Vous aurez peut-Ãªtre plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel BoÃ¯tÃ©, le 7 novembre 2012 Ã  11:56 - www.samuel-blog.tk\n\n\n", joueur2, nc2, joueur1);
   return 0;
  default:
  printf("Le logiciel va Ãªtre fermÃ©. Vous avez entrÃ© un(des) caractÃ¨re(s) incorrect(s).\n\n--------------------------------------------------------------------------------\n       Par Samuel BoÃ¯tÃ©, le 7 novembre 2012 Ã  11:56 - www.samuel-blog.tk\n\n\n");
  return 1;
  break;
}
default:
  printf("Le logiciel va Ãªtre fermÃ©. Vous avez entrÃ© un(des) caractÃ¨re(s) incorrect(s).\n\n--------------------------------------------------------------------------------\n       Par Samuel BoÃ¯tÃ©, le 7 novembre 2012 Ã  11:56 - www.samuel-blog.tk\n\n\n");
  return 1;
  break;
  }
}
