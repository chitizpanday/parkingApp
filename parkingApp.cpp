#include<iostream>

void displayScreen(){
   char empInput;
   int totalParkingSpace=50;
   int bus, car, count;
    bus=0;
    car=0;
    count=0;
std::cout<<"************** PARKING LOT APP **************\n \n";
std::cout<<"Please press B to inter bus \n";
std::cout<<"Please press C to inter car\n";
std::cout<<"Please press R to show Records\n\n";
std::cout<<"*********************************************\n";
std::cin>>empInput;
if(empInput=='b'){
   bus++;
   count=count+1;
std::cout<<"the total number of bus parked is: "<<bus<<std::endl;
std::cout<<"the total number of vehicles parked is: "<<count<<std::endl;
std::cout<<"the total number of free parking space available is: "<<totalParkingSpace-(bus+car)<<std::endl;

}
else if(empInput=='c'){
   car++;
   count=count+1;
std::cout<<"the total number of car parked is: "<<car<<std::endl;
std::cout<<"the total number of vehicles parked is: "<<count<<std::endl;
std::cout<<"the total number of free parking space available is: "<<totalParkingSpace-(bus+car)<<std::endl;
}
}


   

int main(){
      while(true){displayScreen();}
   
   return 0;
}