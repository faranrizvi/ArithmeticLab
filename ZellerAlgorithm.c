]#include <stdio.h>
#include <math.h>

void inputDate(int *day, int *month, int *year){
    printf("Please enter a date: ");
    scanf("%d/%d/%d", day, month, year);
}
void calculateDay(int day, int month, int year){
    int A, B, C, D;
    if(month == 2){
        A = 12;
    }
    if(month == 1){
        A = 11;
    }
    else{
        A = month - 2;
    }
    
    B = day;
    C = year % 100;
    D = year / 100;
    
    int W, X, Y, Z, R;
    W = (13*A - 1) / 5;
    X = C / 4;
    Y = D / 4;
    Z = W + X + Y + B + C - 2*D;
    R = Z % 7;
    
    if(R < 0){
        R = R + 7;
    }
    if (R == 0){
        printf("The day %d/%d/%d is a Sunday.", day, month, year);
    }
    if (R == 1){
        printf("The day %d/%d/%d is a Monday.", day, month, year);
    }
    if (R == 2){
        printf("The day %d/%d/%d is a Tuesday.", day, month, year);
    }
    if (R == 3){
        printf("The day %d/%d/%d is a Wednesday.", day, month, year);
    }
    if (R == 4){
        printf("The day %d/%d/%d is a Thursday.", day, month, year);
    }
    if (R == 5){
        printf("The day %d/%d/%d is a Friday.", day, month, year);
    }
    if (R == 6){
        printf("The day %d/%d/%d is a Saturday.", day, month, year);
    }
}
int main(void){
    int day, month, year;
    
    inputDate( &day,  &month,  &year);
    calculateDay( day,  month, year);
    return 0;
}