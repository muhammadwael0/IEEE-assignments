#include <stdio.h>
#define Num_Of_Students 3

typedef struct
{
    char name[20];
    int grade;
} Person;

double Calculate_Students_Average (Person *persons);
void Sort_Person (Person *person);
Person Top_Student (Person *persons);
void Print_Students_Under_Average (Person *persons);

int main()
{
    /* user friendly UI */
    printf("======================================================\n");
    printf("=============== Student Analyze System ===============\n");
    printf("======================================================\n");
    printf("Enter Student Names then Student grade\n");

    int iter; /* iterator to iterate through Students */
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
    Person Top_Person = Top_Student(persons);
    printf("Congratulation You Are The Top Student\n");
    printf("Student Name = %s\n", Top_Person.name);
    printf("Student Grade = %i\n", Top_Person.grade);

    Sort_Person(persons);
    for (int i = 0; i < Num_Of_Students; ++i) {
        printf("%s  -  %i", persons[i].name, persons[i].grade);
    }
}

double Calculate_Students_Average (Person *persons)
{
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
    int iter1, iter2; /* iterator to iterate through Students */
    int min, index;
    for (iter1 = 0; iter1 < Num_Of_Students; ++iter1) {
        min = person[iter1].grade;
        index = iter1;
        for (iter2 = iter1 + 1; iter2 < Num_Of_Students; ++iter2) {
            if (person[iter2].grade < min)
            {
                min = person[iter2].grade;
                index = iter2;
            }
        }
        if (iter1 != index)
        {
            Person temp = person[iter1];
            person[iter1] = person[index];
            person[index] = temp;
        }
    }
}

Person Top_Student (Person *persons)
{
    Person person = persons[0];
    int iter;
    for (iter = 0; iter < Num_Of_Students; ++iter) {
        if (persons[iter].grade > person.grade)
        {
            person = persons[iter];
        }
    }
    return person;
}

void Print_Students_Under_Average (Person *persons)
{
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