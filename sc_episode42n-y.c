#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pressEnter(){
	printf("Press enter to continue\n");
	while( getchar() != '\n' );
}

void startingPoint(){
    char name[50];
    char correct[] = "I-is it both?!";
    int res;
    pressEnter();
    printf("Why don't you read our souls?\n");
        printf("\n");
	pressEnter();
    printf("No! No! No! No! No!\n");
        printf("\n");
	printf("...................\n");
	printf("\n");
	pressEnter();
    printf("Here's a question. Will I hit you with my right fist or my left?\n");
	printf("\n");
    printf("Try to guess.");
        printf("\n");

    res = strncmp(correct,name,strlen(correct));
    while(res){
		printf("\n");
	fgets(name, sizeof(name), stdin);
		printf("\n");
	correct[strcspn(correct, "\n")] = '\0';
	res = strncmp(correct,name,strlen(correct));
	if(res){printf("No! No! No! No! No!\n");}
	else{
	    printf("Yes! Yes! Yes! Yes! Yes!\n");
	    printf("\n");
	    printf("YES!\n");
	    break;
	}
    }
}

int main(){
    startingPoint();
    return 0;
}
