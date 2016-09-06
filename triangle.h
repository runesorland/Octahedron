#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle{
public:
  Triangle(const Triangle &parent, int idx);
  Triangle(const Eigen::Vector3d &v1,const Eigen::Vector3d &v2,const Eigen::Vector3d &v3);
  Eigen::Vector3d getPoint(int i)const;
  std::vector<Eigen::Vector3d> getTriangle()const;
  friend std::ostream& operator<<(std::ostream & os, Triangle &tri) {
    os << tri.getPoint(0) << "\n" << "--------" << "\n";
    os << tri.getPoint(1) << "\n" << "--------" << "\n";
    os << tri.getPoint(2) << "\n" << "########" << "\n";
  }
  /*
*/
private:
  std::vector<Eigen::Vector3d> points;
};
#endif
