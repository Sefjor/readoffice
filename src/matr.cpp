#include "matr.h"


matr::matr()
{


 std::ifstream infile("content.xml");


while (std::getline(infile, line))
{
    istringstream iss(line);
    }
     line.erase(0, line.find(databegin) + 8);
     line.erase(line.find(dataend), line.length());


auto it = rows.begin();
while (line.find(rowbegin) != line.npos) {
*it++ = line.substr(line.find(rowbegin),line.find(rowend) + rowend.length() - line.find(rowbegin) );
line.erase(line.find(rowbegin),line.find(rowend) + rowend.length() - line.find(rowbegin) );
}

for (int i = 0; i < sz; i++){
auto it = arr[i].begin();
while (rows[i].find(valuebegin) != rows[i].npos) {
*it++ = stoi(rows[i].substr(rows[i].find(valuebegin) + valuebegin.length() + 1, 1 ));
rows[i].erase(rows[i].find(valuebegin), valuebegin.length() + 3 );
}
}
}
void matr::out()
{
for (auto x : arr)
  for (auto y : x)
    cout << y;
}
/*#define ZIP_STD
#include "unzip.h"
  HZIP hz = OpenZip("\\1.ods",0);
  ZIPENTRY ze; GetZipItem(hz,-1,&ze); int numitems=ze.index;
  for (int i=0; i<numitems; i++)
  { GetZipItem(hz,i,&ze);
    UnzipItem(hz,i,ze.name);
  }
  CloseZip(hz);
*/
