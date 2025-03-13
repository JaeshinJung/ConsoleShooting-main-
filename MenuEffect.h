#pragma once

class MenuEffect : public Effect
{
public:
	MenuEffect();
	~MenuEffect();


	void Draw() override;
	void MDraw();
	void EDraw();
	void NDraw();
	void UDraw();

	void Update() override;

};
