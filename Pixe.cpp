#include "stdafx.h"
#include "mass.h"

namespace Mizuha {
	Pixe::Pixe()
	{
	}

	Pixe::Pixe(std::string _inner, bool _opacity)
	{
		this->inner = _inner;
		this->opacity = _opacity;
	}


	Pixe::~Pixe()
	{
	}
}