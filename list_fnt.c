#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define NB_USERS 5


// Fonction de saisie (groupe 1)
void demander_identifiants(char *identifiant, char *motdepasse) {
    printf("=== Authentification Banque ===\n");
    printf("Identifiant : ");
    scanf("%s", identifiant);
    printf("Mot de passe : ");
    scanf("%s", motdepasse);
}