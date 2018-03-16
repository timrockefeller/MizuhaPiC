#include "stdafx.h"
#include "Object.h"
using namespace Mizuha;

Object::Object()
{
}


Object::~Object()
{
}

void Mizuha::Object::loadMassByVString(std::vector<std::string> r)
{
	this->mess.clear();
	int _w = 0, _h = 0;
	for (std::string s : r) 
	{
		this->mess.push_back(s);
		if (_w < s.size())_w = s.size();
		_h++;
	}
	this->h = _h;
	this->w = _w;
}
