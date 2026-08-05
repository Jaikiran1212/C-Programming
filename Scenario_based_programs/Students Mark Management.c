#include <stdio.h>

int n = 0;

void mark_entry(int arr[])
{
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students!\n");
        n = 0;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("Enter the marks of student %d (0-100): ", i + 1);
            scanf("%d", &arr[i]);

            if (arr[i] < 0 || arr[i] > 100)
            {
                printf("Invalid marks! Please enter between 0 and 100.\n");
            }

        } while (arr[i] < 0 || arr[i] > 100);
    }
}

void marks_display(int arr[])
{
    printf("\nStudent Marks:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, arr[i]);
    }
}

int highest_mark(int arr[])
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int lowest_mark(int arr[])
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int total_marks(int arr[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

float average_marks(int arr[])
{
    return (float)total_marks(arr) / n;
}

void pass_fail_count(int arr[], int passMark)
{
    int pass = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= passMark)
            pass++;
    }

    printf("Passed Students = %d\n", pass);
    printf("Failed Students = %d\n", n - pass);
}

void above_average_count(int arr[])
{
    float avg = average_marks(arr);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
            count++;
    }

    printf("Students Above Average = %d\n", count);
    printf("Students Below or Equal Average = %d\n", n - count);
}

void topper_position(int arr[])
{
    int max = highest_mark(arr);

    printf("Topper Position(s): ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            printf("%d ", i + 1);
        }
    }

    printf("\n");
}

int main()
{
    int arr[100];
    int choice;

    while (1)
    {
        printf("\n========== STUDENT MARKS MANAGEMENT ==========\n");
        printf("1. Enter Student Marks\n");
        printf("2. Display Student Marks\n");
        printf("3. Find Highest Mark\n");
        printf("4. Find Lowest Mark\n");
        printf("5. Calculate Total Marks\n");
        printf("6. Calculate Average Marks\n");
        printf("7. Count Passed and Failed Students\n");
        printf("8. Count Students Above Average\n");
        printf("9. Display Topper Position\n");
        printf("10. Exit\n");

        printf("\nEnter your Choice: ");
        scanf("%d", &choice);

        if (choice != 1 && n == 0)
        {
            printf("\nPlease enter student marks first!\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                mark_entry(arr);
                break;

            case 2:
                marks_display(arr);
                break;

            case 3:
                printf("Highest Mark = %d\n", highest_mark(arr));
                break;

            case 4:
                printf("Lowest Mark = %d\n", lowest_mark(arr));
                break;

            case 5:
                printf("Total Marks = %d\n", total_marks(arr));
                break;

            case 6:
                printf("Average Marks = %.2f\n", average_marks(arr));
                break;

            case 7:
            {
                int passMark;

                printf("Enter Pass Mark: ");
                scanf("%d", &passMark);

                pass_fail_count(arr, passMark);
                break;
            }

            case 8:
                above_average_count(arr);
                break;

            case 9:
                printf("Highest Mark = %d\n", highest_mark(arr));
                topper_position(arr);
                break;

            case 10:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}