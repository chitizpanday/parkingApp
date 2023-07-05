#include<iostream>  

int main(){
   int t = 0;
   int b = 0;
   int c = 0;
   int amount = 0;
   int totalVehicle = 0;
   int userInput;
   while(true){
     std::cout<<"Please press 1 for taxi parking \n";
     std::cout<<"Please press 2 for bus parking \n";
     std::cout<<"Please press 3 for car parking \n";
     std::cout<<"Please press 4 to check the record \n";
     std::cout<<"Please press 5 to delete the records \n";
     std::cin>>userInput;
     switch (userInput)
     {
     case 1:
      if(totalVehicle<=50){
         amount = amount + 200;
         totalVehicle = totalVehicle + 1;
         t += 1;
      }
      else{std::cout<<"Parking lot is full";}
      break;

      case 2:
      if(totalVehicle<=50){
         amount = amount + 400;
         totalVehicle = totalVehicle + 1;
         c = c + 1;
      }
      else{std::cout<<"Parking lot is full";}
      break;

       case 3:
      if(totalVehicle<=50){
         amount = amount + 300;
         totalVehicle = totalVehicle + 1;
         b = b + 1;
      }
      else{std::cout<<"Parking lot is full";}
      break;

      case 4:
      std::cout<<"********************************" <<std::endl;
         std::cout<<"number of taxis parked: "<<t <<std::endl;
         std::cout<<"number of buses parked: "<<b <<std::endl;
         std::cout<<"number of car parked: "<<c <<std::endl;
         std::cout<<"Total amount is: $ "<<amount <<std::endl;
         std::cout<<"Total number of vehicles parked: "<<totalVehicle <<std::endl;
         std::cout<<"********************************" <<std::endl;
      break;

      case 5: 
         amount = 0;
         totalVehicle = 0;
         b = 0;
         c = 0;
         t = 0;
      std::cout<<"********************************" <<std::endl;
      std::cout<<"      Records Deleted \n";
      std::cout<<"********************************" <<std::endl;
      break;
     default:
     std::cout<<"Invalied Entry" <<std::endl;
     }
}

   return 0;
}