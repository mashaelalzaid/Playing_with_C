#include <stdio.h>

int main() {
    int num_courses, i;
    float total_credits = 0, total_points = 0;

    printf("Enter the number of courses in your first semester: ");
    scanf("%d", &num_courses);

    float credit_hours[num_courses], grade[num_courses];

    for(i = 0; i < num_courses; i++) {
        printf("Enter the credit hours for course %d: ", i + 1);
        scanf("%f", &credit_hours[i]);

        printf("Enter the grade received (4.0 for A, 3.5 for B+, etc.) for course %d: ", i + 1);
        scanf("%f", &grade[i]);

        total_credits += credit_hours[i];
        total_points += credit_hours[i] * grade[i];
    }

    float GPA = total_points / total_credits;

    printf("Your GPA for the semester is: %.2f\n", GPA);

    return 0;
}

