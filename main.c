#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*          == INDICATEUR D'ETAT DE LA MACHINE ==           */
/* Selon l'état à la fin du logiciel, un chiffre s'affiche.
   0 | L'opération s'est terminée sans problème.
   1 | L'utilisateur a provoqué une erreur système.
   Autre | Erreur système inexpliquée.                      */

int main(int argc, char *argv[])
{
  /* Variables mode Solo */
  int mode;
  int Niveau;
  int nombre_mystere;
  int nombre_utilisateur;
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

  printf("                          == Le Nombre Mystere v2 ==\n\n");
  printf("--------------------------------------------------------------------------------\n");
  printf("Bienvenue dans le jeu du Nombre Mystere ! Dans ce jeu, vous devez trouver le nombre mystere grâce à des indices. Bonne chance !\n");
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
  printf("Choisissez un niveau de difficulté.\n");
  printf("1. Débutant | Nombre compris entre 1 et 50\n");
  printf("2. Intermédiaire | Nombre compris entre 1 et 100\n");
  printf("3. Difficile | Nombre compris entre 1 et 500\n");
  printf("4. Extrême | Nombre compris entre 1 et 1 000\n");
  printf("\nVous choisissez : ");
  scanf("%d", &Niveau);

  printf("\n");
  switch (Niveau)
  {
    case 1:
       printf("                     Mode Solo - Niveau %d\n", Niveau);
       /* Paramètres */
       int MAX = 50, MIN = 1;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
       /* Niveau */

       }
       {



       break;
    case 2:
    printf("                     Mode Solo - Niveau %d\n", Niveau);
    /* Paramètres */
    int MAX = 100, MIN = 1;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
       /* Niveau */
       printf("Le nombre mystère a été défini. Bonne chance ! \n");
      printf("Nombre : ");
       scanf("%d", &nombre_utilisateur);
       nombre_coups++;
       while (nombre_utilisateur != nombre_mystere) {


if (nombre_utilisateur > MAX)
{
    printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX);
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur < nombre_mystere)
{
    printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur > nombre_mystere)
{
    printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
}

       break;
       case 3:
       printf("                     Mode Solo - Niveau %d\n", Niveau);
       /* Paramètres */
       int MAX3 = 500;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX3 - MIN + 1)) + MIN;
       /* Niveau */
       printf("Le nombre mystère a été défini. Bonne chance ! \n");
       printf("Nombre : ");
       scanf("%d", &nombre_utilisateur);
       nombre_coups++;
       while (nombre_utilisateur != nombre_mystere) {


if (nombre_utilisateur > MAX3)
{
    printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX3);
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur < nombre_mystere)
{
    printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur > nombre_mystere)
{
    printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
}

       break;
       case 4:
       printf("                     Mode Solo - Niveau %d\n", Niveau);
       /* Paramètres */
       int MAX4 = 1000;
       srand(time(NULL));
       nombre_mystere = (rand() % (MAX4 - MIN + 1)) + MIN;
       /* Niveau */
       printf("Le nombre mystère a été défini. Bonne chance ! \n");
      printf("Nombre : ");
       scanf("%d", &nombre_utilisateur);
       nombre_coups++;
       while (nombre_utilisateur != nombre_mystere) {


if (nombre_utilisateur > MAX4)
{
    printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX4);
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur < nombre_mystere)
{
    printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur > nombre_mystere)
{
    printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
       }

       break;

default:
printf("Le logiciel va être fermé. Vous avez entré un(des) caractère(s) incorrect(s).");
return 1;
break;
}

  nombre_coups++;
  printf("\nBravo ! Vous avez gagné en %d coups !", nombre_coups);
  printf("\n\n");
  printf("--------------------------------------------------------------------------------\n");
  printf("       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n        ");
  return 0;

