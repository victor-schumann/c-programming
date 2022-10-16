/*
1. ask for grades and stop when user inputs '-1'

2. store them somewhere

3. calculate the sum/amount-of-grades
*/

#include <stdio.h>

int main() {
    float grade;
    double sum = 0;
    int i = 0;

    printf("One at a time, give me the grades of your student.\n");
    printf("Press '-1' and hit 'enter' when you're done.\n");
    
    do {
        printf("GRADE #%d: ", i+1);
        scanf("%f", &grade);
        sum+=grade;
        i++;
    } while (grade!=-1.00);

    i--;
    printf("\nThe total sum is:\t%.2f\n", (float) sum);
    printf("Computed grades:\t%d\n", i);
    printf("The final grade is:\t%.2f\n", (float) sum/(i));
}