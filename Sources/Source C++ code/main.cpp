#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {52, 48,37},
            {100, 18,  41}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_10_000);
    cout << widget.Name << "\n";
    
    return 0;
}
