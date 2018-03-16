#pragma once
#include "Object.h"
namespace Mizuha {
	class Scene :
		public Object
	{
	public:
		Scene();
		~Scene();

		std::vector<Object*> ChildObjects;

		void appendChild(Object);
	};
}