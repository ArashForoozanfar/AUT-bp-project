//main File Buy Ticket
#include <stdio.h>
#include ".vscode/File 1.txt"
int main()
{
    int x = 0;
    printf("press 1(%d): Buy Ticket\npress 2(%d): Manage Cinema", x, x);
struct Sans s;
struct Salon Sa;
struct Film F;
FILE *p;
p = fopen("File 1.txt", "w+");
if (x==1) {
    printf("you want to buy ticket, please write your ticket specification: ");
scanf("%d", &s.date);
scanf("%d", &s.startTime);
scanf("%d", &s.endTime);
scanf("%s", s.filmName);
scanf("%d", s.salonCapacity);
scanf("%s %s", Sa.sound, Sa.display);
scanf("%d %s %s", F.filmLen, F.content, F.summary, F.castName);
    }
}
