#include <iostream>
#include "Maps/Map.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "RUS");
    Point base =
    {
            {53,20,36},
            {31, 39, 29}
    };

    auto widget = WidgetMap::GetNomenclature(base, M1_200_000);
    cout << widget.Name << "\n";
    
    return 0;
}
