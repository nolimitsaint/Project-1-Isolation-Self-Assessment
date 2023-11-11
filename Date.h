//St Angelo Davis
//Project 1 Isolation Self-Assessment

#include <string>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int day {01};
        int month {01};
        int year {2021};

    public:
        //construcors
        Date() = default;
        Date(int d, int m, int y) : day{d}, month{m}, year{y} {
            //input validation
            //if input invalid set values to default
            //checks if year out of bounds
            if(year < 2021 || year > 2022){
                //if invalid set to default values
                day = 1;
                month = 1;
                year = 2021;
            }

            //checks if month out of bounds
            else if(month < 1 || month > 12){
                //if invalid set to default values
                day = 1;
                month = 1;
                year = 2021;
            }

            //checks if days out of bounds
            else if(day > 31 || day < 0){
                //if invalid set to default values
                day = 1;
                month = 1;
                year = 2021;
            }

            //checks if valid date
            else if(month == 4 || month == 6 || month == 9 || month == 11){
                if(day == 31){
                    //if invalid set to default values
                    day = 1;
                    month = 1;
                    year = 2021;
                }
            }

            //checks if valid date
            else if(month == 2){
                if(day > 28){
                    //if invalid set to defualt values
                    day = 1;
                    month = 1;
                    year = 2021;
                }
            }
        }


        //class function prototypes
        bool setDay(int d);
        int getDay() const;
        bool setMonth(int m);
        int getMonth() const;
        bool setYear(int y);
        int getYear() const;
        string showDate();
};

#endif