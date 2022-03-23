#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ring.h"

int main(int argc, char * argv[])
{

    short key;
    char i_IP[16] = "", i_Port[6] = "", command[128] = "";


    key = atoi(argv[1]);
    if(key > 32 || key < 1)
    {
        printf("Key must be between 1 and 32");
        exit(-1);
    }

    strcpy(i_IP, argv[2]);
    i_IP[15] = '\0';
    strcpy(i_Port, argv[3]);
    i_Port[5] = '\0';

    printf("KEY: %d\nIP: %s:%s\n", key, i_IP, i_Port);

    while(1){

        scanf("%s", command);
        printf("THIS: %s\n", command);

        if(!strcmp("new", command) || !strcmp("n", command))
            New();

        else if(!strcmp("bentry", command) || !strcmp("b", command))
        {
            Bentry(key, i_IP, i_Port);
        }
        else if(!strcmp("exit", command) || !strcmp("e", command))
        {
            printf("EXITING\n");
            exit(0);
        }


    }    

    exit(0);
}

//Creates a new ring with 1 knot


void Bentry(int boot, char *boot_IP, char *boot_Port)
{
    printf("Doing something with:\n key: %d\nIP: %s\nPort: %s", boot, boot_IP, boot_Port);
}



