<<<<<<< HEAD
<<<<<<< HEAD
=======

// Fonction de vérification (groupe 2)
int verifier_authentification(const char *identifiant, const char *motdepasse) {
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
=======
>>>>>>> demande


>>>>>>> verification
