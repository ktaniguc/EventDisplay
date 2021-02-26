#ifndef COMBINED_OBJ
#define COMBINED_OBJ

#include <vector>
class CBObject
{
  public :
    CBObject() :
    isPassed(-1),
    pt(0), 
    eta(0),
    phi(0),
    roiNum(-1),
    roiSector(-1)
    {};
    ~CBObject() {};

  public :
    int isPassed;
    double pt; 
    double eta;
    double phi;
    int roiNum;
    int roiSector;
};

//-----------------------------------------------------//
//-----------------------------------------------------//
typedef std::vector<CBObject> CBObjects;
//-----------------------------------------------------//
//-----------------------------------------------------//

#endif //COMBINED_OBJ
