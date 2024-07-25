#include<iostream>
#include<iomanip>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>

// Function to change Cursor Position..
void setCursorPosition(int x,int y){
    HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {static_cast<SHORT>(x),static_cast<SHORT>(y)};
    SetConsoleCursorPosition(hconsole,position);
}

// Change Console Color...
void setcolor(int color){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,color);
}

//Frame Section...
void clear_function_frame()
{
    int positionX=1;
    int positionY=10;
    for(int j=0;j<3;j++)
    {
        setCursorPosition(positionX,positionY++);
        for(int i=0;i<28;i++)
        {
            std::cout<<" ";
        }
    }
}

void clear_frame()
{
    int positionX=1;
    int positionY=1;
    for(int i=0;i<7;i++)
    {
        setCursorPosition(positionX,positionY++);
        for(int j=0;j<30;j++)
        {
            std::cout<<" ";
        }
    }
}

void horizontal_section(){
    std::cout<<"+";
    for(int i=0;i<30;i++)
    {
        std::cout<<"-";
    }
    std::cout<<"+\n";
}

void draw_frame()
{
    system("CLS");
    horizontal_section();
    for(int i=0; i<8; i++)
    {
        std::cout<<"|";
        for(int j=0;j<30;j++)
        {
            std::cout<<" ";
        } 
        std::cout<<"|\n";
    }
    horizontal_section();
    for(int i=0;i<3;i++)
    {
        std::cout<<"|";
        for(int j=0;j<30;j++)
        {
            std::cout<<" ";
        }
        std::cout<<"|\n";
    }
    horizontal_section();
}

//Calculator Functions...
int sum1()
{
    clear_function_frame();
    int positionX=2;
    int positionY=10;
    float a,b;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert A:";
    std::cin >> a;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert B:";
    std::cin >> b;
    setCursorPosition(positionX,positionY);
    std::cout << "Sum of two numbers is: " << a+b << std::endl << std::endl; 
    return 0;
} 

int sub1()
{
    clear_function_frame();
    int positionX=2;
    int positionY=10;
    int a,b;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert A:";
    std::cin >> a;
    setCursorPosition(positionX,positionY++);

    std::cout << "Insert B:";
    std::cin >> b;
    setCursorPosition(positionX,positionY);
    std::cout << "Your Answer is: " << a-b << std::endl << std::endl;
    return 0;
}

int ml1()
{
    clear_function_frame();
    int positionX=2;
    int positionY=10;
    int a,b;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert A:";
    std::cin >> a;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert B:";
    std::cin >> b;
    setCursorPosition(positionX,positionY);
    std::cout << "Your answer is: " << a*b << std::endl << std::endl; 
    return 0;
}

int div1()
{
    clear_function_frame();
    int positionX=2;
    int positionY=10;
    float a,b;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert A:";
    std::cin >> a;
    setCursorPosition(positionX,positionY++);
    std::cout << "Insert B:";
    std::cin >> b;
    setCursorPosition(positionX,positionY);
    std::cout << "your answer is: " << a/b << std::endl << std::endl;
    return 0;

}

int main()
{
    system("CLS");
    draw_frame();
    int task_number;
    do
    {
        int positionY=1;
        int positionX=2;
        setcolor(14);
        setCursorPosition(positionX,positionY++);
        std::cout << "Here is what you can do\n";
        setCursorPosition(positionX,positionY++);
        std::cout << "For Sum press 1" << std::endl;    
        setCursorPosition(positionX,positionY++);
        std::cout << "For Subtraction press 2" << std::endl;
        setCursorPosition(positionX,positionY++);    
        std::cout << "For Multiplication press 3" << std::endl;
        setCursorPosition(positionX,positionY++);    
        std::cout << "For Division press 4" << std::endl; 
        setCursorPosition(positionX,positionY++);
        std::cout << "Exit 5" << std::endl;
        setCursorPosition(positionX,positionY++); 
        std::cout << "Please select task number: ";
        std::cin >> task_number;
        switch(task_number)
        {
            case 1: sum1(); break;
            case 2: sub1(); break;
            case 3: ml1(); break;
            case 4: div1(); break;
            case 5: {clear_frame(); setCursorPosition(11,5); std::cout << "Thankyou!" ; Sleep(2000); break;}    
            default: {clear_function_frame(); setCursorPosition(7,11); std::cout << "Incorrect Choice!"; Sleep(2000); clear_function_frame(); break;}
        }
        clear_frame();
    }
    while(task_number!=5);
    system("CLS");
    return 0;
}
