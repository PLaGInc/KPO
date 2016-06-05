#pragma once

class CircleFactory
{
public:
public:
	shared_ptr<Figure> CreateBody(vector<Parser::ShapeParams> points) const;
	static CircleFactory* GetInstance();
	static void DestroyInstance();

private:
	static CircleFactory *inst;
};

