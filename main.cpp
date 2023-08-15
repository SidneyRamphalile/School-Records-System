#include <iostream>
#include "records.h"

using namespace std;

Student my_student(1, "Sidney Ramphalile");
Course my_course(7, "Introduction to Computer Science", 5);
Grade my_grade(1, 7, 'A');

int main()
{
    cout << "Student: " << my_student.get_name() << endl;
    cout << "Course: " << my_course.get_name() << endl;
    cout << "Credits " << my_course.get_credits() << endl;
    cout << "Grade: " << my_grade.get_grade() << endl;
    return 0;
}
