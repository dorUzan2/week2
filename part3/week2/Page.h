#pragma once
#include <string>

class Page
{
	private:
		std::string status;
		std::string posts;

	public:
		void init();
		std::string getPosts() const;
		std::string getStatus() const;
		void clearPage();
		void setStatus(std::string status);
		void addLineToPost(std::string newLine);
};