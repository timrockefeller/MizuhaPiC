#include "stdafx.h"
#include "Vector2.h"
using namespace Mizuha;

Vector2 Vector2::left() { return Vector2(-1, 0); }
Vector2 Vector2::up() { return Vector2(0, -1); }
Vector2 Vector2::right() { return Vector2(1, 0); }
Vector2 Vector2::down() { return Vector2(0, 1); }

Vector2::Vector2()
{
	this->x = 0;
	this->y = 0;
}

Vector2::Vector2(float _x, float _y) {
	this->x = _x;
	this->y = _y;
}

Vector2::Vector2(Object from, Object forward)
{ 
	this->x = forward.getX() - from.getX();
	this->y = forward.getY() - from.getY();
}

Vector2::~Vector2()
{
}

Vector2 Mizuha::Vector2::normalized()
{
	return Vector2(this->x/this->magnitude(),this->y/this->magnitude());
}

float Mizuha::Vector2::magnitude()
{
	return sqrt(this->sqrMagnitude());
}

float Mizuha::Vector2::sqrMagnitude()
{
	return this->x * this->x + this->y *this->y;
}

float Mizuha::Vector2::Dot(Vector2 & s)
{
	return this->x * s.x + this->y * s.y;
}

float Mizuha::Vector2::Project(Vector2 &s)
{
	return this->Dot(s)/s.magnitude();
}

float Mizuha::Vector2::Angle(Vector2 &s)
{
	if (abs(this->Dot(s) / this->magnitude() / s.magnitude()) <= 1)
		return acos(this->Dot(s) / this->magnitude() / s.magnitude());
	return 0.f;
}

float Mizuha::Vector2::Distance(const Vector2 &s)
{
	return sqrt((this->x-s.x)*(this->x - s.x)+ (this->y - s.y)*(this->y - s.y));
}

Vector2 Mizuha::Vector2::operator-(const Vector2&s)
{
	return Vector2(this->x - s.x,this->y - s.y);
}

Vector2 Mizuha::Vector2::operator+(const Vector2 & s)
{
	return Vector2(this->x + s.x, this->y + s.y);
}

Vector2 Mizuha::Vector2::operator*(float s)
{
	return Vector2(this->x * s, this->y * s);
}

Vector2 Mizuha::Vector2::operator/(float s)
{
	return Vector2(this->x / s, this->y / s);
}

bool Mizuha::Vector2::operator==(const Vector2 & s)
{
	if (this->x == s.x && this->y == s.y) return true;
	return false;
}

bool Mizuha::Vector2::operator!=(const Vector2 & s)
{
	if (this->x != s.x || this->y != s.y) return true;
	return false;
}
