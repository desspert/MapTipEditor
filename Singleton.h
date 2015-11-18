#pragma once
#include "lib\framework.hpp"

#define WIDTH (1000)
#define HEIGHT (1000)

#define env APP::Get()

class APP{
public:
	static AppEnv& Get(){
		static AppEnv Env(WIDTH, HEIGHT, false, true);
		return Env;
	}
};