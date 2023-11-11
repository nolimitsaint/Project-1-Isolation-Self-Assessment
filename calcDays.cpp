//St Angelo Davis
//Project 1 Isolation Self-Assessment

#include "Date.h"
#include "calcDays.h"

//function definition
int calcDays(const Date one, const Date two){
    int distToOne = 0;
    int distToTwo = 0;

    //calculate both dates distance to 01/01/2021 and them subtract distances to get distance from each other
    //if either year is in 2022 add 365 days to difference
    if(one.getYear() == 2022){
        distToOne += 365;
    }
    if(two.getYear() == 2022){
        distToTwo += 365;
    }


    //add number of days since beginning of month date is in
    distToOne += one.getDay() - 1;
    distToTwo += two.getDay() - 1;


    //add number of days depending on the month the date is in
    //adds number of days in month if date is past that month
    if(one.getMonth() > 1){
        distToOne += 31;
    }
    if(one.getMonth() > 2){
        distToOne += 28;
    }
    if(one.getMonth() > 3){
        distToOne += 31;
    }
    if(one.getMonth() > 4){
        distToOne += 30;
    }
    if(one.getMonth() > 5){
        distToOne += 31;
    }
    if(one.getMonth() > 6){
        distToOne += 30;
    }
    if(one.getMonth() > 7){
        distToOne += 31;
    }
    if(one.getMonth() > 8){
        distToOne += 31;
    }
    if(one.getMonth() > 9){
        distToOne += 30;
    }
    if(one.getMonth() > 10){
        distToOne += 31;
    }
    if(one.getMonth() > 11){
        distToOne += 30;
    }


    //same thing for the second date
    if(two.getMonth() > 1){
        distToTwo += 31;
    }
    if(two.getMonth() > 2){
        distToTwo += 28;
    }
    if(two.getMonth() > 3){
        distToTwo += 31;
    }
    if(two.getMonth() > 4){
        distToTwo += 30;
    }
    if(two.getMonth() > 5){
        distToTwo += 31;
    }
    if(two.getMonth() > 6){
        distToTwo += 30;
    }
    if(two.getMonth() > 7){
        distToTwo += 31;
    }
    if(two.getMonth() > 8){
        distToTwo += 31;
    }
    if(two.getMonth() > 9){
        distToTwo += 30;
    }
    if(two.getMonth() > 10){
        distToTwo += 31;
    }
    if(two.getMonth() > 11){
        distToTwo += 30;
    }


    //return difference between the two values
    if(distToOne > distToTwo){
        return distToOne - distToTwo;
    }
    else{
        return distToTwo - distToOne;
    }
}