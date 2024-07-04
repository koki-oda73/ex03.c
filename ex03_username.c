#include <stdio.h>
#include <string.h>

int main(){
    printf("Who are you?\n");
    char name[59];
    fgets(name,sizeof(name),stdin);

    if(name[strlen(name) - 1] =='\n'){
        name[strlen(name) - 1] ='\0';
    }
    printf("Hello, %s!\n",name);

    return 0;
}
