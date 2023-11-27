#pragma once


string i2s(__int64 i, size_t n=0);

inline string operator + (const string& s1, const string& s2) { string s(s1); s += s2; return s; }
inline string operator + (const string& s1, const char* s2) { string s(s1); s += s2; return s; }
inline string operator + (const string& s1, const char c) { string s(s1); s += c; return s; }
inline string operator + (const string& s1, const int x) { char sz[32]; sprintf_s(sz,sizeof(sz),"%d",x); return string(s1+sz); }
inline string operator + (const string& s1, const long x) { char sz[32]; sprintf_s(sz,sizeof(sz),"%d",x); return string(s1+sz); }
inline string operator + (const string& s1, const double x) { char sz[32]; sprintf_s(sz,sizeof(sz),"%g",x); return string(s1+sz); }
inline string operator + (const string& s1, const DWORD x) { char sz[32]; sprintf_s(sz,sizeof(sz),"%u",x); return string(s1+sz); }

inline bool operator == (const string& s1, LPCSTR s2) { return s1.compare(s2)==0; }
inline bool operator == (const string& s1, const string& s2) { return s1.compare(s2)==0; }
inline bool operator != (const string& s1, LPCSTR s2) { return s1.compare(s2)!=0; }
inline bool operator != (const string& s1, const string& s2) { return s1.compare(s2)!=0; }
inline bool operator < (const string& s1, LPCSTR s2) { return s1.compare(s2)<0; }
inline bool operator < (const string& s1, const string& s2) { return s1.compare(s2)<0; }
inline bool operator <= (const string& s1, LPCSTR s2) { return s1.compare(s2)<=0; }
inline bool operator <= (const string& s1, const string& s2) { return s1.compare(s2)<=0; }
inline bool operator > (const string& s1, LPCSTR s2) { return s1.compare(s2)>0; }
inline bool operator > (const string& s1, const string& s2) { return s1.compare(s2)>0; }
inline bool operator >= (const string& s1, LPCSTR s2) { return s1.compare(s2)>=0; }
inline bool operator >= (const string& s1, const string& s2) { return s1.compare(s2)>=0; }

inline ostream& operator << (ostream& os, const string& s) { return os << s.c_str(); }
