#include<iostream>
#include"CreateGameObject.hh"  

void CheckArguments(int& argc, char**& argv);

int main(int argc, char**& argv)
{
    CheckArguments(argc,argv);
    return 0;
}

void CheckArguments(int argc. char**& argv)
{
    std::string command{argv[1]};
    switch (argc)
    {
    case 3
    std::cout << command;
    if(command == ("creategameobject"))
    {
        std::cout << "creating game object";
    }
        break;
    
    default:
        break;
    }
}