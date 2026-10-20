#include <iostream>
using namespace std;

int main ()
{
    int numPass;
    double totalDis;
    double fuelEff;
    double fuelPrice;
    double mealCost; // per person meal cost
    double gasPrice;
    double fuelUsed;
    double mealTotal; // all meals together
    double totalCost; // everyone
    double costPerson; // one person

    cout << "Lets go on a roadtrip!" << endl << "Lets start with some baseline questions:" << endl;
    cout << "How many passengers are we taking? ";
    cin >> numPass;

    cout << "How long is the roadtrip going to be? (km)";
    cin >> totalDis;

    cout << "What is the fuel efficiency of the vehicle? (L/100km)";
    cin >> fuelEff;

    cout << "How much is the price of fuel right now? $";
    cin >> gasPrice;

    cout << "How much is one meal going to cost per person? $";
    cin >> mealCost;

    // Calculate the fuel used
    fuelUsed = (totalDis / 100) * fuelEff;

    fuelPrice = fuelUsed * gasPrice;

    // TODO - Calculate cost per person maybe...

    // Calcualte meal cost for group
    mealTotal = mealCost * numPass;

    totalCost = mealTotal + fuelPrice;

    costPerson = totalCost / numPass;

    cout << "==============================================================" << endl;
    cout << "Number of Passengers: " << numPass << endl;
    cout << "Distance travelled: " << totalDis << "km" << endl;
    cout << "Car Efficiency is: " << fuelEff << " L/100km" << endl;
    cout << "Fuel used: " << fuelUsed << "L" << endl;
    cout << "The cost of fuel is: $" << fuelPrice << endl;
    cout << "The cost of fuel per person is: $" << fuelPrice / numPass << endl;
    cout << "The meal total of the group is going to be: $" << mealTotal << endl;
    cout << "The total cost of the group for the whole trip will be: $" << totalCost << endl;
    cout << "The cost for one person is going to be: $" << costPerson << endl;
    cout << "==============================================================" << endl;
    cout << "The grand total is: $" << totalCost;
    cout << "Total cost per person is: $" << costPerson << endl;
    cout << "Thank you for the road trip! I hope it was fun, My E-Transfer is daniel.clark.2010";


return 0;

}
