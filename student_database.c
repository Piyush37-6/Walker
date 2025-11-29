//write a progrsm to manage a student database using structures
//the program should store name,rollno,mnarks in 3 subjects and calculate total and average marks
#include <stdio.h>

struct Student {
    char name;
    int rollNo;
    float marks[3];
    float total;
    float average;
};

void calculateTotalAndAverage(struct Student *student) {
    student->total = 0;
    for (int i = 0; i < 3; i++) {
        student->total += student->marks[i];
    }
    student->average = student->total / 3.0f;
}

void displayStudentDetails(struct Student student) {
    printf("Name: %c\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Marks: %.2f, %.2f, %.2f\n", student.marks[0], student.marks[1], student.marks[2]);
    printf("Total Marks: %.2f\n", student.total);
    printf("Average Marks: %.2f\n", student.average);
}

int main() {
    struct Student student;

    printf("Enter student name (single character): ");
    scanf(" %c", &student.name);

    printf("Enter roll number: ");
    if (scanf("%d", &student.rollNo) != 1) return 0;

    printf("Enter marks in 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        if (scanf("%f", &student.marks[i]) != 1) student.marks[i] = 0.0f;
    }
    
    calculateTotalAndAverage(&student);
    displayStudentDetails(student);

    return 0;
}
