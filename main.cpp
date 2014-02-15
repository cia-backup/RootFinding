#include "instructions.h"
#include "equationreader.h"
#include "erasespaces.h"
#include "bisection.h"
#include "falsePosition.h"
#include "method.h"


int main(int argc, char *argv[])
{
    string equation;
    double variable;
    bool unknown = false;
    double answer;
    int rootFindingMethod = 0;
    int maxIterations = 20;
    
    //input equation and never let user input blank or empty string
    do
    {
        cout << "Input Equation:\n\n\ty = ";
        getline(cin, equation);
        //erase spaces in equation
        equation = eraseSpaces(equation);
    }while(equation.length() == 0);
    
    //check if there is x
    for(int x = 0; x <= equation.length() - 1; x++)
    {
        if(equation[x] == 'x')
        {
            unknown = true;
        }
        else
        {
        }    
    }
    
    if(unknown)
    {
        variable = RootFindingMethod(equation, rootFindingMethod, maxIterations);
    }
    else
    {
        cout << "No variables/unknowns, y is constant." << endl; 
    }
    
    answer = ReadEquation(equation, 0, equation.length() - 1, variable);
    cout << "\ty = " << answer << endl;
    cout.precision(11);
    cout << "\tx = " << variable << endl;
    //END OF PROGRAM
    Pause();
    return EXIT_SUCCESS;
}
