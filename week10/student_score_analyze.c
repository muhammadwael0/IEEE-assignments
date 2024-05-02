#include <stdio.h>
#define Num_Of_Students 5

typedef struct
{
    char name[20];
    int grade;
} Person;

double Calculate_Students_Average (Person *persons);
void Sort_Person (Person *person);
void Print_Top_Student (Person *persons);
void Print_Students_Under_Average (Person *persons);

int main()
{
    /* user friendly UI */
    printf("======================================================\n");
    printf("=============== Student Analyze System ===============\n");
    printf("======================================================\n");
    printf("Enter Student Names then Student grade\n");

    int iter; /* to iterate through Students */
    Person persons[Num_Of_Students];
    for (iter = 0; iter < Num_Of_Students; ++iter) {
        printf("Enter Student Name: ");
        scanf("%s", persons[iter].name);
        printf("Enter Student Grade: ");
        scanf("%d", &persons[iter].grade);
    }
    printf("========================================================\n");
    printf("Average Test Score = %.2lf\n", Calculate_Students_Average(persons));

    Print_Students_Under_Average(persons);
    Print_Top_Student(persons);
    printf("========================================================\n");
}

double Calculate_Students_Average (Person *persons)
{
    /* Calculate Students Average By iterate through persons and get Sum of their grade */
    double avg = 0;
    int iter; /* iterator to iterate through Students */
    for (iter = 0; iter < Num_Of_Students; ++iter) {
        avg += persons[iter].grade;
    }
    avg /= Num_Of_Students;
    return avg;
}

void Sort_Person (Person *person)
{
    /* Sort Persons By using Selection Sort */
    int iter1, iter2; /* iterator to iterate through Students */
    int min, index;
    for (iter1 = 0; iter1 < Num_Of_Students; ++iter1) {
        min = person[iter1].grade;
        index = iter1;
        for (iter2 = iter1 + 1; iter2 < Num_Of_Students; ++iter2) {
            if (person[iter2].grade < min) /* Find person with minimum grade */
            {
                min = person[iter2].grade;
                index = iter2;
            }
        }
        if (iter1 != index) /* Swap two persons if their grade not Same person */
        {
            Person temp = person[iter1];
            person[iter1] = person[index];
            person[index] = temp;
        }
    }
}

void Print_Top_Student (Person *persons)
{
    /* Print Top Student to print all students with the maximum grade */
    Sort_Person(persons);
    printf("Congratulations to Our Top Students\n");
    printf("Student Name = %s\n", persons[Num_Of_Students - 1].name);
    printf("Student Grade = %i\n", persons[Num_Of_Students - 1].grade);

    int iter;
    for (iter = Num_Of_Students - 2; iter >= 0; --iter) {
        if (persons[iter].grade == persons[Num_Of_Students - 1].grade)
        {
            printf("Student Name = %s\n", persons[iter].name);
            printf("Student Grade = %i\n", persons[iter].grade);
        }
    }
}

void Print_Students_Under_Average (Person *persons)
{
    /* Print Students Under Average to print all students with grade under average with message */
    double avg = Calculate_Students_Average(persons);
    int iter;
    printf("========================================================\n");
    for (iter = 0; iter < Num_Of_Students; ++iter) {
        if (!iter) printf("These Students Should Study Hard or They Will Fail\n");
        if (persons[iter].grade < avg)
            printf("Student Name: %s\nStudent Score: %i\n", persons[iter].name, persons[iter].grade);
    }
    printf("========================================================\n");
}