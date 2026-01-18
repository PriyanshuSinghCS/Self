#include <stdio.h>

int main(){
    float weight;
    float height;
    float BMI;
    printf("Enter your WEIGHT in kgs:\n");
    scanf("%f", &weight);
    printf("Enter your HEIGHT in Mts:\n");
    scanf("%f", &height);
    BMI = (weight/height)*(1/height);
    if(BMI<15){
        printf("\nSTARVATION");
    }
    else if(BMI>=15.1 && BMI<=17.5){
        printf("\n\"ANOREXIC\"");
    }
    else if(BMI>=17.6 && BMI<=18.5){
        printf("\n\"UNDERWEIGHT\"");
    }
    else if(BMI>=18.6 && BMI<=24.9){
        printf("\n\"IDEAL\"");
    }
    else if(BMI>=25 && BMI<=25.9){
        printf("\n\"OVERWEIGHT\"");
    }
    else if(BMI>=30 && BMI<=39.9){
        printf("\n\"OBESE\"");
    }
    else if(BMI>=40.0){
        printf("\n\"MORBIDITY OBESE\"");
    }
    return 0;
}