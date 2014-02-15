double Bisection(string number, int maxIterations)
{
    double variable1, variable2, variable3;
    double answer1, answer2, previousAnswer3;
    double answer3 = 1;
    int valid = 0;
    int iterations = 0;
    
    while(valid == 0)
    {
        cout << "Lowerbound x: ";
        cin >> variable1;
        
        answer1 = ReadEquation(number, 0, number.length() - 1, variable1);
        cout << answer1 << endl;
        
        cout << "Upperbound x: ";
        cin >> variable2;
        
        answer2 = ReadEquation(number, 0, number.length() - 1, variable2);
        cout << answer2 << endl;
        
        if((answer1*answer2)< 0)
        {
            valid = 1;
        }
        else if(answer1 == 0)
        {
            return variable1;
        }
        else if(answer2 == 0)
        {
            return variable2;
        }    
        else
        {
            valid = 0;
            cout << "Not valid lowerbound and upperbound.\n";
        }
    }
    
    while(answer3 != 0)
    {
        variable3 = (variable1 + variable2)/2;
        answer3 = ReadEquation(number, 0, number.length() - 1, variable3);
        iterations++;
        /*if( ( (answer3 - previousAnswer3) >= -1*pow(10,-10) ) && ( (answer3 - previousAnswer3) <= 1*pow(10,-10) ) && (iterations >= 1000000))
        {
            return variable3;
        }
        else */if(iterations == maxIterations)
        {
            answer3 = 0;
        }
        else
        {
        }
        
        previousAnswer3 = answer3;
        
        if(answer3 == 0)
        {    
            return variable3;
        }
        else if((answer1*answer3) < 0)
        {
            variable2 = variable3;
        }
        else if((answer3*answer2) < 0)
        {
            variable1 = variable3;
        }
        else
        {
        }
    }
}
