#include "CBookSeries.hpp"

CBookSeries::CBookSeries(string mTitle ,string mAuthor ,  string series, string editor) 
																: CBook(mTitle, mAuthor)
{
	mSeriesTitle = series; 
	mSeriesEditor = editor;

}

void CBookSeries::GetSeriesDetails(string& series, string& editor)
{
	series = mSeriesTitle; 
	editor = mSeriesEditor;


}
