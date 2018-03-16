#pragma once
namespace Mizuha {
	class Object
	{
	protected:
		//position X
		float x;
		//position Y
		float y;
		//size.width
		float w;
		//size.height
		float h;
		//index
		int z_index;
	public:
		Object();
		~Object();

		std::vector<std::string> mess;

		void loadMassByVString(std::vector<std::string>);


		float getX() { return x; }
		float getY() { return y; }
		float getW() { return w; }
		float getH() { return w; }
	};
}