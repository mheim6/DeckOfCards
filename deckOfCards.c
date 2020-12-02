//Monica Heim
//October 1, 2020
//Anchorage,Alaska

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int *initialArr = NULL, *deckArr = NULL, *tempDeck = NULL, numOfCards = 0;

int comparedecks(int *deckArrMoved)
{
    int i = 0;
    for(i = 0; i < numOfCards; i++)
    {
        if(tempDeck[i] != deckArrMoved[i])
            return FALSE;
    }
    return TRUE;
}

// always prints the deck array
void display(int *display, char *title)
{
    int j = 0;
    printf("\n%s : ", title);
    for (j = 0; j < numOfCards; j++)
    {
        printf("%d", deckArr[j]);
    }
}

int main(int argc, char **argv)
{
    int count = 0;
    int index = 0;
    int start = 1;
    int i = 0;
    int j = 0;
    int ret = 0;
    if(argc >  1)
    {
        numOfCards = atoi(argv[1]);
    }
    else
    {
        printf("Enter the number of cards in this deck\n");
        scanf("%d", &numOfCards);
    }
    if(numOfCards < 1 || numOfCards > 52)
    {
        printf("Please enter number between 1 - 52 (standard deck) \n");
        exit(0);
    }
    initialArr = (int *) malloc ((sizeof(int) * (numOfCards)));
    deckArr = (int *) malloc ((sizeof(int) * (numOfCards)));
    tempDeck = (int *) malloc ((sizeof(int) * (numOfCards)));
    for(i = 0; i < numOfCards; i++)
    {
        initialArr[i] = i;
        tempDeck[i] = i;
    }
    
    while(TRUE)
    {
        i = 0;
        index = numOfCards - 1;
        start = 0;
        int size = numOfCards;
        int skip = FALSE;
        int stride = 1;

        while (index >= 0)
        {
            int i = start;
            if (skip ==TRUE){
                                
                i = (start + stride);
            }
            
            for (; i < numOfCards; i += stride * 2)
            {
                deckArr[index] = initialArr[i];
                index--;
            }
            int newStart = start+stride;
            int newSize = size/2;
            if(skip){
                newStart =start;
                newSize=(size+1)/2;
            }
            int newStride = stride * 2;
            int newSkip = skip ^ (size % 2 == 1);
            start = newStart;
            size = newSize;
            stride = newStride;
            skip = newSkip;
        }
        ret = comparedecks(deckArr);
        if(ret)
        {
            count++;
            break;
        }
        display(deckArr, "Deck Array");
        count += 1;
        free(initialArr);
        initialArr = (int *) malloc (sizeof(int) * (numOfCards + 1));
        for (j = 0; j <= numOfCards; j++)
        {
            initialArr[j] = deckArr[j];
        }
    }
    free(initialArr);
    free(tempDeck);
    free(deckArr);

    fprintf(stdout, "\nNumber of Rounds = %d\n", count);

    return 0;
}




