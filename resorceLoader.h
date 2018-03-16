#pragma once
class resorceLoader
{
public:
	resorceLoader();
	resorceLoader(std::string);
	~resorceLoader();

	std::string DATA_PATH;

	

	void init();

	void createRecorceList(std::string);

};

