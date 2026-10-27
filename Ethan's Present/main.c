#include <stdio.h>
#include <string.h>

int main(){

    char answer[5] = "";
    char name[50] = "";
    
    printf("What is your name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1 ] = '\0';

    printf("Do you love Ethan? (yes/no) : ");
    scanf("%4s", answer);

    if(strcmp(answer, "yes") == 0){
        printf("YAY %s! You are Ethan's babe!", name);
    }
    else if(strcmp(answer, "no") == 0){
        printf("WHAT! HOW DARE YOU %s!", name);
    }
    else{
        printf("Not a valid answer. Re-Launch program to start again.");
    }

    printf("\nPress Enter to exit.");
    getchar();
    getchar();

    return 0;
}