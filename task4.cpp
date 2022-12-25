#include <iostream>
using namespace std;
main() {

string name;
float subject_1_marks;
float subject_2_marks;
float subject_3_marks;
float subject_4_marks;
float subject_5_marks;
float total_marks;
float percentage;

cout << "enter your name ";
cin >> name;
cout << "enter subject 1 marks ";
cin >> subject_1_marks;
cout << "enter subject 2 marks ";
cin >> subject_2_marks;
cout << "enter subject 3 marks ";
cin >> subject_3_marks;
cout << "enter subject 4 marks ";
cin >> subject_4_marks;
cout << "enter subject 5 marks ";
cin >> subject_5_marks;
total_marks = (subject_1_marks + subject_2_marks + subject_3_marks + subject_4_marks + subject_5_marks);
cout << endl;
cout << "Total marks are " << total_marks ;
percentage = (total_marks*100)/500;
cout << endl;
cout << "percentage is " << percentage ;



}