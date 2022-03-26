#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    Point base =
    {
            {40, 52, 16.2104},
            {6, 20, 35.6035}
    };

    //auto widget = WidgetMap::GetNomenclature(base, M1_2000);
    //cout << widget.Name << "\n";

    auto widget = WidgetMap::GetBorders("O-38-Г", M1_500_000);
    
    return 0;
}
