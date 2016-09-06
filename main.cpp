#include<eigen3/Eigen/Core>
#include<vector>
#include<iostream>
#include<math.h>
#include"triangle.h"
int main(int argc, char const *argv[]) {
  Eigen::Vector3d p1(-1,0,0);
  Eigen::Vector3d p2(1,0,0);
  Eigen::Vector3d p3(0,std::sqrt(5),0);
  Triangle t0(p1, p2, p3);
  Triangle t00(t0, 0);
  Triangle t01(t0, 1);
  Triangle t02(t0, 2);
  Triangle t03(t0, 3);

  std::cout << t0;
  std::cout << t00;
  std::cout << t01;
  std::cout << t02;
  std::cout << t03;
  /*
*/
  std::cout << "test";
  return 0;
}
