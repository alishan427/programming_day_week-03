#include <iostream>
using namespace std;
main() { 

int initial_velocity;
float acceleration;
int time;
int final_velocity;

cout << "Enter Intial Velocity";
cin >>  initial_velocity;
cout << "Enter Acceleration";
cin >> acceleration;
cout << "Enter Time";
cin >> time;

final_velocity = (acceleration * time) + initial_velocity;
cout << "Final Velocity is ";
cin >> final_velocity; 

}