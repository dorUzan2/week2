#pragma once
#include <string>

class Page
{
	private:
		std::string status;
		std::string posts;

	public:
		//getters
		std::string getPosts() const;
		std::string getStatus() const;

		//setters
		void init();
		void clearPage();
		void setStatus(std::string status);
		void addLineToPost(std::string newLine);
};