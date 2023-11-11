//St Angelo Davis
//Project 1 Isolation Self-Assessment

#include <iostream>
#include <string>
using namespace std;

#include "Date.h"
#include "calcDays.h"

int main(){
    //create variable that stores user input
    char input;


    //prompt user to enter if they have tested positive
    cout << "Did you test positive?(y or n): ";
    cin >> input;

    //checks if input is valid
    while(input != 'y' && input != 'n'){
        cout << "Invalid input. Enter y for yes or n for no: ";
        cin >> input;
    }


    //if the user has tested positive
    if(input == 'y'){
        //create a day object to store the day tested
        Date datePositive;
        //local variables that will hold user input
        int dayT;
        int monthT;
        int yearT;


        //prompt user for the date they tested positive and store it in object
        cout << "Enter the day of the month you were tested: ";
        cin >> dayT;

        //check if input is valid
        while(!datePositive.setDay(dayT)){
            cout << "Invalid input. Enter a valid day of the month: ";
            cin >> dayT;
        }

        cout << "Enter the month that you were tested as an integer(1 for January): ";
        cin >> monthT;

        //check if input is valid
        while(!datePositive.setMonth(monthT)){
            cout << "Invalid input. Enter a valid month: ";
            cin >> monthT;
        }

        cout << "Enter the year you were tested: ";
        cin >> yearT;

        //check if input is valid
        while(!datePositive.setYear(yearT)){
            cout << "Invalid input. Enter a valid year: ";
            cin >> yearT;
        }


        //output isolation time
        cout << "Test result: positive" << endl;
        cout << "Date tested posiitive: " << datePositive.showDate() << endl;
        cout << "Length of isolation: 5 days" << endl; 

        return 0;
    }



    //if user has not tested positive
    else if(input == 'n'){
        //prompt user to enter if they have been exposed
        cout << "Have you been exposed to someone who tested positvie?(y or n): ";
        cin >> input;

        while(input != 'y' && input != 'n'){
            cout << "Invalid input. Enter y for yes or n for no: ";
            cin >> input;
        }



        //if the user has not been exposed print out they must isolate 0 days
        if(input == 'n'){
            cout << "Test result: negative\nExposed to positive case: No\nLength of isolation: 0 days\n";
            return 0;
        }



        //if they have been exposed create date object to store date exposed
        Date dateExposed;
        //local variables to store user input
        int dayE;
        int monthE;
        int yearE;

        //prompt user to enter the date exposed
        cout << "Enter the day of the month you were exposed: ";
        cin >> dayE;

        //check if input is valid
        while(!dateExposed.setDay(dayE)){
            cout << "Invalid input. Enter a valid day of the month: ";
            cin >> dayE;
        }

        cout << "Enter the month that you were exposed: ";
        cin >> monthE;

        //check if input is valid
        while(!dateExposed.setMonth(monthE)){
            cout << "Invalid input. Enter a valid month: ";
            cin >> monthE;
        }

        cout << "Enter the year you were exposed: ";
        cin >> yearE;

        //check if input is valid
        while(!dateExposed.setYear(yearE)){
            cout << "Invalid input. Enter a valid year: ";
            cin >> yearE;
        }


        //prompt user to enter if they have recieved the second dose of the vaccine
        cout << "Have you recieved the second dose of the vaccine?(y or n): ";
        cin >> input;

        while(input != 'y' && input != 'n'){
            cout << "Invalid input. Enter y for yes or n for no: ";
            cin >> input;
        }



        //if they have not recieved the vaccine out they must isolate 10 days
        if(input == 'n'){
            cout << "Test result: negative" << endl;
            cout << "Exposed to positive case: Yes" << endl;
            cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;
            cout << "Second vaccination dose recieved: No" << endl;
            cout << "Vaccination status at time of exposure: not fully vaccinated" << endl;
            cout << "Length of isolation: 10 days" << endl;

            return 0;
        }



        //if they have recieved the vaccine create date object to store date vaccinated
        Date dateSecondDose;
        //local variables to store user input
        int dayV;
        int monthV;
        int yearV;

        //prompt user to enter the date exposed
        cout << "Enter the day of the month you were vaccinated: ";
        cin >> dayV;

        //check if input is valid
        while(!dateSecondDose.setDay(dayV)){
            cout << "Invalid input. Enter a valid day of the month: ";
            cin >> dayV;
        }

        cout << "Enter the month that you were vaccinated: ";
        cin >> monthV;

        //check if input is valid
        while(!dateSecondDose.setMonth(monthV)){
            cout << "Invalid input. Enter a valid month: ";
            cin >> monthV;
        }

        cout << "Enter the year you were vaccinated: ";
        cin >> yearV;

        //check if input is valid
        while(!dateSecondDose.setYear(yearV)){
            cout << "Invalid input. Enter a valid year: ";
            cin >> yearE;
        }



        //if difference between the two dates is 14 days or greater isolation time is 5 days
        if(calcDays(dateSecondDose, dateExposed) >= 14){
            cout << "Test result: negative" << endl;
            cout << "Exposed to positive case: Yes" << endl;
            cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;
            cout << "Second vaccination dose recieved: Yes" << endl;
            cout << "Date second vaccine dose recieved: " << dateSecondDose.showDate() << endl;
            cout << "Vaccination status at time of exposure: fully vaccinated" << endl;
            cout << "Length of isolation: 5 days" << endl;
            
            return 0;
        }



        //if they are not greater than 14 days than isolation time is 10 days
        cout << "Test result: negative" << endl;
        cout << "Exposed to positive case: Yes" << endl;
        cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;
        cout << "Second vaccination dose recieved: Yes" << endl;
        cout << "Date second vaccine dose recieved: " << dateSecondDose.showDate() << endl;
        cout << "Vaccination status at time of exposure: not fully vaccinated" << endl;
        cout << "Length of isolation: 10 days" << endl;
    }


    return 0;
}