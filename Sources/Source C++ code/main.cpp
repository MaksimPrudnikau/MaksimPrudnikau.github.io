#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {0, 5,0},
            {0, 0,0}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_100_000);
    cout << widget.Name << "\n";
    
    return 0;
}
