#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {52, 12,54},
            {100, 44,  54}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_5000);
    cout << widget.Name << "\n";
    
    return 0;
}
