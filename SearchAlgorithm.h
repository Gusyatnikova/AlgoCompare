#pragma once

template <class ArrType, class ElemType>
class SearchAlgorithm
{
public:
	SearchAlgorithm();
	bool search(ArrType*, ElemType) = 0; 
	size_t searchPos(ArrType*, ElemType) = 0;
	//TODO: calcDifficulty() = 0 ????
	virtual ~SearchAlgorithm();
private:
	ArrType* data;
	size_t elem_cnt;
	ElemType elem;
};

//TODO: realize: linear search, binar

