#include<iostream>  

// int main(){
//    int t = 0;
//    int b = 0;
//    int c = 0;
//    int amount = 0;
//    int totalVehicle;
//    int userInput;
//    while(true){
//      std::cout<<"Please press 1 for taxi parking \n";
//      std::cout<<"Please press 2 for bus parking \n";
//      std::cout<<"Please press 3 for car parking \n";
//      std::cout<<"Please press 4 to check the record \n";
//      std::cout<<"Please press 5 to delete the records \n";
//      std::cin>>userInput;
//      switch (userInput)
//      {
//      case 1:
//       if(totalVehicle<=5){
//          amount = amount + 200;
//          totalVehicle = totalVehicle + 1;
//          t += 1;
//       }
//       else{std::cout<<"Parking lot is full";}
//       break;

//       case 2:
//       if(totalVehicle<=5){
//          amount = amount + 400;
//          totalVehicle = totalVehicle + 1;
//          c = c + 1;
//       }
//       else{std::cout<<"Parking lot is full";}
//       break;

//        case 3:
//       if(totalVehicle<=5){
//          amount = amount + 300;
//          totalVehicle = totalVehicle + 1;
//          b = b + 1;
//       }
//       else{std::cout<<"Parking lot is full";}
//       break;

//       case 4:
//       std::cout<<"********************************" <<std::endl;
//          std::cout<<"number of taxis parked: "<<t <<std::endl;
//          std::cout<<"number of buses parked: "<<b <<std::endl;
//          std::cout<<"number of car parked: "<<c <<std::endl;
//          std::cout<<"Total amount is: $ "<<amount <<std::endl;
//          std::cout<<"Total number of vehicles parked: "<<totalVehicle <<std::endl;
//          std::cout<<"********************************" <<std::endl;
//       break;

//       case 5: 
//          amount = 0;
//          totalVehicle = 0;
//          b = 0;
//          c = 0;
//          t = 0;
//       std::cout<<"********************************" <<std::endl;
//       std::cout<<"      Records Deleted \n";
//       std::cout<<"********************************" <<std::endl;
//       break;
//      default:
//      std::cout<<"Invalied Entry" <<std::endl;
//      }
// }

//    return 0;
// }
int taxi;
   int bus;
   int totalVehicles;
   int totalMoney;
   int totalParkingSpots=5;
   char userInput;
void parkingApp(){
   std::cout<<"Please press t to enter Taxi \n";
   std::cout<<"Please press b to enter Bus \n";
   std::cout<<"Please press r to show the record \n";
   std::cin>>userInput;
   switch (userInput)
   {
   case 't':
      if(totalVehicles<5){
      taxi +=1;
      totalMoney += 100;
      totalVehicles+=1;
      }
      else{std::cout<<"the parking lot is full\n\n";}
      break;
    case 'b':
      if(totalVehicles<5){
      bus +=1;
      totalMoney += 200;
      }
      else{std::cout<<"the parking lot is fulllll\n";}
      break;
   case 'r':
      std::cout<<"Total number of taxi parked: "<<taxi <<std::endl;
      std::cout<<"Total number of bus parked: "<<bus <<std::endl;
      std::cout<<"Total Money: "<<totalMoney <<std::endl;
      std::cout<<"Total number of vehicles parked: "<<taxi+bus <<std::endl;
      std::cout<<"Total number of free parking spot: "<<totalParkingSpots-totalVehicles <<std::endl<<std::endl;
      break;
   
   
   default: std::cout<<"Invalied Entry \n";
      break;
   }
 
}
int main(){
   while(true){
      parkingApp();
   }
   return 0;
} 

