#include <stdio.h>

int main(int argc, char **argv){
    char str1[50];
    char str2[50];
    char cat[100];

    sprintf(str1,"Primeira parte");
    sprintf(str2,"Segunda parte");
    sprintf(cat,"%s - %s",str1, str2);

    puts(cat);
}