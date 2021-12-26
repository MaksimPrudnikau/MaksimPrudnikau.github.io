#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {13,5,21},
            {5, 9, 22}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_100_000);
    cout << widget.Name << "\n";
    
    return 0;
}
