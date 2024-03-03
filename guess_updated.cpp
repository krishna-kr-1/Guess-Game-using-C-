#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void update_record(std::vector<int> arr)
{
    int best_record;
    std::ifstream input("Record.txt");
    if(!input.is_open())
    {
        std::cout << "Unable to Update records " << std::endl;
        return;
    }
    input >> best_record;
    std::ofstream output("Record.txt");
    if(!output.is_open())
    {
        std::cout << "Unable to Update records " << std::endl;
        return;
    }
    if(arr.size() < best_record)
    {
        std::cout << "Hey You made a new record ! \n";
        output << arr.size();
    }
    else
    {
        output << best_record;
    }
}

void print_vector(std::vector<int> arr)
{
   std::cout << "You won at "<< arr.size() << "th attempts" << std::endl;
    std::cout << "Your Guesses are " << std::endl;
    for(int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\t';
    }           
    std::cout << std::endl;

    update_record(arr);
}

void play_game()
{
    int random = rand() % 251;
    std::cout << random << std::endl;
    int guess;
    std::vector<int> arr;
    while (true)
    {
        std::cout << "Guess the number " << std::endl;
        std::cin >> guess;
        arr.push_back(guess);
        if(guess == random)
        {
            print_vector(arr);
            

            break;
        }
        else if (guess < random)
        {
            std::cout << "Too Low\n";
        }
        else
        {
            std::cout << "Too High" << std::endl;
        }
        
    }
    
}

int main()
{ 
    srand(time(NULL));
    int guess;
    int id = 0;
    std::ofstream file("Record.txt");
    file << 9999;
    file.close();
    do
    {
        std::cout << "0.Quit" << std::endl << "1.Play" << std::endl;
        std::cin  >> guess;
        switch(guess)
            {
                case 0:
                    std::cout << "Thanks for nothing \n";
                    return 0;
                
                case 1:
                    play_game();
                    break;
            }
    }while(guess != 0);
    
}