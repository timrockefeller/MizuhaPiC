#include "stdafx.h"
#include "resorceLoader.h"


resorceLoader::resorceLoader()
{
}

resorceLoader::resorceLoader(std::string datapath)
{
	this->DATA_PATH = datapath;
}


resorceLoader::~resorceLoader()
{
}

void resorceLoader::init()
{
	std::ifstream i;
	i.open(this->DATA_PATH);
	std::string b;
	if (i.is_open()) {
		std::vector<std::string> buffer;
		while (i.good() && !i.eof()) {
			std::getline(i, b);
			//parse std color or text		
			buffer.push_back(b);
		}
	}

}
