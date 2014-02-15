string eraseSpaces(string example)
{
    for(int x = 0; x <= example.length() - 1; x++)
    {
        if(example[x] == ' ')
        {
            example.erase(x, 1);
            x = x - 1;
        }
        else
        {
            //do nothing
        }
        
        if(example.length() == 0)
        {
            break;
        }
        else
        {
        }
    }
    return example;
}
