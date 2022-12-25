#include <iostream>
using namespace std;
main() {

float size_of_the_bag;
float cost_of_the_bag;
float area_in_square_feet;
float fertilizer_per_pound;
float fertilizing_area_per_square_feet;

cout << " Bag size in Pounds ";
cin >> size_of_the_bag;
cout << " Cost of the Bag ";
cin >> cost_of_the_bag;
cout << " Area Covered by bag in square feet ";
cin >> area_in_square_feet;


cout << "____________________________________________________";
cout << endl;

fertilizer_per_pound = (cost_of_the_bag / size_of_the_bag );
cout << "cost of fertilizer per pound" << fertilizer_per_pound ;
cout << endl;
fertilizing_area_per_square_feet = (area_in_square_feet /  cost_of_the_bag );
cout << "Cost of fertilizing area per square feet " << fertilizing_area_per_square_feet ;
cout << endl;
}