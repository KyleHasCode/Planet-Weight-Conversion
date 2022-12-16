//Language: C++

#include <iostream>

int main() {

 int Weight;
 int planetNum;

 std::cout << "What is your weight?\n";
 std::cin >> Weight;
 // List of number inputs of planets
 // 1 = Mercury
 // 2 = Venus
 // 3 = Mars
 // 4 = Jupiter
 std::cout << "Enter number for planet destination:\n";
 std::cin >> planetNum;
//Planet Mercury weight calculation
 if (planetNum == 1){
   double MerWe = Weight * 0.38;
   std::cout << "Your weight on Mercury is: " << MerWe << "kg" << "\n";
 }
//Planet Venus weight calculation
else if (planetNum == 2){
   double VenWe = Weight * 0.91;
   std::cout << "Your weight on Venus is: " << VenWe << "kg" << "\n";
}
//Planet Mars weight calculation
else if (planetNum == 3){
   double MarWe = Weight * 0.38;
   std::cout << "Your weight on Mars is: " << MarWe << "kg" << "\n";
}
//Planet Jupiter weight calculation
else if (planetNum == 4){
   double JupWe = Weight * 2.34;
   std::cout << "Your weight on Jupiter is: " << JupWe << "kg" << "\n";

}
}
