#include "olcPixelGameEngine.h"

class Arkanoid : public olc::PixelGameEngine
{
public:
    Arkanoid();
    ~Arkanoid() = default;

    bool OnUserCreate() override;
    bool OnUserUpdate(float fElapsedTime) override;

private:
	float fBatPos = 20.0f;
	float fBatWidth = 40.0f;
	float fBatSpeed = 25.0f;

	olc::vf2d vBallPos = { 0.0f, 0.0f };
	olc::vf2d vBallDir = { 0.0f, 0.0f };
	float fBallSpeed = 20.0f;	
	float fBallRadius = 5.0f;

	olc::vi2d vBlockSize = { 16,16 };
	std::unique_ptr<int[]> blocks;

	std::unique_ptr<olc::Sprite> sprTile;
	std::unique_ptr<olc::Sprite> sprFragment;
	std::unique_ptr<olc::Decal> decFragment;


	struct sFragment
	{
		olc::vf2d pos;
		olc::vf2d vel;
		float fAngle;
		float fTime;
		olc::Pixel colour;
	};

	std::list<sFragment> listFragments;
};
