#pragma once

namespace Mizuha {
	enum RenderType {
		RT_default,
		RT_reverse//·´É«£¿·­×ª£¿
	};
	class Color {
	public:
		Color() { r = g = b = 0; }
		Color(int _r, int _g, int _b) { (r, g, b) = (_r, _g, _b); }
		int r,g,b;
	};
	class Mass {

	public:
		Mass();
		
		~Mass();
		std::string name;
		int id;
		std::vector<std::vector<Pixe>> al;
		
		RenderType rendertype = RT_default;
	};


	class Pixe
	{
	public:
		Pixe();
		Pixe(std::string, bool);
		~Pixe();
		std::string inner;
		Color textColor;
		Color bgColor;
		bool opacity = true;
		

	};
}