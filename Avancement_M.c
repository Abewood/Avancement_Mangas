#include <stdio.h>
#include "Avancement_M.h"

struct Mangas {
    char nom[20];
    int episodes;
    int chapitres;
};

void add_episodes(int nb_ep, struct Mangas *mangas)
{
    int updated_N_ep = mangas -> episodes + nb_ep;
    mangas -> episodes = updated_N_ep;
}

void rm_episodes(int nb_ep, struct Mangas *mangas)
{
    int updated_N_ep = mangas -> episodes - nb_ep;
    if (updated_N_ep < 0)
    {
        printf("ERROR : Opération incorrecte... \n");
    } 
    else
    {
        mangas -> episodes = updated_N_ep;
    }
}

void add_chapitres(int nb_chpt, struct Mangas *mangas)
{
    int updated_N_chpt = mangas -> chapitres + nb_chpt;
    mangas -> chapitres = updated_N_chpt;
}

void rm_chapitres(int nb_chpt, struct Mangas *mangas)
{
    int updated_N_chpt = mangas -> chapitres - nb_chpt;
    if (updated_N_chpt < 0)
    {
        printf("ERROR : Opération incorrecte... \n");
    } 
    else
    {
        mangas -> chapitres = updated_N_chpt;
    }
}

int main()
{
    struct Mangas OP = { "One Piece", 1000, 1043};
    printf("Avancement sur %s : %i EPs & %i CHs \n", OP.nom, OP.episodes, OP.chapitres);
    add_episodes(1, &OP);
    printf("----- VERIFICATION EPISODES ----- \n");
    printf("Nombre visionnes : %i \n", OP.episodes);
    rm_episodes(1002, &OP);
    printf("Nombre visionnes : %i \n", OP.episodes);
    //printf("%s : %d, %d \n", OP.nom, OP.episodes, OP.chapitres);
    printf("--------------------------------- \n \n");
    
    printf("----- VERIFICATION CHAPITRES ----- \n");
    add_chapitres(5, &OP);
    printf("Nombre lus : %i \n", OP.chapitres);
    rm_chapitres(1050, &OP);
    printf("Nombre lus : %i \n", OP.chapitres);
    printf("----------------------------------");
    return 0;
}