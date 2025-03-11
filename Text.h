#pragma once

using namespace std;
class Text : public Unit
{
public:
	Text();
	~Text();
	
	string str;
	stringstream ss;

	void Draw() override;
	void Update() override;
};