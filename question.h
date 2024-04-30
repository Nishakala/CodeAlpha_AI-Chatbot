#include <string>
#ifndef QUESTION_H
#define QUESTION_H

// Your class definition for question goes here

#endif // QUESTION_H

class question
{
public:
	question();
	question(std::string question, std::string answer);
	std::string m_getQuery();
	std::string m_getAnswer();
	~question();

private:
	std::string query;
	std::string answer;

};