#include <iostream>
#include <TH1.h>
#include <TFile.h>

#include "TEfficiency.h"
#include "/home/ktaniguc/RootUtils/RootUtils/TCanvas_opt.h"
#include "/home/ktaniguc/RootUtils/RootUtils/TLegend_addfunc.h"
#include "/home/ktaniguc/RootUtils/src/rootlogon.C"

void checkFile(){
  rootlogon(); 
  TString chain = "HLT_mu6_L1MU6";
//  TString chain = "HLT_mu14_L1MU10";
//  TString chain = "HLT_mu26_ivarmedium_L1MU20";
  TCanvas_opt *c1 = new TCanvas_opt();
  TFile *_file0 = TFile::Open("efficiency_topoRoad_on.root");
  TFile *_file1 = TFile::Open("efficiency_topoRoad_off.root");
  TString num = "m_h_SApass_"+chain;
  TString den = "m_h_L1pass_"+chain;
  TH1D *num0 = (TH1D*)_file0->Get(num);
  TH1D *num1 = (TH1D*)_file1->Get(num);
  TH1D *den0 = (TH1D*)_file0->Get(den);
  TH1D *den1 = (TH1D*)_file1->Get(den);
  num0->Draw();

  TEfficiency *eff0 = new TEfficiency(*num0, *den0);
  TEfficiency *eff1 = new TEfficiency(*num1, *den1);
  TString title = chain+" efficiency SA/L1; #DeltaR_{tag and probe} at MS; events";
  eff0->SetTitle(title.Data());
  eff1->SetTitle(title.Data());
  eff0->SetLineColor(kRed);
  eff0->SetMarkerColor(kRed);

  TLegend_addfunc *leg = new TLegend_addfunc("efficinecy", 4);
  leg->AddSelection("Z->#mu#mu");
  leg->AddSelection("probe #eta_{MS} < 1.05");
  leg->AddEntry(eff0, "topoRoad on");
  leg->AddEntry(eff1, "topoRoad off");

  eff0->Draw();
  eff1->Draw("same");
  leg->Draw("same");

}
