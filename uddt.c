#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client 
{    
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

main(int argc, char const *argv[])
{
    struct client client1 = {0};
    strcpy(client1.Name , "Omar Flores");
    strcpy(client1.Id , "0000000001");
    client1.Credit = 1000000;
    strcpy(client1.Address , "Calle 1, Carrera 1, Ciudad Bolivar");

    printf("The client name is: %s \n", client1.Name);
    printf("The client id is: %s \n", client1.Id);
    printf("The client credit is: %f \n", client1.Credit);
    printf("The client address is: %s \n", client1.Address);

    return 0;
}