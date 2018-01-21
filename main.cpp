//
//  main.cpp
//  GameMath
//
//  Created by River Liu on 25/12/2017.
//  Copyright © 2017 River Liu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "gamemath/Vector2.h"
#include "gamemath/Vector3.h"
#include "gamemath/Vector4.h"
#include "gamemath/Matrix3x3.h"
#include "gamemath/Matrix2x2.h"
#include "gamemath/Matrix4x4.h"
#include "gamemath/ScaleMatrix.h"
#include "gamemath/RotationMatrix.h"
#include "gamemath/Quaternion.h"
#include "gamemath/TRSMatrix.h"
#include "gamemath/SQT.h"

using namespace GameMath;

int main(int argc, const char * argv[]) {
    Vector3 v1 = Vector3(1, 0, 0);
    Vector3 v2 = Vector3(0, 1, 0);
    Quaternion q3 = Quaternion::fromToRotation(v1, v2);
    std::cout << "Quaternion: " << q3.toString() << std::endl;
    std::cout << "Rotate to v2: " << Quaternion::rotate(q3, v1).toString() << std::endl;
    
    Quaternion q6 = Quaternion(0,0.707107,0,0.707107);
    std::cout << "Product: " << (q6*q6.inverse()).toString() << std::endl;
    return 0;
}
