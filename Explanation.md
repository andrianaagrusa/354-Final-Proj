explanation

## History:

C++ was invented in 1979 as a step up from C. It was invented to support object-oriented programming.

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

		```
		class Game {

		public:

    		Game(){}

    		void play();
			
			void play_version2();

		};
		```
