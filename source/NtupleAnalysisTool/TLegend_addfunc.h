#ifndef TLEGEND_ADDFUNC_HH
#define TLEGEND_ADDFUNC_HH

#include <TLegend.h>

class TLegend_addfunc : public TLegend {

  public:
    //right upper
    TLegend_addfunc(Double_t n) : TLegend(0.37, 0.84-(n+1)*0.038, 0.62, 0.84){ 
//    TLegend_addfunc(Double_t n) : TLegend(0.45, 0.85-(n+1)*0.038, 0.7, 0.85){ 
//    TLegend_addfunc(Double_t n) : TLegend(0.5, 0.9-(n+1)*0.032, 0.65, 0.9){ 
    //TLegend_addfunc(Double_t n) : TLegend(0.75, 0.8-(n+1)*0.042, 1, 0.8){ 
      TLegend::SetBorderSize(0);
      //TLegend::SetTextSize(0.04);
      TLegend::SetTextSize(0.035);
    }
    //middle lower
    TLegend_addfunc(TString str, TString dummy, Double_t n) : TLegend(0.35, 0.2, 0.6, 0.2+(n+1)*0.042){ 
    //TLegend_addfunc(Double_t n) : TLegend(0.75, 0.8-(n+1)*0.042, 1, 0.8){ 
      TLegend::SetBorderSize(0);
    }
    //middle upper
    TLegend_addfunc(TString str, TString dummy, Double_t m, Double_t n) : TLegend(0.32, 0.73-(n+1)*0.042, 0.57, 0.73){ 
      //TLegend_addfunc(Double_t n) : TLegend(0.75, 0.8-(n+1)*0.042, 1, 0.8){ 
      TLegend::SetBorderSize(0);
      TLegend::SetTextSize(0.04);
    }
    
    //left upper
    TLegend_addfunc(Double_t dummy, Double_t dummy_2, Double_t n) : TLegend(0.17, 0.92-(n+1)*0.04, 0.32, 0.92){ 
      TLegend::SetBorderSize(0);
      TLegend::SetTextSize(0.04);
    }
    
    TLegend_addfunc(Double_t n_select, Double_t n_opt) : TLegend(0.6, 0.9-0.042*(n_select + n_opt + 2), 1, 0.9-(n_select+1)*0.042){ 
      TLegend::SetBorderSize(0);
      //TLegend::SetMargin(0.001);
    }

    //right lower
    TLegend_addfunc(TString str, Double_t n) : TLegend(0.5, 0.2, 0.75, 0.2+(n+1)*0.042)
    {
      TLegend::SetBorderSize(0);
      TLegend::SetTextSize(0.04);
    }
    //left lower
    TLegend_addfunc(TString str, Double_t dummy, Double_t n) : TLegend(0.2, 0.2, 0.45, 0.2+(n+1)*0.042)
    {
      TLegend::SetBorderSize(0);
    }
    
    void AddSelection(const char* select){
      TLegend::AddEntry((TObject*)0, select, "");
      TLegend::SetTextSize(0.035);
    }
    void AddSelectionBold(const char* select){
      TLegend::AddEntry((TObject*)0, select, "");
      TLegend::SetTextSize(0.04);
      TLegend::SetTextFont(42);
    }
    void AddOption(const TObject* obj, const char* label){
      TLegend::SetTextSize(0.04);
      TLegend::AddEntry(obj, label, "l");
    }
};

#endif
