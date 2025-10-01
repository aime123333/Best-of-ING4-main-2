#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define NB_USERS 5

// Fonction de vérification (groupe 2)
int verification_identifiants(const char *identifiant, const char *motdepasse) {
    // Liste des identifiants et mots de passe valides
    const char *identifiants[NB_USERS] = {"client1", "client2", "client3", "client4", "client5"};
    const char *motsdepasse[NB_USERS] = {"mdp1", "mdp2", "mdp3", "mdp4", "mdp5"};

    for (int i = 0; i < NB_USERS; i++) {
        if (strcmp(identifiant, identifiants[i]) == 0 && strcmp(motdepasse, motsdepasse[i]) == 0) {
            return 1; // Authentification réussie
        }
    }
    return 0; // Aucun identifiant/mot de passe ne correspond
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
