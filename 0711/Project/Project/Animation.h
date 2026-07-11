#pragma once
class Animation
{
private:
	//bunnkatugazou
	int* images;
	//kaisifureemu
	int startFrame;
	//saiseifureemusuu
	int frameCount;
	//saiseisokudo
	int speed;
	//saiseikaisijikann
	int startTime;
public:
	//konnsutorakuta
	Animation();
	//gazousettei
	void SetImage(int* img);
	//animationsaisei
	void Play(int startFrame, int frameCount, int speed);
	//gennzainogazousyutoku
	int GetImage(int currentTime);
};