#include <stdio.h>
struct Sans
{
    int date;
    int startTime;
    int endTime;
    int salonCapacity;
    char filmName;
};
struct Salon
{
    struct Sans sans[20];
    char sound;
    char display; 
};
struct Film 
{
    int filmLen;
    char content;
    char summary;
    char castName;
    struct Film *Sans;
    int id;
    char filmName;
};
int main ()
{
    int filmNum, sansNum;
    char n;
    struct Sans sa[20]; 
    struct Salon S;
    
    //Film
    FILE *f;
    f = fopen("Film.txt", "wb");
    struct Film F;
    scanf("%d", &filmNum);
    for (int i=0; i<filmNum; i++) {
        scanf("%s", F.filmName);
        scanf("%d", F.filmLen);
        scanf("%s", F.content);
        scanf("%s", F.summary);
        scanf("%s", F.castName);
        F.id = i;
        fwrite(&F, sizeof(struct Film), 1, f);
    }
    fclose(f); //Film

    //salon & sans
    scanf("%d", &sansNum);
    for (int i=0; i<sansNum; i++) {
        scanf("%d", &S.sans[i].startTime);
        scanf("%d", &S.sans[i].endTime);
        scanf("%d", &S.sans[i].salonCapacity);
        scanf("%d", &S.sans[i].date); //I cant quick sort it...
    }

    // showing info for booking
    puts("select 1 to book Ticket\n select 2 to Manage cinema:");
    scanf("%c", &n);
    if (n=='1') {
    f = fopen("Film.txt", "rb");
    while (feof(f) == 0) {
        fread(&F, sizeof(struct Film), 1, f);
        printf("%s\t", F.filmName);
        printf("%d\t", F.filmLen);
        puts("%d", F.id);
    } 
    fclose(f);
    for (int i=0; i<sansNum; i++){
        puts ("%d", S.sans[i].startTime);
        puts ("%d", S.sans[i].endTime);
        puts ("%d", S.sans[i].date);
        puts ("%d", S.sans[i].salonCapacity);
      }

    }

    






}
