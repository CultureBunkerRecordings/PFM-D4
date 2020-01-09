#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int 
 char
 bool
 float 
 double
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    char character = 'a';
    bool lieDetector = true;
    float time = 12.00f;
    double tiny = 0.0000001;
    
    ignoreUnused(number, character, lieDetector, time, tiny); //passing each variable declared to the ignoreUnused() function
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

int calculate(int num1, int num2 = 8){
  ignoreUnused(num1, num2);
  return {};
}

/*
 2)
 */
float whatsTheTime(int hours, int mins, int secs = 0){
  ignoreUnused(hours, mins, secs);
  return {};
}
/*
 3)
 */
char whichLetterFirst(char char1, char char2){
  ignoreUnused(char1, char2);
  return {};
}

/*
 4)
 */

double scientific(float num, int pow = 64){
  ignoreUnused(num, pow);
  return {};
}

/*
 5)
 */

void message(char letter, int space){
  ignoreUnused(letter, space);
}
/*
 6)
 */

bool isItTrue(double precise, float accurate, int limited){

  ignoreUnused(precise, accurate, limited);
  return {};
}
/*
 7)
 */

void nothingToReturn(char yes, char no){

  ignoreUnused(yes, no);
}
/*
 8)
 */

int oneTimesOne(int numb1, int numb2){
  ignoreUnused(numb1, numb2);
  return {};
}
/*
 9)
 */

double howAccurate(bool very, bool isNot){
  ignoreUnused(very, isNot);
  return {};
}
/*
 10)
 */

bool finallyGotThere(char happy = 'y'){
  ignoreUnused(happy);
  return {};
}
int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    calculate(2, 20);
    //2)
    whatsTheTime(12, 30);
    //3)
    whichLetterFirst('a', 'b');
    //4)
    scientific(2.00f);
    //5)
    message('t', 2);
    //6)
    isItTrue(8.0000123, 4.000345f, 123);
    //7)
    nothingToReturn('y', 'n');
    //8)
    oneTimesOne(78, 1);
    //9)
    howAccurate(true, false);
    //10)
    finallyGotThere();

    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
