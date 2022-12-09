This document will outline the history of C++ and why it is valuable in the Game Development industry.

## History:

C++ was invented in 1979 as a step up from C. It was developed to support object-oriented programming.
It is now the most popular language used in the Game Development industry. Some major game engines that utilize C++ scripting are:
+ Unreal Engine
+ Unity
+ Godot
+ 4A Engine

C++ is used to develop games over various platforms such as iOS, Windows, Mac, Linux, and Android.

## Why is C++ Good For Game Development?
### Object-Oriented Programming
Object-oriented programming is ideal for game development for three main reasons:
1. It creates reusable code.
2. It is intuitive for the developer. You can translate real-world objects and interactions into code by definition. 
3. It’s key features, which are:
	+ Cohesion - Every element, whether it’s a variable, function, or class, should only be responsible for one task.
		 
		For example, our main function,
		```cpp
		int main() {

    	Game g;

    	g.play();
    
		}
		```
		is only responsible for running the `play()` function. 		This way, we do not clutter up our `main` function with 		definitions, especially if we are calling more than 		one.

	+ Encapsulation - Combining similar data and functions into one class. For example, how we wrote our `play()` function in the `Game` class:

		```cpp
		class Game {

		public:

    		Game(){}

    		void play();

		};
		```

		Let’s say we want to add another version of `play()` 		where a 2nd player chooses the number instead of the 		CPU. We would encapsulate this function as part of the 		`Game` class as well. 

		```cpp
		class Game {

		public:

    		Game(){}

    		void play();
			
			void play_version2();

		};
		```
		Encapsulation also prevents the ripple effect of 		editing code; you can make a change to every instance 		of a variable in one place instead of multiple times if 		it were to be defined repetatively.

	+ Access modifiers - Public, private, or protected. These specify where each item can be accessed throughout the program. This is useful in games where variables are updated under different circumstances. 
	+ Abstraction - Provides only the necessary information about data and hides background details. It helps make your code clean and concise. 
	+ Inheritance - Extending existing classes and producing hierarchical relationships between Parent and Child classes.
		
		For example, if we want to make multiple games, but 		have them all have properties of the `Game` object. We 		can make our game into its own class called 			`GuessNumber` which would be a child of `Game`. Here is 		what that would look like:
		
		```cpp
		// Parent class

		Class Game {
		
		public:
			
			Game(){}
			
			...
		};
		```
		```cpp
		// Child class
		
		Class GuessNumber : public Game {
		
		public:
			
			GuessNumber(){}
			
			...
		};
		```
### Speed and Performance
C++ has exceptional runtime and performance rates compared to other popular game programming languages like Java, Python, and C#. 

C++ maintains high performance because it compiles down to machine code, so it does not require translation like other languages.

On a generic Binary-Trees program, the runtime for these gaming languages are as follows:
+ C++ : 1,129 ms
+ Java : 3,306 ms
+ C# : 10,797 ms
+ Python : 45,003 ms

C++ also has good memory management, control and flexibility, and handles smooth real-time animation well, which is very desirable when developing games.

### C++ Libraries
C++ has a wide range of libraries that game developers can use to enhance and strengthen their programs. To explore the many libraries, please click [here](https://github.com/raizam/gamedev_libraries).

#### Sources:
> [Why Was C++ Created?](https://www.geeksforgeeks.org/why-was-c-created/)

> [Difference Between C and C++](https://www.naukri.com/learning/articles/difference-between-c-and-cpp-programming-languages/) 

> [Object Oriented Programming in Game Development](https://varad-kajarekar19.medium.com/object-oriented-programming-in-game-development-1293e6ebed45)

> [Why Are Most Games Coded in C++?](https://www.analyticsinsight.net/why-are-most-games-coded-in-c/#:~:text=C%2B%2B%20is%20a%20compiled%20language,to%20build%20high%2Dperforming%20games)

> [Why You Should Learn C++ For Game Development](https://www.educative.io/blog/cpp-game-development)