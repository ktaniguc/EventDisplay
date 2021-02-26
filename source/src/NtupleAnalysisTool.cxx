#define NtupleAnalysisTool_cxx
#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include "../NtupleAnalysisTool/SAObjects.h"
#include "../NtupleAnalysisTool/CBObjects.h"
#include <TH2.h>
#include <TStyle.h>
#include "TLorentzVector.h"
#include "math.h"
#include "../AtlasStyle/AtlasLabels.C"
#include "../AtlasStyle/AtlasUtils.C"

Int_t NtupleAnalysisTool::Cut(Long64_t entry)
{
  return 1;
}

void NtupleAnalysisTool::Loop(HistData histData, int begin_entry, int limit_entry, std::string& chain)
{
  const double ZERO_LIMIT = 1e-4;
  if (fChain == 0) return;
  Long64_t nentries;
  if(limit_entry == -1){
    nentries = fChain->GetEntries();
    begin_entry = 0;
  } else {
    nentries = limit_entry;
  }
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=begin_entry; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    double deta = muon_extEta->at(0) - muon_extEta->at(1);
    double dphi = muon_extPhi->at(0) - muon_extPhi->at(1);
    double dR = sqrt(deta*deta + dphi*dphi);
    if (Cut(ientry) < 0) continue;
    histData.m_dR_off->Fill(dR);
  }// loop end
}

void NtupleAnalysisTool::DrawHist(TString pdf, HistData histData)
{
//      trigname[0] = "L1:p_{T}#geq10GeV#times1, mtSA:p_{T}#geq10GeV#times2";
//      trigname[1] = "HLT_2mu10_L12MU10";
//      trigname[2] = "HLT_2mu6_l2mp_L1MU6";
//      trigname[3] = "HLT_2mu6_L12MU6";
  TCanvas_opt *c1 = new TCanvas_opt();
  c1->Print( pdf + "[", "pdf");
  histData.m_dR_off->Draw();
  c1->Print(pdf, "pdf");
  c1->Print( pdf + "]", "pdf");
  delete c1;
}

