#include<eigen3/Eigen/Core>
#include<vector>
#include "triangle.h"

Triangle::Triangle(const Triangle &parent, int idx){
  Eigen::Vector3d v1;
  Eigen::Vector3d v2;
  Eigen::Vector3d v3;
  if (idx == 0) {
    v1 = parent.getPoint(0);
    v2 = (parent.getPoint(0)+parent.getPoint(1))/2;
    v3 = (parent.getPoint(1)+parent.getPoint(2))/2;
  }
  if (idx == 1){
    v1 = (parent.getPoint(0)+parent.getPoint(1))/2;
    v2 = parent.getPoint(1);
    v3 = (parent.getPoint(1)+parent.getPoint(2))/2;
  }

  if (idx == 2){
    v1 = (parent.getPoint(0)+parent.getPoint(2))/2;
    v2 = (parent.getPoint(1)+parent.getPoint(2))/2;
    v3 = parent.getPoint(2);
  }
  if (idx == 3){
    v1 = (parent.getPoint(0)+parent.getPoint(2))/2;
    v2 = (parent.getPoint(0)+parent.getPoint(1))/2;
    v3 = (parent.getPoint(1)+parent.getPoint(2))/2;
  }

  points.push_back(v1);
  points.push_back(v2);
  points.push_back(v3);
}


Triangle::Triangle(const Eigen::Vector3d &v1,
                   const Eigen::Vector3d &v2,
                   const Eigen::Vector3d &v3){
  points.push_back(v1);
  points.push_back(v2);
  points.push_back(v3);
  //std::cout << "hei"
}

Eigen::Vector3d Triangle::getPoint(int i) const {
   return points[i]; }
std::vector<Eigen::Vector3d> Triangle::getTriangle() const { return points; }
