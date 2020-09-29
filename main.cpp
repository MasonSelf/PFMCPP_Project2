#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 Integer
 Character
 Boolean
 Floating Point
 Double Floating Point
 Valueless or Void
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

    int numberOfHumans = 2147483647;
    int garageWidth = 2;
    int acres = 100;
    char firstLetterOfLastName = 'S';
    char modelIdentifier = 'a';
    char assignedParkingLot = 'B';
    bool isMale = true;
    bool isRich = false;
    bool readyToGoCamping = 1; FIXME never use anything other than true or false to initialize boolean variables
    float bathrooms = 1.5f;
    float limbs = 4.f;
    float electricBill = 111.53f;
    double weightOfMyShoe = 0.734768784569;
    double existenceThreshold = 3E-5;
    double volumeOfMyCarInterior = 30.348;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(numberOfHumans, garageWidth, acres, firstLetterOfLastName, modelIdentifier, assignedParkingLot, isMale,isRich, readyToGoCamping, bathrooms, limbs, electricBill, weightOfMyShoe, existenceThreshold, volumeOfMyCarInterior);
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void getIceCream(int numberOfScoops = 2, bool wantsCone = true)
{
    ignoreUnused(numberOfScoops, wantsCone);
}
/*
 2)
 */
float doTheMath(double numerator, double denominator) FIXME see instruction #4)
{
    ignoreUnused(numerator, denominator);
    return {};
}
/*
 3)
 */
bool determineHappiness(bool hadCoffee, bool gotExercise) FIXME see instruction #4)
{
    ignoreUnused(hadCoffee, gotExercise);
    return{}; FIXME add a space between the keyword and what's being returned.
}
/*
 4)
 */
float getGarageWidth(int numberOfCars, int numberOfEmptyCarSpots, bool presenceOfGolfCart = false, float widthOfShopArea = 30.f)
{
    ignoreUnused(numberOfCars, numberOfEmptyCarSpots, presenceOfGolfCart, widthOfShopArea);
    return{}; FIXME add a space between the keyword and what's being returned.
}
/*
 5)
 */
void drinkMyTea(bool teaIsReady)
{
    ignoreUnused(teaIsReady);
}
/*
 6)
 */
void fillTheVoid(char purpose, bool hadCoffee) FIXME see instruction #4)
{
    ignoreUnused(purpose, hadCoffee);
}
/*
 7)
 */
float makeCoolSound(float sample, float awesomeVal) FIXME see instruction #4)
{
    ignoreUnused(sample, awesomeVal);
    return{}; FIXME add a space between the keyword and what's being returned.
}
/*
 8)
 */
float interpolate(float x_1, float x_2) FIXME see instruction #4)
{
    ignoreUnused(x_1, x_2);
    return{}; FIXME add a space between the keyword and what's being returned.
}
/*
 9)
 */
void makeCoffee(int waterGrams, int coffeeGrams) FIXME see instruction #4)
{
    ignoreUnused(waterGrams, coffeeGrams);
}
/*
 10)
 */
void moveIntoVan(bool workIsOnComputer, bool bagsArePacked, int monthsUntilLeaseEnds, int numberOfFamilyMembers = 3, int gallonsOfGasInTank = 20)
{
    ignoreUnused(workIsOnComputer, bagsArePacked, monthsUntilLeaseEnds, numberOfFamilyMembers, gallonsOfGasInTank);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    FIXME see instruction #5)
    //2)
    FIXME see instruction #5)
    //3)
    FIXME see instruction #5)
    //4)
    FIXME see instruction #5)
    //5)
    FIXME see instruction #5)
    //6)
    FIXME see instruction #5)
    //7)
    FIXME see instruction #5)
    //8)
    FIXME see instruction #5)
    //9)
    FIXME see instruction #5)
    //10)
    FIXME see instruction #5)
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
