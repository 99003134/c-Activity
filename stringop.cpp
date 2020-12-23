#include <cstring>
#include <iostream>
class MyString {
char *m_buf;
int m_len;
public:
MyString() : m_buf(nullptr), m_len(0) {}
MyString(const char *pbuf) {
m_len = strlen(pbuf);
m_buf = new char[m_len + 1];
strcpy(m_buf, pbuf);
}
MyString(const MyString &ref) :
m_len(ref.m_len) {
m_buf = new char[m_len + 1];
strcpy(m_buf, ref.m_buf);
}
~MyString() {
if (m_len > 0) // m_buf != nullptr
delete[] m_buf;
}
MyString& operator=(const MyString &ref) {
if(this == &ref) return *this;
//self assignment check
if(m_buf!=nullptr) delete[] m_buf;
m_len = ref.m_len;
m_buf = new char[m_len + 1];
strcpy(m_buf, ref.m_buf);
return *this;
}
MyString operator+(const MyString &ref) {
MyString s;
s.m_len=this->m_len+ref.m_len;
s.m_buf = new char[s.m_len + 1];
s.m_buf=strcat(m_buf,ref.m_buf);
return s;
}
MyString operator+(const char* k) {
MyString s;
s.m_len=this->m_len+strlen(k);
s.m_buf = new char[s.m_len + 1];
s.m_buf=strcat(this->m_buf,k);
std::cout<<s.m_buf;
return s;
}
MyString& operator+=(const char* k) {
//MyString s;
//int i=this->m_len;
this->m_len+=strlen(k);
this->m_buf = strcat(m_buf,k);

return *this;
}

bool operator==( MyString& ref) {
  return strcmp(m_buf,ref.m_buf);
}
bool operator>( MyString& ref) {
  if(strcmp(m_buf,ref.m_buf)==1)
  return 1;
  else
  {
      return 0;
  }
  
}
bool operator<( MyString& ref) {
if(strcmp(m_buf,ref.m_buf)==-1)
  return 1;
  else
  {
      return 0;
  }
  
}
int length() const { return m_len; }
void display() const {
std::cout << m_buf << "\n";
}
};
int main() {
MyString s1("abcdxyz");
//param
s1.display();
std::cout << "length: " << s1.length() << "\n";
MyString s2(s1);
s2.display(); //copy
MyString s3;
s3 = s1;
s3.display(); //default
//assignment, s3.operator=(s1)
MyString s4("hello");
s4 = s1;
s4.display();
s1.display();
//s1 = s1;
//self assignment
//s1="abcd";
std::cout<<"**********************************\n";
s3 = s1 + s2;
s3.display();
s1.display();
s4 = s3 + "xyz";
s4.display();
 std::cout<<(s3 == s2)<<"\n";
s4+="1234";
s4.display();
s2 = "hello";
s2.display();

s4 < s2;
s4> s2;
//std::cout << s1;
//std::cin >> s2;
return 0;
}
