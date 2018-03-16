#pragma once
namespace Mizuha {
	/// use for postion render & motivatioin
	class Vector2
	{
	private:

	public:

		float x;
		float y;

		Vector2 static left();
		Vector2 static up();
		Vector2 static right();
		Vector2 static down();

		Vector2();
		Vector2(float, float);
		Vector2(Object, Object);


		~Vector2();

		Vector2 normalized();//同向单位向量
		float  magnitude();//长度
		float sqrMagnitude();//长度的平方

		//Vector2 Cross(const Vector2&);//叉乘
		float Dot(Vector2&);//点乘
		float Project(Vector2&);//投影
		float Angle(Vector2&);//夹角
		float Distance(const Vector2&);//距离

		Vector2 operator-(const Vector2&);//向量相减
		Vector2 operator+(const Vector2&);//向量相加
		Vector2 operator*(float);//乘上参数
		Vector2 operator/(float);//除掉参数
		bool operator==(const Vector2&);//是否等价
		bool operator!=(const Vector2&);//否是等价

	};

}