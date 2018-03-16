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

		Vector2 normalized();//ͬ��λ����
		float  magnitude();//����
		float sqrMagnitude();//���ȵ�ƽ��

		//Vector2 Cross(const Vector2&);//���
		float Dot(Vector2&);//���
		float Project(Vector2&);//ͶӰ
		float Angle(Vector2&);//�н�
		float Distance(const Vector2&);//����

		Vector2 operator-(const Vector2&);//�������
		Vector2 operator+(const Vector2&);//�������
		Vector2 operator*(float);//���ϲ���
		Vector2 operator/(float);//��������
		bool operator==(const Vector2&);//�Ƿ�ȼ�
		bool operator!=(const Vector2&);//���ǵȼ�

	};

}