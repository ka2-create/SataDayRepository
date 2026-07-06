#pragma once
class Map
{
private:
	//The position of the
	float worldX;
	float worldY;
public:
	//コンストラクタ
	Map(float worldX, float worldY);
	//描画
	void Draw(float cameraX);
};

