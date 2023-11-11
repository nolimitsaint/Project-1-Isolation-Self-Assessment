//St Angelo Davis
//Project 1 Isolation Self-Assessment

#include <string>
using namespace std;

#include "Date.h"

//returns false if valid input else it returns true and sets day equal to d
bool Date::setDay(int d){
    if(d > 31 || d < 0){
        return false;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        if(d == 31){
                return false;
        }
    }
    else if(month == 2){
        if(d > 28){
            return false;
        }
    }
    //if none of the fail conditions are met
    day = d;
    return true;
}



int Date::getDay() const{
    return day;
}



//returns false if valid input else it returns true and sets month equal to m
bool Date::setMonth(int m){
    if(m > 12 || m < 0){
        return false;
    }
    else if(day == 31){
        if(m == 4 || m == 6 || m == 9 || m == 11){
            return false;
        }
    }
    else if(day > 28){
        if(m == 2){
            return false;
        }
    }
    //if none of the fail conditions are met
    month = m;
    return true;
}



int Date::getMonth() const{
    return month;
}



//returns false if valid input else it returns true and sets year equal to y
bool Date::setYear(int y){   
    if(y > 2022 || y < 2021){
        return false;
    }
    else{
        year = y;
        return true;
    }
}



int Date::getYear() const{
    return year;
}



//returns a string with the date in the format MM/DD/YYYY
string Date::showDate(){
    string show = "";
    
    //add the month to the show string
    if(month == 1){
        show += "01";
    }
    else if(month == 2){
        show += "02";
    }
    else if(month == 3){
        show += "03";
    }
    else if(month == 4){
        show += "04";
    }
    else if(month == 5){
        show += "05";
    }
    else if(month == 6){
        show += "06";
    }
    else if(month == 7){
        show += "07";
    }
    else if(month == 8){
        show += "08";
    }
    else if(month == 9){
        show += "09";
    }
    else if(month == 10){
        show += "10";
    }
    else if(month == 11){
        show += "11";
    }
    else if(month == 12){
        show += "12";
    }


    //add the slash between MM and DD
    show += "/";


    //add the day to the show string
    if(day == 1){
        show += "01";
    }
    else if(day == 2){
        show += "02";
    }
    else if(day == 3){
        show += "03";
    }
    else if(day == 4){
        show += "04";
    }
    else if(day == 5){
        show += "05";
    }
    else if(day == 6){
        show += "06";
    }
    else if(day == 7){
        show += "07";
    }
    else if(day == 8){
        show += "08";
    }
    else if(day == 9){
        show += "09";
    }
    else if(day == 10){
        show += "10";
    }
    else if(day == 11){
        show += "11";
    }
    else if(day == 12){
        show += "12";
    }
    else if(day == 13){
        show += "13";
    }
    else if(day == 14){
        show += "14";
    }
    else if(day == 15){
        show += "15";
    }
    else if(day == 16){
        show += "16";
    }
    else if(day == 17){
        show += "17";
    }
    else if(day == 18){
        show += "18";
    }
    else if(day == 19){
        show += "19";
    }
    else if(day == 20){
        show += "20";
    }
    else if(day == 21){
        show += "21";
    }
    else if(day == 22){
        show += "22";
    }
    else if(day == 23){
        show += "23";
    }
    else if(day == 24){
        show += "24";
    }
    else if(day == 25){
        show += "25";
    }
    else if(day == 26){
        show += "26";
    }
    else if(day == 27){
        show += "27";
    }
    else if(day == 28){
        show += "28";
    }
    else if(day == 29){
        show += "29";
    }
    else if(day == 30){
        show += "30";
    }
    else if(day == 31){
        show += "31";
    }


    //add the slash between DD and YYYY
    show += "/";


    //add the year to the show string
    if(year == 2021){
        show += "2021";
    }
    else if(year == 2022){
        show += "2022";
    }


    return show;
}