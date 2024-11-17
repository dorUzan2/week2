#include "Profile.h"

void Profile::init(User Owner)
{
	this->owner = Owner;
	this->userPage.init();
	this->friends.init();
}
void Profile::clear()
{
	friends.clear();
	userPage.clearPage();
}
User Profile::getOwner() const
{
	return owner;
}
void Profile::setStatus(std::string new_status)
{
	userPage.setStatus(new_status);
}
void Profile::addPostToProfilePage(std::string post)
{
	userPage.addLineToPost(post);
}
void Profile::addFriend(User friend_to_add)
{
	friends.add(friend_to_add);
}
std::string Profile::getPage() const
{
	return "Status: " + userPage.getStatus() + "\n*******************\n*******************\n" + userPage.getPosts();
}
std::string Profile::getFriends() const
{
	std::string result = "";
	UserNode* curr = friends.get_first();
	while (curr)
	{
		result += curr->get_data().getUserName() + ",";
		curr = curr->get_next();
	}
	if (!result.empty()) {
		result.erase(result.size() - 1); 
	}
	return result;
}
std::string Profile::getFriendsWithSameNameLength() const
{
	int nameLen = owner.getUserName().length();	
	std::string result = "";
	UserNode* curr = friends.get_first();
	while (curr)
	{
		if (curr->get_data().getUserName().length() == nameLen)
		{
			result += curr->get_data().getUserName() + ",";
		}
		curr = curr->get_next();
	}
	if (!result.empty()) {
		result.erase(result.size() - 1);
	}
	return result;
}