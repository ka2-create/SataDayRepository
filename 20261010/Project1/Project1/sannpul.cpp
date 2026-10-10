#include<iostream>
using namespace std;

class Player
{
public:
	int hp = 100;
	//プレイヤーにダメージを与える関数
	void Damage()
	{
		hp -= 10;

	}
};

class Enemy
{
public:
	Player ply
};
int main()
{
	//plyerのオブジェクトをインスタンス化
	Player player;

	//playerのオブジェクトをアドレスをポインタに保存
	Player*pPlayer = &player;

	//ポインタwpを使いDamege関数をよびだすことができる
	pPlayer->Damage();

	return 0;
}
