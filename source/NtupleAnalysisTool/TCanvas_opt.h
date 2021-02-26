#ifndef TCANVAS_OPT_HH
#define TCANVAS_OPT_HH

#include <TCanvas.h>
#include <TString.h>

class TCanvas_opt : public TCanvas {

  public:
    TCanvas_opt() : TCanvas("c1", "c1", 10, 10, /*1200*/1000, 750){ 
      //TAttPad::SetRightMargin(0.248);
//      TAttPad::SetRightMargin(0.2);
//      TAttPad::SetLeftMargin(0.152);
//      TAttPad::SetTopMargin(0.14);
    }
};

#endif
