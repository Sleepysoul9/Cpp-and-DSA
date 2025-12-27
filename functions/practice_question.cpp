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

void status_report(){
    cout << "temperature value is : "<< temperature << endl ;
    cout << "humidity value is : "<< humidity << endl ;
}

float vpd(float temperature, float humidity){
    float vpd ;
    vpd =  ((temperature + humidity)/100 )*1.5;
    return vpd ;
}



int main (){
    cout << "greeenhouse os initiallization" << endl ;
    float cur_tem , cur_hum ;
    cur_tem = temperature();
    cur_hum = humidity();

    status_report();
    vpd(temperature, humidity);

    return 0 ;
}
