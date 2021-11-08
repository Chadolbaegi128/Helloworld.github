#include <iostream>

using namespace std;

// 한프로젝트에서 동일한 클래스 명을 사용할 수 없습니다.

namespace LG {
    namespace Develop1 {
        class Math {

        };

    }
}

namespace Samsung {
    class Math {

    };
}



int main() {
    LG::Develop1::Math a;
    Samsung::Math b;

    cout << 123;
    std::cout << 123;

    return 0;
}