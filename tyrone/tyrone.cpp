#include <stdio.h>
#include <unistd.h>

typedef char string[50];

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("sheeit what you talkin bout nikka?\n");
        printf("Next time tell me your name fool word?\n");
        return 1;
    }
    printf("What up my nigga %s\n", argv[1]);
    int murderCode = 187;
    float f = 4.4;
    char c[] = "sup";
    string myString = "this is a string";
    printf("This be an int my nugga: %d\n",murderCode);
    sleep(3);
    printf("Dis shit her be a float: %f\n",f);
    sleep(3);
    printf("Sheeit dis be a char array: %s\n",c);
    sleep(3);
    printf("Dis shit right her be a string: %s\n",myString);
    sleep(3);
    printf("Sheeit watch me bust mmy gat, Got 10 rounds in dis mo fucka\n");
    sleep(2);
    for (int i = 0; i < 11; i++) {
        printf("Pop\n");
    }
    printf("Sheeit we missded dem fools\n");
    sleep(2);
    printf("back dis bitch up and let me reload tyrone\n");
    while (1) {
        printf("pop pop pop pop\n");
        sleep(4);
        printf("yeaaaa boi we got em\n");
        sleep(2);
        printf("we gots to get outta her main\n");
        if (murderCode == 187) {
            break;
        }
    }
    sleep(4);
    printf("We got a load of product we got to move to the west side\n");
    sleep(2);
    printf("Word?... Send that shit fool\n");
    return 0;
}
