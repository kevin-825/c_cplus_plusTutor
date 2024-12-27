#include <stdio.h>
union data{ 
    int x; char y; 
}; 


int main(){
    union data mydata; 
    mydata.y = 'a'; 
    mydata.x = 1;
    printf("%d\n", mydata.x); // Will print out 1
    printf("%c\n", mydata.y); // Will print out JUNK!

    // Common Use of Unions �
    // • Union within struct 
    struct student{ 
        union grade{ 
            int percentage_grade; //ex: 99% 
            char letter_grade; // 'B' 
        }grade; 
        int grade_format; // I set to 0 if grade is int, 1 if grade is char
    };
    struct student frank;
    frank.grade.percentage_grade = 90;
    frank.grade_format = 0; 
}
