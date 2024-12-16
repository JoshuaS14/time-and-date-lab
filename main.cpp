#include <iostream>  
using namespace std;

int main(){
    

    //answers to the questions
    
    cout << "1. It would be 7 PM in tokyo" << endl;
    cout << "2. It is UTC+9 " << endl; 
    
    
    //displaying the local time
    time_t now = time(nullptr);
    
    cout << " " << endl; 
    
    cout << "Current time:" << ctime(&now);

    //calculate time zone offset
    cout << "Input a time zone offset: " << endl;
    int tzo;
    cin >> tzo; 

    int utcOffsethour = tzo; 

    now+= utcOffsethour * 3600; 

    tm* timeZoneTime = gmtime(&now);

    cout << "Current time in your timezone: " << asctime(timeZoneTime) << endl;

   
    //calculate and display how long it takes to answer question
cout << "what's 2+ 2" << endl;
time_t start = time(nullptr); 
int ans;
cin >> ans;

time_t end = time(nullptr); 

cout << "It took you " << end-start << " seconds to answer the question. " << endl;

    
    }