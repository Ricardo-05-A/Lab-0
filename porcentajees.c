#include <stdio.h>

int main() {
    float percentage_underweight, percentage_normal, percentage_overweight, percentage_obesity;
    int people, underweight = 0, normal = 0, overweight = 0, obesity = 0;

    printf("How many people: ");
    scanf("%d", &people);

    float bmi[people];
    float height[people], weight[people];

    for (int i = 0; i < people; i++) {
        printf("Enter the height for person %d (in cm): ", i + 1);
        scanf("%f", &height[i]);

        printf("Enter the weight for person %d (in kg): ", i + 1);
        scanf("%f", &weight[i]);

        bmi[i] = weight[i] / ((height[i] / 100) * (height[i] / 100));
        printf("The BMI for person %d is %.2f\n", i + 1, bmi[i]);
    }

    for (int a = 0; a < people; a++) {
        if (bmi[a] <= 18.5) {
            underweight++;
        } else if (bmi[a] > 18.5 && bmi[a] <= 24) {
            normal++;
        } else if (bmi[a] > 24 && bmi[a] <= 30) {
            overweight++;
        } else if (bmi[a] > 30) {
            obesity++;
        }
    }

    percentage_underweight = (underweight * 100) / people;
    percentage_normal = (normal * 100) / people;
    percentage_overweight = (overweight * 100) / people;
    percentage_obesity = (obesity * 100) / people;

    printf("Percentage of people underweight: %.2f\n", percentage_underweight);
    printf("Percentage of people with normal weight: %.2f\n", percentage_normal);
    printf("Percentage of people overweight: %.2f\n", percentage_overweight);
    printf("Percentage of people with obesity: %.2f\n", percentage_obesity);

    return 0;
}
