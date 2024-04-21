#include <iostream>
#include <windows.h>

int main(){
    
    //doboz meretei
    int height = 15;
    int width = 35;

    //karakterek 
    char wallchar = '#';
    char object = '0';

    //objektum kezdohelye es sebessege
    int Ycoord = (width - 1) / 2;
    int Xcoord = (height - 1)/ 2;
    int Yspeed = 1;
    int Xspeed = 1;

    while(true){

    //output torlese
    system("cls");


    //objektum mozgatasa
    
    Ycoord = Ycoord + Yspeed;
    Xcoord = Xcoord + Xspeed;

    //utkozesek erzekelese

    if(Ycoord == 0 || Ycoord == width - 2)
    {
        Yspeed = Yspeed * -1;
    }

    if(Xcoord == 0 || Xcoord == height - 1)
    {
        Xspeed = Xspeed * -1;
    }

    //doboz es objektum kiiras

    for(int i = 0; i <= width; i++)
    {
        std::cout << wallchar;
    }
    std::cout << std::endl;

    for(int i = 0; i < height; i++)
    {
        std::cout << wallchar;
        for(int j = 0; j < width - 1; j++){
            if(Ycoord == j && Xcoord == i)
            {
                std::cout << object;
            } 
            else{
            std::cout << " ";
            }
        }
        std::cout << wallchar;
        std::cout << std::endl;
    }

    for(int i = 0; i <= width; i++)
    {
        std::cout << wallchar;
    }

    Sleep(30);
    }
}