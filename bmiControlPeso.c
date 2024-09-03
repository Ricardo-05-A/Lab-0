#include <stdio.h>
// Function prototype for calcBmi
float calcBmi(float h, float w);
// Main function - entry point
int main() {
    // Local variable declaration
    float height;
    float weight;
    float bmi;
    // Ask the user for height in centimeters
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);
    // Ask the user for weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    // Call the calcBmi function
    bmi = calcBmi(height, weight);
    // Print the result
    printf("Your body mass index is %.2f kg/m^2\n", bmi);
    // Classify based on BMI
    if (bmi <= 18.5) {
        printf("You are underweight.\n");
    } else if (bmi <= 24) {
        printf("You are at a normal weight.\n");
    } else if (bmi <= 30) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}
// Implementation of the calcBmi function
float calcBmi(float h, float w) {
    return w / ((h / 100) * (h / 100));
}
