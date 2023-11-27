// stdstr.cpp : source file that includes just the standard includes

#include "stdafx.h"
#include "stdstr.h"


string i2s(__int64 i, size_t n)
{
	char sz[128]; sprintf_s(sz,sizeof(sz),"%I64d",i);
	string s = sz; for (int j=int(s.size())-3; j>0; j-=3) s.insert(j,",");
	while (s.size()<n) s.insert(0," ");
	return s;
}
