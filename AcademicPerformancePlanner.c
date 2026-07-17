#include <stdio.h>

// Function to calculate CGPA
float calculateCGPA(int totalSems, int *completedSems)
{
    int n;
    float sgpa, credits;
    float totalCredits = 0, totalPoints = 0;

    printf("Enter number of semesters completed: ");
    scanf("%d", &n);

    if (n <= 0 || n > totalSems)
    {
        printf("Invalid number of completed semesters.\n");
        return -1;
    }

    *completedSems = n;

    for (int i = 0; i < n; i++)
    {
        printf("\nSemester %d\n", i + 1);

        printf("Enter SGPA: ");
        scanf("%f", &sgpa);

        if (sgpa < 0 || sgpa > 10)
        {
            printf("Invalid SGPA! Please enter again.\n");
            i--;
            continue;
        }

        printf("Enter Credits: ");
        scanf("%f", &credits);

        if (credits <= 0)
        {
            printf("Invalid Credits! Please enter again.\n");
            i--;
            continue;
        }

        totalPoints += sgpa * credits;
        totalCredits += credits;
    }

    return totalPoints / totalCredits;
}

// Function to predict required SGPA
void predictSGPA(float cgpa, int completed, int total)
{
    float target;

    printf("\n----- Future CGPA Predictor -----\n");

    printf("Enter your target CGPA: ");
    scanf("%f", &target);

    if (target <= 0 || target > 10)
    {
        printf("Invalid target CGPA.\n");
        return;
    }

    int remaining = total - completed;

    if (remaining == 0)
    {
        printf("You have already completed your course.\n");
        return;
    }

    float required_avg =
        (target * total - cgpa * completed) / remaining;

    if (required_avg > 10)
    {
        printf("\nTarget CGPA is not possible.\n \n but, Failure is not final. Keep learning, keep growing.");
        return;
    }

    if (required_avg < 0)
    {
        printf("\nCongratulations! Your current CGPA is already above the target.\n");
        return;
    }

    float low = required_avg - 0.2;
    float high = required_avg + 0.4;

    if (low < 0)
        low = 0;
    if (high > 10)
        high = 10;

    low = ((int)(low * 10 + 0.5)) / 10.0;
    high = ((int)(high * 10 + 0.5)) / 10.0;

    printf("\nCurrent CGPA : %.2f\n", cgpa);
    printf("Remaining Semesters : %d\n", remaining);

    printf("\nTo achieve %.2f CGPA,\n", target);
    printf("Maintain an SGPA between %.1f and %.1f in the remaining semesters,\n You're closer than you think. Keep pushing towards your target\n", low, high);
}

int main()
{
    int totalSems;
    int completedSems;
    float cgpa;
    char choice;

    printf("========== CGPA Calculator ==========\n");

    printf("Enter total number of semesters in your course: ");
    scanf("%d", &totalSems);

    if (totalSems <= 0)
    {
        printf("Invalid number of semesters.\n");
        return 0;
    }

    cgpa = calculateCGPA(totalSems, &completedSems);

    if (cgpa == -1)
        return 0;

    printf("\nYour Current CGPA = %.2f\n", cgpa);

    printf("\nDo you want to predict your future CGPA target? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y')
    {
        predictSGPA(cgpa, completedSems, totalSems);
    }

    printf("\nThank you for using the CGPA Calculator!\n");

    return 0;
}