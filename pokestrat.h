struct PokeMan
{
    int HP;
    int PP;
    char BossName[100];
    char introQuote[100];
    char Moveset[100];
    char* hitBoxQuotes[100];
    char MegaEvolution[100];
};


void Fight(int foe,  struct PokeMan *Boss, int, int, char []);
void bossmoveset(char BossName[], int Health, int PowerPoints, char BossMoves[100]);
void playermoveset();