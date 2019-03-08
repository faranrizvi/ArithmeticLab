#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool validateInput(double lowerBound, double upperBound, int numRectangles){
    if (lowerBound < -10.0){
        printf("invalid inputs...");
        return false;
    }
    if (upperBound > 10.0){
        printf("invalid inputs...");
        return false;
    }
    if (upperBound <= lowerBound){
        printf("invalid inputs...");
        return false;
    }
    if (numRectangles <= 0){
        printf("invalid inputs...");
        return false;
    }
    return true;
}

    double lowerBound, upperBound, stepSize, Height;
    int numRectangles;
    if(validateInput == true){
        double evalFunc(double stepSize);
    stepSize = upperBound - lowerBound / numRectangles;
    }
    
    if(lowerBound = 0, upperBound = 0, numRectangles = 0){
        printf("Terminating main!");}
        
    double evalFunc(double x){
    Height = 2*pow(x, 2) - 7*(x) - 2;
    }


int main()
{
    double lowerBound, upperBound, numRectangles, stepSize, leftArea, rightArea, midArea, leftHeight, rightHeight, midHeight;

    while (validateInput(lowerBound, upperBound, numRectangles)){
    
    printf("Enter the left boundary");
    scanf("%lf", &lowerBound);
    printf("Right boundary");
    scanf("%lf", &upperBound);
    printf("No. of rectangles to use");
    scanf("%d", &numRectangles);
    }
    
    if (validateInput == true){
        stepSize = (upperBound - lowerBound) / numRectangles;
        for (x = 0, x<n, x++);{
            leftHeight += evalFunc(x)*(lowerBound + stepSize);
            leftArea = leftHeight * stepSize;
        }
    
        for (x=1, x<=n, x++);{
            rightHeight += evalFunc(x)*(lowerBound - stepSize);
            rightArea = rightHeight * stepSize;
        }
        
        for (x=0, x<n, x++);{
            midHeight += evalFunc(x)*(lowerBound + 0.5*stepSize);
            midArea = midHeight * stepSize;
        }
    }
    
        printf("With Step Size: %lf.4\n", stepSize);
        printf("The approximate integral of the f(x) = 2(x^2)-7x-2\n");
        printf("Bound between %lf.4 and %lf.4, using %f rectangles is as follows\n", lowerBound, upperBound, numRectangles);
        
        printf("Mid point evaluation approximate: %lf.4\n", midArea);
        printf("Left point evaluation approximate: %lf.4\n", leftArea);
        printf("Right point evaluation approximate: %lf.4\n", rightArea);
}