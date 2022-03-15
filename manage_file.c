//
//  manage_file.c
//  Avancement_Mangas
//
//  Created by Clément Bastien on 15/03/2022.
//

#include "manage_file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_file()
{
    const char* filename = "test.txt";
    char buffer[100];

    FILE* output_file = fopen(filename, "w");
    if (!output_file){
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    /* Seek to the beginning of the file */
    fseek(output_file, 0, SEEK_SET);

    fread(buffer, strlen(buffer),1,output_file);
    printf("%s\n", buffer);
    //fwrite(string_test, 1, strlen(string_test), output_file);
    printf("Done Writing!\n");

    fclose(output_file);
    exit(EXIT_SUCCESS);
}
