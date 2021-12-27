#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {89, 15,21},
            {15, 19,  22}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_2000);
    cout << widget.Name << "\n";
    
    return 0;
}
