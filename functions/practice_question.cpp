#include<bits/stdc++.h>
using namespace std;

// The Requirements:
// System Startup: The program must start by displaying a "Greenhouse OS Initializing..." banner.
//     Data Entry: The program needs to collect a Temperature (in Celsius) and a Humidity percentage from the user.
//     The Humidity must be between 0 and 100.
//     The Temperature must be between -10 and 60.
//     If the user enters a value outside these ranges, the program must reject it and force them to try again until the value is valid.

// Status Report: The program must display the final validated readings in a clean, professional format.

// The "VPD" Calculation: You need to calculate the Vapor Pressure Deficit (VPD) index. For this challenge, use this simplified formula:$$VPD = \frac{(Temperature + Humidity)}{100} \times 1.5$$Health Warning: If the calculated VPD is greater than 1.0, the program should print a warning: "CRITICAL: High Evaporation Risk!" Otherwise, it should print "Climate Stable."

float temperature(){
    float temp ;
    cout << "enter temperature in celcius"<< endl ;
    cin >> temp ;
    if(temp < -10 || temp > 60){
        cout << "invalid temperature" << endl ;
        temperature();
    }
    return temp ;
}

float humidity(){
    float hum ;
    cout << "enter humidity in percentage " << endl;
    cin >> hum ;
    if(0>hum || hum>100){
        cout << "invalid humdity" << endl ;
        humidity();
    }
    return hum ;
}

void status_report(float a, float b){
    cout << "status report :" << endl ;
    cout << "temperature value is : "<< a << endl ;
    cout << "humidity value is : "<< b << endl ;
}

float vpd(float temperature, float humidity){
    float vpd ;
    vpd =  ((temperature + humidity)/100 )*1.5;
    return vpd ;
}

void vpd_report(float vpd_value){
    
    cout << "vpd value is : "<< vpd_value << endl ;
    if(vpd_value > 1.0) {
        cout << "CRITICAL : High evaporation risk" << endl;
    }
    else {
        cout << "climate stable" << endl;
    }
}



int main (){
    cout << "greeenhouse os initiallization" << endl ;
    float cur_tem , cur_hum ,vpd_value ;
    cur_tem = temperature();
    cur_hum = humidity();

    status_report(cur_tem, cur_hum);
    vpd_value = vpd(cur_tem, cur_hum);
    vpd_report(vpd_value);

    return 0 ;
}
