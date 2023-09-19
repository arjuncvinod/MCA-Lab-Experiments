// Write a structure to store the roll no., name, age (between 11 to 14) and address of n students. Store the information of the students.
// a.- Write a function to print the names of all the students having age 14.
// b- Write another function to print the names of all the students having even roll no.
// c- Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
#include <stdio.h>
struct student {
    int roll;
    char name[25];
    int age;
    char addr[50];
};


void name_with_age(struct student s[], int n) {
    printf("Students having the age 14 are:\n");

    for (int i = 0; i < n; i++) {
        if (s[i].age == 14) {
            printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
        }
    }
}


void even_check(struct student s[], int n) {
    printf("Students having even roll number:\n");

    for (int i = 0; i < n; i++) {
        if (s[i].roll%2 == 0) {
            printf("Roll: %d, Name: %s\n", s[i].roll, s[i].name);
        }
    }
}


void details(struct student s[], int roll,int n) {
    printf("Details of the Student :\n");

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("Roll: %d, Name: %s, Age : %d, Address: %s\n", s[i].roll, s[i].name,s[i].age,s[i].addr);
        }
    }
}

int main() {
    int n, roll_no;
    printf("Enter the number of students: ");
    scanf("%d", &n);


    struct student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the roll number of the student: ");
        scanf("%d", &s[i].roll);

        while (getchar() != '\n'); 

        printf("Enter the name of the student: ");
        scanf("%s", s[i].name);

        do {
            printf("Enter the age of the student: ");
            scanf("%d", &s[i].age);

            if (s[i].age < 11 || s[i].age > 14) {
                printf("Enter the age between 11 and 14 : \n");
            }
        } while (s[i].age < 11 || s[i].age > 14);

 
        while (getchar() != '\n');

        printf("Enter the address of the student: ");
        scanf("%s", s[i].addr);
    }

    name_with_age(s, n);
    even_check(s, n);

    printf("Enter the roll number to view the details");
    scanf("%d", &roll_no);

    details(s, roll_no, n);

    return 0;
}