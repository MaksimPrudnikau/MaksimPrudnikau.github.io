#include <iostream>
#include "Maps/WidgetMap.h"
#include "Maps/Angle.h"
using namespace std;
int main() {
    Point base =
    {
            {89,55,20.01},
            {17, 9, 20.02}
    };

    cout << WidgetMap().GetNomenclature(base, M1_1_000_000).Name << "\n";
    return 0;
}
