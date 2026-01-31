#include <iostream> 
#include "CBook.hpp"
#pragma once

using namespace std;

CBook::CBook(string title, string author)
{
	mTitle = title; 
	mAuthor = author;
}

void CBook::SetDetails(string title, string author)
{
	mTitle = title;
	mAuthor = author;
}

void CBook::GetDetails(string& title, string& author)
{
	title = mTitle;
	author = mAuthor;
}
