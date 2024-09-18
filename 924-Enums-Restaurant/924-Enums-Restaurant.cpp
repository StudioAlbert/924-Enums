// 924-Enums-Restaurant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Restaurant.h"

int main()
{
    std::cout << "Welcome to a fabulous restaurant !!!!" << '\n';

    Dish player_a_dish;
    Dessert player_a_dessert = Dessert::kPie;
    char choice;
    int choice_int;

    std::cout << "Pick a dish : " << '\n';
    std::cin >> choice;

    if (choice == (char)Dish::kPizza || choice == (char)Dish::kSalad || choice == (char)Dish::kBurger) {
        player_a_dish = (Dish)choice;

        std::cout << (char)player_a_dish << '\n';

    }
	else
    {
        std::cout << "no dish available" << '\n';
    }

    std::cout << "Pick a dessert\n";
    std::cout << "0 : Pie\n";
    std::cout << "1 : Sundae\n";
    std::cin >> choice_int;

    if(choice_int == 0 || choice_int == 1)
    {
	    // Good choice !!
        if(choice_int == 0)
        {
            player_a_dessert = Dessert::kPie;
        }else if(choice_int == 1)
        {
            player_a_dessert = Dessert::kSundae;
        }
        
        std::cout << DescriptionDessert(player_a_dessert) << '\n';

    }else
    {
        std::cout << "no dessert available" << '\n';
    }



    //switch (choice)
    //{
    //case 'p':
    //    player_a_dish = Dish::kPizza;
    //    break;
    //case 's':
    //    player_a_dish = Dish::kSalad;
    //    break;
    //default:
    //    std::cout << "no dish available" << std::endl;
    //    break;
    //}


    

}
