#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {0, 1,2},
            {13, 13,  13}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_50_000);
    cout << widget.Name << "\n";
    
    return 0;
}
