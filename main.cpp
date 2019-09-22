
#include <iostream>
//Can be improved by adding time.h library and using fake time;


class clock {
private:                        //Definition of veriables
    int minuteHand;
    int hourHand;
    int dateDay;
    int dateWeek;
    int dateYear;               // I can add chronometer with time.h if i use and void useChronometer(); function
private:                        //Some of it's physical appearance
    double watchband = 1;
    double watchGlass = 1;
public:                         //Functions
    int angleOfMH();           //Angle between Hour and Minute
    void setClock(int Hour,int Minute);
    void setDate(int day,int week,int year);
    void lookAtClock();
    void lookAtDate();
};


int main() {
    clock ck;
    //You can set clock with setClock() function    setClock(int i, int j);
    //You cna set Date with setDate function        setDate(int i, int j, int K)
    std::cout<< ck.angleOfMH();
    return 0;
}

void clock::setClock(int Hour, int Minute) {
    minuteHand = Minute;
    hourHand = Hour;
}
void clock::setDate(int day, int week, int year) {
    dateDay=day;
    dateWeek=week;
    dateYear=year;
}
void clock::lookAtClock() {
    std::cout<<hourHand<< " : " <<minuteHand<<std::endl;
}
void clock::lookAtDate() {
    std::cout<<dateDay<<"."<<dateWeek<<"."<<dateYear<<std::endl;
}

int clock::angleOfMH() {
    int temp;
    temp = ((minuteHand*6) - (hourHand*30));
            if(temp <0)
                temp= -(temp);

    return temp;
}
