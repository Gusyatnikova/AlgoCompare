#pragma once
template <class ArrType>
class SortAlgotithm
{
public:
	SortAlgotithm();
	virtual void sort() = 0;
	virtual void set_sortType(bool);
	virtual ~SortAlgotithm();
	//TODO calcDifficulty() ?
private:
	// 0 = Increment, 1 = decrement
	bool sort_type;

};

