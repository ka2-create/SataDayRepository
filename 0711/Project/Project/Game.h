#pragma once

#include <vector>

#include "Camera.h"
#include "Background.h"
#include "Map.h"

class Game
{
private:

	//fure-mumanager
	FrameManager frameManager;
	//animation
	Animation animations;
	//bunnkatugazou
	int images[Config::PLAYER_TOTAL_FRAMES];
	//gennzainoanimation
	AnimationType currentAnim;
	//zennkainosupe-suki-nojoutai
	bool oldSpace;
	//animationnkirikae
	void PlayerAnimation(AnimationType type);
public:
	//syokika
	void Init();
	//kousinn
	void Update();
	//byouga
	void Draw();

};