#include "User.h"

User::User(){
	pos = Vec2f::Zero();
	number = 0;
}

void User::Update(){
	pos = env.mousePosition();
}
int User::NumberReturn(){
	return number;
	
}




Vec2f User::CheckPos(){
	return pos;
}

void User::SetNumber(int set){
	number = set;
}