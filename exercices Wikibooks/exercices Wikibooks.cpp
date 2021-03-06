// exercices Wikibooks.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <utility> // for swap

void prelude(const std::string s)
{
	std::cout << s << std::endl;
}

int average(std::vector<int> vec)
{
	int sum{ 0 };
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		sum += *it;
	}
	return sum;
}

int main()
{
	signed short int numero_exo{ 0 };
	std::cout << "Give the Number of the Exercice" << std::endl;
	std::cin >> numero_exo;
	switch (numero_exo)
	{
		//hello world
	case 1: prelude("print Hello World");
		std::cout << "hello world" << std::endl;
		break;
		// exo 2 
	case 2: {
		prelude("compute Area and Perimeter");
		std::cout << "please enter the length and width of a field" << std::endl;
		double longueur, largeur{ 0 };
		std::cin >> longueur >> largeur;
		std::cout << "the Area is: " << longueur * largeur << std::endl;
		std::cout << "the perimeter is: " << (longueur + largeur) * 2 << std::endl;
		break; 
	}
		// exos 3 

	case 3: {
		prelude("compute Average Case");
		int num{ 0 };
		std::vector<int> vec;
		for (int i{ 0 }; i < 5; ++i)
		{
			std::cin >> num;
			vec.push_back(num);
		}
		std::cout << average(vec) << std::endl;
		break;
	}
			
	case 4: {
		prelude("swap two integers");
		int x, y{ 0 };
		std::cout << "Give two integers" << std::endl;
		std::cin >> x >> y;
		std::cout << "x: " << x << "y: " << y << std::endl;
		std::swap(x, y);
		std::cout << "x: " << x << "y: " << y << std::endl;
		break; 
	}
	default: break;
	}
	return 0;
}

