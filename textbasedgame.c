#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "pokestrat.h"

/* Function Prototypes */
void playerstats(int,int,char []);
int beginnersfate();
void PokemonShowdown(int, int, char[]);

int main(void)
{
    /*Character stats*/
    int Health = 100;
    int Mana = 100;
    char name[50] = {0};
   
    printf("What's your name, adventurer?\n");
    scanf("%s",name);

    playerstats(Health,Mana,name); 

    /* Introduction */
    printf("You are in a path where you cannot run and cannot hide.\n");
    printf("Your only choice is to grow strong and survive\n");
    printf("Pick your fate:\n");

    

    int path = beginnersfate(name); // Returning the value of beginnersfate into path.

    if (path == 1)
    {
        PokemonShowdown(Health,Mana,name);
    }

    /* For the 2nd and 3rd path, they were not needed here. 
        I only called PokemonShowdown() for the makefile */
    return 0;
}

void playerstats(int Health, int Mana,char name[])
{
    printf("\n%s\tHP%d%%\tMP%d%%\n\n",name,Health,Mana);
}

int beginnersfate(char name[])
{
    int fate = 0;
    char choice;
    char pause;
    do
    {
        printf("1.Pokemon Showdown\n");
        printf("2.[EXTREME]Try to run for it anyways\n");
        printf("3.Start your adventure\n");
        scanf("%d",&fate);

        switch(fate)
        {
            case 1:
                // Pokemon Showdown //
                break;
            case 2:
                // text based journey //

                printf("You tried to go left, right, up, down... anywhere you can think of");
                printf(". Yet you still couldn't overcome that obstacle.\n");
                printf("You know what would help you overcome it? [Press Any key to continue]: ");
                scanf("%c",&pause);
                scanf("%c",&pause);
                printf("\n#1.Seeking help and just don't give up. #2.Be willing to Learn. #3.Always appreciate others and #4 if personal, try to change before its too late\n");
                scanf(" %c",&pause);

                
                printf("Do you accept the bad side and the good side of humanity? y/Y if yes, n/N if no: ");
                scanf("%c",&choice);
                choice = toupper(choice);

                while ((choice != 'Y') && (choice != 'N'))
                {
                    printf("\nPlease choose carefully: ");
                    scanf("%c",&choice);
                    choice = toupper(choice);
                }

                if (choice == 'Y')
                {
                    printf("\nWow. To think you would get this far huh? I'm somewhat proud of you.\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nA man/woman's worth lies on letting go of the past.\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nTo be hated by all or discouraged by all...\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nif you walk the path you believe in, shouldn't that be enough?\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nIn this modern world, the paths people take are extreme.\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nLawful, Chaotic, Good, Evil, Neutral, so be it.\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nSince this became to be, moving forward is no longer an option... whether we like it or not.\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nContinue to work hard, relax, have fun and work efficiently %s.\nWhatever path you believe in, I hope it will satisfy you and loved ones for years to come...\n",name);
                }
                else if (choice == 'N')
                {
                    printf("\nThat's fine. But don't try to clear them or even yourself out of existence though. You have to keep on learning to eventually win\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nDon't let the past weigh you down. Try to remember the past but don't relive it.\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nYou don't have to sacrifice the future anymore. I'm atleast here for you to aid you on this journey\n");
                    scanf("%c",&pause);
                    scanf("%c",&pause);
                    printf("\nWhether we overcome this path or not, let's try to make it our moment for as long as possible ;)\n");
                }
                break;
            case 3:
                // Project Temple journey //
                printf("Your adventure begins in Project Temple %s! [Press any key to continue]: ",name);
                scanf("%c",&pause);
                scanf("%c",&pause);
                printf("\nIf we keep up with the sprint, things will get lit!\n");
                scanf("%c",&pause);
                scanf("%c",&pause);

                printf("Just remember: working smart makes you money.\n");
                scanf("%c",&pause);
                scanf("%c",&pause);
                printf("And working as a team... makes you even more money lol\n");
                break;
            default:
                printf("Try again.\n");
        }
    }
    while ((fate != 1) && (fate != 2) && (fate != 3));

    return fate;
}