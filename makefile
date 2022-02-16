main: main.cpp ball.cpp bat.cpp
	g++ -Wall main.cpp ball.cpp bat.cpp -o main -lsfml-graphics -lsfml-window -lsfml-system