break;
case 2:
  printf("Choisissez un niveau de difficulté.\n");
  printf("1. Débutant | Nombre compris entre 1 et 50\n");
  printf("2. Intermédiaire | Nombre compris entre 1 et 100\n");
  printf("3. Difficile | Nombre compris entre 1 et 500\n");
  printf("4. Extrême | Nombre compris entre 1 et 1 000\n");
  printf("\nVous choisissez : ");
  scanf("%d", &niveau);

  printf("\n");
  switch (niveau)
  {
   case 1:
   printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* Définition des paramètres */
   printf("Nom du Joueur 1 : ");
   scanf("%s", &joueur1);
   printf("\n");
   printf("Nom du Joueur 2 : ");
   scanf("%s", &joueur2);
   printf("\n\n");
   srand(time(NULL));
   nmystere = (rand() % (MAX1 - MIN + 1)) + MIN;
   /* Niveau */
   printf("Le nom des deux joueurs et le nombre mystère ont été définis. Bonne chance !\n");
   while(nu1 != nmystere || nu2 != nmystere)
   {
      printf("%s, à vous de jouer : ", joueur1);
      scanf("%d", &nu1);
      nc1++;

      if (nu1 > MAX1)
      {
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX1);
      }

      else if (nu1 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else if (nu1 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else
      {
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur1, nc1/2, joueur2);
          return 0;
      }

      printf("%s, à vous de jouer : ", joueur2);
      scanf("%d", &nu2);
      nc2++;

      if (nu2 > MAX1)
      {
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX1);
      }

      else if (nu2 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else if (nu2 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else
      {
          nc2++;
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur2, nc2, joueur1);
  return 0;
   }
   }
  break;
  case 2:
  printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* Définition des paramètres */
   printf("Nom du Joueur 1 : ");
   scanf("%s", &joueur1);
   printf("\n");
   printf("Nom du Joueur 2 : ");
   scanf("%s", &joueur2);
   printf("\n\n");
   srand(time(NULL));
   nmystere = (rand() % (MAX2 - MIN + 1)) + MIN;
   /* Niveau */
   printf("Le nom des deux joueurs et le nombre mystère ont été définis. Bonne chance !\n");
   while(nu1 != nmystere || nu2 != nmystere)
   {
      printf("%s, à vous de jouer : ", joueur1);
      scanf("%d", &nu1);
      nc1++;

      if (nu1 > MAX2)
      {
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX2);
          nc1++;
      }

      else if (nu1 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else if (nu1 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else
      {
          nc1++;
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur1, nc1/2, joueur2);
          return 0;
      }

      printf("%s, à vous de jouer : ", joueur2);
      scanf("%d", &nu2);
      nc2++;

      if (nu2 > MAX2)
      {
          nc2++;
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX2);
      }

      else if (nu2 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else if (nu2 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else
      {
          nc2++;
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur2, nc2, joueur1);
          return 0;
   }
   }
  case 3:
  printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* Définition des paramètres */
   printf("Nom du Joueur 1 : ");
   scanf("%s", &joueur1);
   printf("\n");
   printf("Nom du Joueur 2 : ");
   scanf("%s", &joueur2);
   printf("\n\n");
   srand(time(NULL));
   nmystere = (rand() % (MAX3 - MIN + 1)) + MIN;
   /* Niveau */
   printf("Le nom des deux joueurs et le nombre mystère ont été définis. Bonne chance !\n");
   while(nu1 != nmystere || nu2 != nmystere)
   {
      printf("%s, à vous de jouer : ", joueur1);
      scanf("%d", &nu1);
      nc1++;

      if (nu1 > MAX3)
      {
          nc1++;
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX3);
      }

      else if (nu1 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else if (nu1 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else
      {
         nc1++;
         printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur1, nc1/2, joueur2);
         return 0;
      }

      printf("%s, à vous de jouer : ", joueur2);
      scanf("%d", &nu2);
      nc2++;

      if (nu2 > MAX3)
      {
          nc2++;
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX3);
      }

      else if (nu2 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else if (nu2 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else
      {
          nc2++;
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur2, nc2, joueur1);
     return 0;
      }
   }
  case 4:
   printf("                  Mode Multijoueur - Niveau %d\n", niveau);
   /* Définition des paramètres */
   printf("Nom du Joueur 1 : ");
   scanf("%s", &joueur1);
   printf("\n");
   printf("Nom du Joueur 2 : ");
   scanf("%s", &joueur2);
   printf("\n\n");
   srand(time(NULL));
   nmystere = (rand() % (MAX4 - MIN + 1)) + MIN;
   /* Niveau */
   printf("Le nom des deux joueurs et le nombre mystère ont été définis. Bonne chance !\n");
   while(nu1 != nmystere || nu2 != nmystere)
   {
      printf("%s, à vous de jouer : ", joueur1);
      scanf("%d", &nu1);
      nc1++;

      if (nu1 > MAX4)
      {
          nc1++;
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX4);
      }

      else if (nu1 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else if (nu1 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc1++;
      }

      else
      {
          nc1++;
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur1, nc1/2, joueur2);
          return 0;
      }

      printf("%s, à vous de jouer : ", joueur2);
      scanf("%d", &nu2);
      nc2++;

      if (nu2 > MAX4)
      {
          printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX4);
      }

      else if (nu2 < nmystere)
      {
          printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else if (nu2 > nmystere)
      {
          printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
          nc2++;
      }

      else
      {
          nc2++;
          printf("Bravo, c'est bien le nombre mystère !\nLa partie a été remportée par %s en %d coups, félicitations ! Dommage pour vous, %s. Vous aurez peut-être plus de chance la prochaine fois ;-)\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n", joueur2, nc2, joueur1);
   }
    printf("Le nombre mystère a été défini. Bonne chance ! \n");
      printf("Nombre : ");
       scanf("%d", &nombre_utilisateur);
       nombre_coups++;
       while (nombre_utilisateur != nombre_mystere) {


if (nombre_utilisateur > MAX)
{
    printf("ERREUR : Le nombre mystère est uniquement compris entre %d et %d.\n\n", MIN, MAX1);
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur < nombre_mystere)
{
    printf("Le nombre mystère est supérieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
else if (nombre_utilisateur > nombre_mystere)
{
    printf("Le nombre mystère est inférieur à celui qui vient d'être entré.\n\n");
    printf("Nombre : ");
    scanf("%d", &nombre_utilisateur);
    nombre_coups++;
}
   }
  break;
  default:
  printf("Le logiciel va être fermé. Vous avez entré un(des) caractère(s) incorrect(s).\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n");
  return 1;
  break;
}
default:
  printf("Le logiciel va être fermé. Vous avez entré un(des) caractère(s) incorrect(s).\n\n--------------------------------------------------------------------------------\n       Par Samuel Boïté, le 7 novembre 2012 à 11:56 - www.samuel-blog.tk\n\n\n");
  return 1;
  break;
  }
}
