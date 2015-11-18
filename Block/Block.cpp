#include "Block.h"

Block::Block(){

	pos = Vec2f(-300, 300);
	size = Vec2f(50, 50);
	number = 0;

}



void Block::NewText(){
	//テキストの作成
	
	////テスト。テキストがなかったら作成あったら開く
	//ofs.open("res/test.txt");
	////文字を入力                   　↓改行
	//ofs << "testmessage" << 123 << std::endl;
	////閉じる
	//ofs.close();

	//ofs.open("res/test.txt", std::ios::out | std::ios::app);
	//ofs << "追加で書き込みをしました\n";
	//ofs.close();


}

void Block::RoadText(){
	std::ifstream ifs;
	ifs = std::ifstream("res/test3.txt");

	int map_chip[5][10];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 10; j++){
			ifs >> map_chip[i][j];
		}
	}

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 10; j++){
			std::cout << map_chip[i][j];
		}
		std::cout << std::endl;
	}
}
void Block::Draw(int color, Vec2f user_pos){
	
	for (int i = 0; i < Y_Max; i++){
		for (int j = 0; j < X_Max; j++){
			if (Collision(pos, size, user_pos)){
				if (color != 0){
					drawFillBox(pos.x() + i, pos.y() + j, size.x(), size.y(), Color::white);
				}
			}
		}
	}

}

int Block::CheckNumber(){
	return number;
}

Vec2f Block::CheckPos(){
	return pos;
}

Vec2f Block::CheckSize(){
	return size;
}

Color Block::CheckColor(){
	return color;
}

void Block::SetNumber(int set){
	number = set;
}

void Block::SetPos(Vec2f set){
	pos = set;
}

void Block::SetColor(Color set){
	color = set;
}

void Block::AddSize(Vec2f set){
	Vec2f size_max(150, 150);
	if (size.x() < size_max.x()){
		
	}
	size += set;
}

void Block::SubSize(Vec2f set){
	Vec2f size_min(15, 15);
	if (size.x() > size_min.x()){
		
	}
	size -= set;
}

void Block::AddPos(Vec2f set){
	
	pos.x() -= set.x();
	pos.y() += set.y();
}

void Block::SubPos(Vec2f set){
	
	pos.x() += set.x();
	pos.y() -= set.y();
}

void Block::IncX(float set){
	pos.x() += set;
}

void Block::DecX(float set){
	pos.x() -= set;
}

void Block::IncY(float set){
	pos.y() += set;
}

void Block::DecY(float set){
	pos.y() -= set;
}
