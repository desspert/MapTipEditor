#include "../Singleton.h"


class User{
private:
	
	Vec2f pos;
	int number;
	
public:
	User();
	void Update();
	int NumberReturn();
	Vec2f CheckPos();
	void SetNumber(int set);
};