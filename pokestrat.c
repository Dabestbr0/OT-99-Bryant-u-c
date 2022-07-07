#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pokestrat.h"

void PokemonShowdown(int Health, int Mana,char name[])
{
    srand(time(0));
    
    struct PokeMan PhilSwift = {100,20,"PhilSwift","Hi, Phil Swift here for Flex Tape!","1.Boat slam  2.Flex Seal   3.Chainsaw   4. To show you the power of Flex Tape!"};
   
    struct PokeMan WillSmith = {100,20,"Will Smith","Keep my wife's name out your mouth!!","1.Bitch Slap   2.Mean Look  3.Rewind Time  4.Double Slap"};

    struct PokeMan ReggieNintendo = {100,64,"Reggie","My body is Reggie!","1.Body Slam  2. Body Press  3.MUDA MUDA MUDA MUDA  4.Intimidate "};

    struct PokeMan AshKetchum = {10,10,"Ash", "I'm Ash from Pallet Town. Get ready cuz here I come!", "1.Plot Armor   2.Immortality  3.Pikachu use Thunderbolt!  4. Roast"};

    int RNG = rand() % 4+1; /* Gets you a random number from 1 to 4 */

    switch (RNG)
    {
        case 1:
            Fight(RNG,&PhilSwift,Health,Mana,name);
            break;
        case 2:
            Fight(RNG,&WillSmith,Health,Mana,name);
            break;
        case 3:
            Fight(RNG,&ReggieNintendo,Health,Mana,name);
            break;
        case 4:
            Fight(RNG, &AshKetchum,Health,Mana,name);
    }
}

void Fight(int foe, struct PokeMan *Boss, int PlayerHealth, int PlayerPP, char PlayerName[])
{
    char enter;
    printf("A new foe has appeared! [Press any key to continue] ");
    scanf("%c",&enter);
    scanf("%c",&enter);
    printf("%s: %s",Boss->BossName,Boss->introQuote);
    scanf(" %c",&enter);
    scanf("%c",&enter);
    
    /* Play this music https://www.youtube.com/watch?v=Fupfr_eVLPo */
    bossmoveset(Boss->BossName,Boss->HP,Boss->PP, Boss->Moveset);
    playermoveset(PlayerHealth,PlayerPP,PlayerName);

    printf("\n\nBryant: \"Its %s vs %s ladies and gentleman! Memes aside, I feel like this will be a good fight!\"\n",PlayerName,Boss->BossName);

    scanf(" %c",&enter);
    scanf("%c",&enter);

    printf("\nYou duke it out..\n");

    scanf(" %c",&enter);
    scanf("%c",&enter);

    // Youtube clips because this is a mini-project and I ain't tryna go that far LOL
    // NONE OF THESE ARE MINE.
    if (foe == 1)
    {
        printf("Fight Scene: https://www.youtube.com/watch?v=GLsK1BhnZdY");
    }
    else if (foe == 2)
    {
        printf("Fight Scene: https://www.youtube.com/watch?v=sA7KfxkNP54");
    }
    else if (foe == 3)
    {
        printf("Fight Scene: https://www.youtube.com/watch?v=5FASCPuFN3o");
    }
    else if (foe == 4)
    {
        printf("Fight Scene: https://www.youtube.com/watch?v=dCGAPI96QMM");
    }
    printf("\n\n");
    exit(0);
}

void bossmoveset(char BossName[], int Health, int PowerPoints, char BossMoves[100])
{
    printf("\n%s\tHP:%d\tPP:%d\t",BossName,Health,PowerPoints);
    printf("\n%s moveset - %s\n",BossName,BossMoves);
    printf("\n\n");
}

void playermoveset(int HP, int PP, char player_name[])
{
    char jagger[100] = {"moveset - 1.Personal Attack\t2.[SPECIAL]Call Life Alert\t3.Your own Thunderbolt\t4.Rage Quit\n"};
    printf("%s\tHP:%d/%d\tPP:%d/%d\nplayer %s",player_name,HP,HP,PP,PP,jagger);
}






