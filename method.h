double RootFindingMethod(string equation, int x, int iterations)
{
    if(x == 0)
    {
        return Bisection(equation, iterations);
    }
    else if(x == 1)
    {
        return FalsePosition(equation, iterations);
    }
    else if(x == 2)
    {
    }
    else if(x == 3)
    {
    }
    else
    {
    }
}
