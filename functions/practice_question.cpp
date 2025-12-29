#include<bits/stdc++.h>
using namespace std;

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
    cout << "vpd value is : "<< vpd << endl ;
    if(vpd > 1.0) {
        cout << "CRITICAL : High evaporation risk" << endl;
    }
    else {
        cout << "climate stable" << endl;
    }
    return vpd ;
}



int main (){
    cout << "greeenhouse os initiallization" << endl ;
    float cur_tem , cur_hum ;
    cur_tem = temperature();
    cur_hum = humidity();

    status_report(cur_tem, cur_hum);
    vpd(cur_tem, cur_hum);

    return 0 ;
}
