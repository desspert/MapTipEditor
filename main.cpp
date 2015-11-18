#include <iostream>
#include <fstream>
#include <string>
#include "../Instruction.hpp"
#include "../Collision.h"
int main()
{
	env;

	Instruction ins;
	
	
	while (env.isOpen()){
		ins.Update();
		env.begin();
		ins.Draw();

		env.end();
	}


	
	return 0;
}