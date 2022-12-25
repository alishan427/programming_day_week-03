#include <iostream>
using namespace std;
main() {

string movie_name;
int adult_ticket_price;
int child_ticket_price;
int Number_of_adult_ticket_sold;
int Number_of_child_ticker_sold;
float percentage_to_donate ;
int amount_generate;
int amount_after_donation;



cout << "Enter movie name ";
cin >> movie_name;
cout << "Enter Adult Ticket Price";
cin >>  adult_ticket_price;
cout << "Enter Child Ticket Price";
cin >>  child_ticket_price;
cout <<  "Enter Number of Adult Ticket Sold";
cin >>   Number_of_adult_ticket_sold;
cout <<  "Enter Number of Child Ticket Sold";
cin >>    Number_of_child_ticker_sold;
cout << " Percentage to Donate ";
cin >> percentage_to_donate ;
cout << "___________________________";
cout << endl;

amount_generate = ( adult_ticket_price * Number_of_adult_ticket_sold);
cout << "Total amount generate " << amount_generate ;
cout << endl;
 
amount_after_donation = ( amount_generate * percentage_to_donate ) / 100;

cout << "amount after donation " << amount_after_donation;


}