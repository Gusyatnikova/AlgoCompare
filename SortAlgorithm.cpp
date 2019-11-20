#include "pch.h"
#include "SortAlgotithm.h"

 template<class ArrType>
SortAlgotithm<ArrType>::SortAlgotithm() : sort_type(false)
{
}


template<class ArrType>
void SortAlgotithm<ArrType>::set_sortType(bool sort_type_)
{
	sort_type = sort_type_;
}

template<class ArrType>
SortAlgotithm<ArrType>::~SortAlgotithm()
{
}


