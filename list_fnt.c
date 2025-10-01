#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define NB_USERS 5


<<<<<<< HEAD
// Fonction de saisie (groupe 1)
void demander_identifiants(char *identifiant, char *motdepasse) {
    printf("=== Authentification Banque ===\n");
    printf("Identifiant : ");
    scanf("%s", identifiant);
    printf("Mot de passe : ");
    scanf("%s", motdepasse);
}
=======
    for (int i = 0; i < NB_USERS; i++) {
        if (strcmp(identifiant, identifiants[i]) == 0 && strcmp(motdepasse, motsdepasse[i]) == 0) {
            return 1; // Authentification réussie
        }
    }
    return 0; //Aucun identifiant/mot de passe ne correspond
}

int main() {
    char identifiant[MAX_LEN];
    char motdepasse[MAX_LEN];

    demande_identifiants(identifiant, motdepasse);

    if (verification_identifiants(identifiant, motdepasse)) {
        printf("Connexion réussie. Bienvenue %s !\n", identifiant);
    } else {
        printf("Identifiant ou mot de passe incorrect.\n");
    }

    return 0;
}
>>>>>>> origin/verification
