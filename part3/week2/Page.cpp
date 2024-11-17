#include "Page.h"

void Page::init()
{
	status = "";
	posts = "";
}
std::string Page::getPosts() const
{
	return posts;
}
std::string Page::getStatus() const
{
	return status;
}
void Page::clearPage()
{
	status = "";
	posts = "";
}
void Page::setStatus(std::string Status)
{
	status = Status;
}
void Page::addLineToPost(std::string newLine)
{
	posts += newLine + "\n";
}