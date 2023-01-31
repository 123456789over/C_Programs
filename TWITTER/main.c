#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  /* Grupo:
Aluno 1: Jhonnatan Rodrigues Reishoffer Muniz
Aluno 2: João Miguel Araújo Panza Ribeiro
*/
  int i = 0, j = 0, contTra = 0, contAr = 0;
  char tweet[800000] =
      "Quando trabalhar de casa e a melhor opcao, garanta que voce e sua "
      "empresa continuem conectados e produtivos durante o #TrabalhoRemoto. "
      "@jared_spataro, lider de Microsoft 365, compartilhou 3 passos para "
      "otimizar a produtividade com o #MicrosoftTeams.";

  // Verificação da quantidade de # e @.
  for (i = 0; tweet[i] != '\0'; i++) {
    if (tweet[i] == 35) {
      contTra++;
    }
    if (tweet[i] == 64) {
      contAr++;
    }
  }

  printf("\n\nExiste %d menção(ões) e %d hashtag(s).\n\n", contAr, contTra);

  int a = 0, e = 0, i1 = 0, o = 0, u = 0;

  for (i = 0; i < strlen(tweet); i++) {
    if (tweet[i] == 'a' || tweet[i] == 'A') {
      a++;
    } else if (tweet[i] == 'e' || tweet[i] == 'E') {
      e++;
    } else if (tweet[i] == 'i' || tweet[i] == 'I') {
      i1++;
    } else if (tweet[i] == 'o' || tweet[i] == 'O') {
      o++;
    } else if (tweet[i] == 'u' || tweet[i] == 'U') {
      u++;
    }
  }

  printf("A frequência das vogais é:\n\n");
  printf("a(%d) ", a);
  for (i = 0; i < a; i++) {
    printf("*");
  }
  printf("\ne(%d) ", e);
  for (i = 0; i < e; i++) {
    printf("*");
  }
  printf("\ni(%d) ", i1);
  for (i = 0; i < i1; i++) {
    printf("*");
  }
  printf("\no(%d) ", o);
  for (i = 0; i < o; i++) {
    printf("*");
  }
  printf("\nu(%d) ", u);
  for (i = 0; i < u; i++) {
    printf("*");
  }

  for (i = 0; i < strlen(tweet); i++) {
    if (tweet[i] >= 48 && tweet[i] <= 57) {
      if (tweet[i - 1] == ' ' || tweet[i + 1] == ' ') {
        tweet[i] = '*';
      } else {
        tweet[i] = '_';
      }
    }
  }

  printf("\n %s \n\n", tweet);

  for (i = 0; i < strlen(tweet); i++) {
    if (tweet[i] == 35) {
      for (int j = i; j < strlen(tweet); j++) {
        printf("%c", tweet[j]);
        if (tweet[j] == ' ') {
          j = strlen(tweet);
        }
      }
    }
  }

  return 0;
}