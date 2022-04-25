// sfml base template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Basic Sfml renderwindow", sf::Style::None);
    window.setFramerateLimit(60);



    //window.clear //uncomment this to make clear screen, to stop screen from smudging 
    window.display();
}

