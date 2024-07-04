#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Heads = 0,Tails = 0,toss1,toss2,toss3;

    // 乱数のシードを設定
    srand(time(NULL));

    toss1 = rand() % 2;
    toss2 = rand() % 2;
    toss3 = rand() % 2;

    // 結果を出力
    printf("Tossing a coin...\n");
    printf("Round 1: %s\n",toss1 == 1 ? "Heads" : "Tails");
    if(toss1 == 1) Heads += 1;
    else Tails += 1;

    printf("Round 2: %s\n",toss2 == 1 ? "Heads" : "Tails");
    if(toss2 == 1) Heads += 1;
    else Tails += 1;
    printf("Round 3: %s\n",toss3 == 1 ? "Heads" : "Tails");
    if(toss3 == 1) Heads += 1;
    else Tails += 1;

    printf("Heads: %d, Tails: %d\n",Heads,Tails);

    return 0;
}
