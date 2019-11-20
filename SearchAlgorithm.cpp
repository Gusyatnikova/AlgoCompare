#include "pch.h"
#include "SearchAlgorithm.h"

 template <class ArrType, class ElemType>
SearchAlgorithm<ArrType, ElemType>::SearchAlgorithm()
{
}

template<class ArrType, class ElemType>
bool SearchAlgorithm<ArrType, ElemType>::search(ArrType *, ElemType)
{
	return false;
}

template<class ArrType, class ElemType>
size_t SearchAlgorithm<ArrType, ElemType>::searchPos(ArrType *, ElemType)
{
	return size_t();
}


template <class ArrType, class ElemType>
SearchAlgorithm<ArrType, ElemType>::~SearchAlgorithm()
{
	delete[] data;
}
