//
//  main.c
//  Avancement_Mangas
//
//  Created by Clément Bastien on 12/03/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structures
struct Mangas {
    char mangas_Name[20];
    unsigned episodes;
    unsigned chapters;
};

const char *string_test = "Temporary string to be written to file!";

// Ajouter des épisodes :
void add_episode(int nb_ep)
{
    // TODO : Ajouter un paramètre pour désigner le mangas sur lequel on ajoute
}

//
void remove_episode(int nb_ep)
{
    // TODO :
}

//
void add_chapter(int nb_chpt)
{
    // TODO :
}

//
void remove_chapter(unsigned nb_chpt, struct Mangas* mangas)
{
    // TODO :
    unsigned current_Chpt = mangas -> chapters - nb_chpt;
    mangas -> chapters = current_Chpt;
}


int main(void) {
    struct Mangas *DC = &(struct Mangas) { .mangas_Name = "One Piece", .episodes = 1000, .chapters = 1043 };
    printf("%s \n", DC -> mangas_Name);
    
    remove_chapter(2, DC);
    
    return DC -> chapters;
//    const char* filename = "test.txt";
//    char buffer[100];
//
//    FILE* output_file = fopen(filename, "w");
//    if (!output_file){
//        perror("fopen");
//        exit(EXIT_FAILURE);
//    }
//
//    /* Seek to the beginning of the file */
//    fseek(output_file, 0, SEEK_SET);
//
//    fread(buffer, strlen(buffer),1,output_file);
//    printf("%s\n", buffer);
//    //fwrite(string_test, 1, strlen(string_test), output_file);
//    printf("Done Writing!\n");
//
//    fclose(output_file);
//    exit(EXIT_SUCCESS);
}
