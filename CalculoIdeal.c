#include <stdio.h>

// Function prototype for calcIdeal
float calcIdeal(float h);

// Function prototype for calcBmi
float calcBmi(float h, float w);

int main() {
    // Local variable declaration
    float height;
    float weight;
    float bmi;
    float ideal;

    // Ask user for height in centimeters
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    // Ask user for weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Call calcBmi function
    bmi = calcBmi(height, weight);

    // Print result
    printf("Your body mass index is %.2f kg/m^2\n", bmi);

    return 0;
}

// Implementation of calcIdeal function
float calcIdeal(float h) {
    float ideal;
    ideal = 0.75 * h - 62.75;
    return ideal;
}

// Implementation of calcBmi function
float calcBmi(float h, float w) {
    float bmi, a;

    // Compute body mass index
    bmi = w / ((h / 100.0) * (h / 100.0));

    if (bmi <= 18.5) {
        printf("is underweight\n");
        a = calcIdeal(h);
        printf("Your ideal weight is: %.2f\n", a);
    } else if (24 < bmi && bmi <= 30) {
        printf("is overweight\n");
        a = calcIdeal(h);
        printf("Your ideal weight is: %.2f\n", a);
    } else if (18.5 < bmi && bmi <= 24) {
        printf("is at normal weight\n");
    } else if (bmi > 30) {
        printf("is obese\n");
        a = calcIdeal(h);
        printf("Your ideal weight is: %.2f\n", a);
    }

    return bmi;
}
