#include <stdio.h>

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

int main()
{
    struct Mangas OP = { "One Piece", 1000, 1043};
    add_episodes(1, &OP);
    printf("Nombre visionnes : %i \n", OP.episodes);
    rm_episodes(1002, &OP);
    printf("Nombre visionnes : %i \n", OP.episodes);
    //printf("%s : %d, %d \n", OP.nom, OP.episodes, OP.chapitres);

    return 0;
}