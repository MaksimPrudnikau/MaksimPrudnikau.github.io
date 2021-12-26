#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {54, 45,2},
            {32, 7,  31}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_25_000);
    cout << widget.Name << "\n";
    
    return 0;
}
