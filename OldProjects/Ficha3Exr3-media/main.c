#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int lenght;
    int sum=0;

    int counter=0;
    int negativeCounter=0;
    int positiveCounter=0;
    int plusPercent;

    printf(" come on, gimme an awful lotta numbers and press enter (0 to end the scan): \n");

    do {
        printf("\tNum%d = ", counter);
        scanf("%d", &num);
        if (num!=0){
            sum+=num;
            counter+=1;
            if (num>0) {
                positiveCounter++;
            }
            else {
                negativeCounter++;
            }
        }
    } while (num!=0);
    
    if (counter==0) {
        printf("come on, told ya I wanted some numbers... it is GOODBYE to you!");
    }
    else {
        printf("\n here's the stats:\n\tsequence lenght=\t\t %d;\n\tsequence sum =\t\t\t %d;\n\tsequence sum/lenght =\t\t %.2f", counter, sum, (float) sum/counter);

        printf("\n\n\tpercentage of positive numbers:\t %.2f", (float) positiveCounter/counter*100);
        printf("\n\n\tpercentage of negative numbers:\t %.2f", (float) (counter-positiveCounter)/counter*100);
        /*(1)*/
    }
    
    return 0;
}
