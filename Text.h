#pragma once

using namespace std;
class Text : public Unit
{
public:
	Text();
	~Text();
	
	string str;

	void Draw() override;
};