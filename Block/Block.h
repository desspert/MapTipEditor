#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "../../Collision.h"
enum {
	X_Max = 11,
	Y_Max = 12
};

class Block{
	Vec2f pos;
	Vec2f size;
	int number;
	Color color;
public:
	Block();
	void SetNumber(int set);
	void SetPos(Vec2f set);
	void SetColor(Color set);
	//ägëÂèkè¨
	void AddSize(Vec2f set);
	void SubSize(Vec2f set);
	void AddPos(Vec2f set);
	void SubPos(Vec2f set);

	//ç¿ïWà⁄ìÆ
	void IncX(float set);
	void DecX(float set);
	void IncY(float set);
	void DecY(float set);

	int CheckNumber();
	Vec2f CheckPos();
	Vec2f CheckSize();
	Color CheckColor();
	void NewText();
	void EditText();
	void RoadText();
	void Draw(int color,Vec2f user_pos);
};