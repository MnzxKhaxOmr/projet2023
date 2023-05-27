#include "bibliotheque.h"
#include "nomfct.h"
//ouverture du fichier.txt 
char* recupererTexte(const char* prix) {
    FILE *f = fopen("prix.txt", "rb");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return NULL;
    }

    fseek(f, 0, SEEK_END);
    long taille = ftell(f);
    rewind(f);

    if (taille >= MAX_LENGTH) {
        printf("Le fichier est trop volumineux pour être lu dans une variable.\n");
        fclose(f);
        return NULL;
    }

    char* texte = (char*)malloc((taille + 1) * sizeof(char));
    if (texte == NULL) {
        printf("Échec de l'allocation de mémoire.\n");
        fclose(f);
        return NULL;
    }

    fread(texte, sizeof(char), taille, f);
    texte[taille] = '\0';

    fclose(f);
    return texte;
}

void prochaineEtape(const char* partie) {
    char* str = recupererTexte(partie);
    if (str == NULL) {
        return;
    }

    char* part[SIZE];
    int i = 0;
    const char deli1[] = "@";
    const char deli2[] = "#";
    char* jeton = strtok(str, deli1);

    while (jeton != NULL) {
        jeton = strtok(NULL, deli1);
        if (jeton != NULL) {
            char* finLigne = strchr(jeton, '\n');
            if (finLigne != NULL) {
                *finLigne = '\0'; // Supprimer le caractère de fin de ligne
            }
            part[i] = jeton;
            i++;
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%s\n", part[j]);
    }

    free(str);
}
