#define EVENTDISPLAY_cxx
#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include "../NtupleAnalysisTool/SAObjects.h"
#include "../NtupleAnalysisTool/CBObjects.h"
#include <TH2.h>
#include <TStyle.h>
#include "TLorentzVector.h"
#include "TText.h"
#include "TGraph.h"

void NtupleAnalysisTool::Display(int begin_entry, int limit_entry, std::string& chain, TString pdf)
{
  const double ZERO_LIMIT = 1e-5;
  if (fChain == 0) return;
  Long64_t nentries;
  if(limit_entry == -1){
    nentries = fChain->GetEntries();
    begin_entry = 0;
  } else {
    nentries = limit_entry;
  }
  Long64_t nbytes = 0, nb = 0;
  bool isFirstEvent = true;
  
  TCanvas *c2 = new TCanvas("c2", "c2", 10, 10, 1050, 700);
  c2->SetGrid();
  c2->SetRightMargin(0.20);
  c2->SetLeftMargin(0.23);
  c2->SetBottomMargin(0.20);
  c2->Print(pdf + "[", "pdf");

  for (Long64_t jentry=begin_entry; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    //search where the analysed chain
    for(int i = 0; i < trigname->size(); i++){
      if(isFirstEvent) std::cout << "trigger -> " << trigname->at(i) << "/ isPassed -> " << isPassedTrig->at(i) << std::endl;
      isFirstEvent = false;
      if(trigname->at(i).find(chain) != std::string::npos){
        m_chain = i;
      }
    }
    if(Cut(ientry) < 0) continue;
    if(!isPassedSAMP_evt->at(m_chain)) continue;
    int countCBhypoPass = 0;
    if(isPassedCBMP->size()){
      std::cout << "------ event number = " << eventNumber << " ------" << std::endl;
      for(int i_ftf = 0; i_ftf < ftf_pt->size(); i_ftf++){
        std::cout << "ftf pT/eta/phi = " << ftf_pt->at(i_ftf) << "/" << ftf_eta->at(i_ftf) << "/" << ftf_phi->at(i_ftf) << std::endl;
      }
      for(int i_cb = 0; i_cb < isPassedCBMP->at(m_chain).size(); i_cb++){
        std::cout << "tdt_CBMP pT/eta/phi/isPassed = " << tdt_CBMPpt->at(m_chain).at(i_cb) << "/" << tdt_CBMPeta->at(m_chain).at(i_cb) << "/" << tdt_CBMPphi->at(m_chain).at(i_cb) << "/" << isPassedCBMP->at(m_chain).at(i_cb) << std::endl;
        std::cout << "tdt_CBMPid pT/eta/phi = " << tdt_CBMPidpt->at(m_chain).at(i_cb) << "/" << tdt_CBMPideta->at(m_chain).at(i_cb) << "/" << tdt_CBMPidphi->at(m_chain).at(i_cb) << "/" << isPassedCBMP->at(m_chain).at(i_cb) << std::endl;
        //Only barrel events are left, so hypo threshold is just 9.73GeV.
        if(fabs(tdt_CBMPpt->at(m_chain).at(i_cb)) > 9730 /*GeV*/){
          countCBhypoPass++;
        }
      }
    }

    //prepare the objects
    size_t n_muon = muon_pt->size();
    size_t n_ftf = ftf_pt->size();
    size_t n_id = tdt_CBMPidpt->at(m_chain).size();
    size_t n_sa = tdt_SAMPpt->at(m_chain).size();
    TGraph gr_offline[n_muon] = TGraph(0);
    TGraph gr_offline_outline[n_muon] = TGraph(0);
    TGraph gr_ftf[n_ftf] = TGraph(0);
    TGraph gr_idtrk[n_id]   = TGraph(0);
    TGraph gr_satrk[n_sa]   = TGraph(0);
    TGraph gr_satrk_outline[n_sa]   = TGraph(0);
    std::vector<TText> texs;
    double etamin = 99999;
    double etamax = -99999;
    double phimin = 99999;
    double phimax = -99999;
    for(int i_mu = 0; i_mu < muon_pt->size(); i_mu++){
      gr_offline[i_mu].SetPoint(0, muon_eta->at(i_mu), muon_phi->at(i_mu));
      gr_offline[i_mu].SetMarkerStyle(21);
      gr_offline[i_mu].SetMarkerSize(2.3);
      gr_offline[i_mu].SetMarkerColor(16);
      gr_offline_outline[i_mu].SetPoint(0, muon_eta->at(i_mu), muon_phi->at(i_mu));
      gr_offline_outline[i_mu].SetMarkerStyle(25);
      gr_offline_outline[i_mu].SetMarkerSize(2.3);
      gr_offline_outline[i_mu].SetMarkerColor(14);
      TText tex;
      tex.SetNDC(0);
      tex.SetText(muon_eta->at(i_mu), muon_phi->at(i_mu), Form("  offline %4.2f[GeV]", muon_pt->at(i_mu)/1000.));
      texs.push_back(tex);
      if(etamin > muon_eta->at(i_mu)) etamin = muon_eta->at(i_mu);
      if(phimin > muon_phi->at(i_mu)) phimin = muon_phi->at(i_mu);
      if(etamax < muon_eta->at(i_mu)) etamax = muon_eta->at(i_mu);
      if(phimax < muon_phi->at(i_mu)) phimax = muon_phi->at(i_mu);
    }
    for(int i_ftf = 0; i_ftf < ftf_pt->size(); i_ftf++){
      gr_ftf[i_ftf].SetPoint(0, ftf_eta->at(i_ftf), ftf_phi->at(i_ftf));
      gr_ftf[i_ftf].SetMarkerStyle(4);
      gr_ftf[i_ftf].SetMarkerSize(2);
      gr_ftf[i_ftf].SetMarkerColor(1);
      if(etamin > ftf_eta->at(i_ftf)) etamin = ftf_eta->at(i_ftf);
      if(phimin > ftf_phi->at(i_ftf)) phimin = ftf_phi->at(i_ftf);
      if(etamax < ftf_eta->at(i_ftf)) etamax = ftf_eta->at(i_ftf);
      if(phimax < ftf_phi->at(i_ftf)) phimax = ftf_phi->at(i_ftf);
    }
    int countLeg = 0;
    for(int i_sa = 0; i_sa < tdt_CBMPsapt->at(m_chain).size(); i_sa++){
      if(!isPassedSAMP->at(m_chain).at(i_sa)){
        gr_satrk[i_sa].SetPoint(0, -99999, 99999);
        gr_satrk_outline[i_sa].SetPoint(0, -99999, 99999);
      } else {
        gr_satrk[i_sa].SetPoint(0, tdt_CBMPsaeta->at(m_chain).at(i_sa), tdt_CBMPsaphi->at(m_chain).at(i_sa));
        gr_satrk[i_sa].SetMarkerStyle(22);
        gr_satrk[i_sa].SetMarkerSize(2);
        gr_satrk[i_sa].SetMarkerColor(2+i_sa);
        gr_satrk_outline[i_sa].SetPoint(0, tdt_CBMPsaeta->at(m_chain).at(i_sa), tdt_CBMPsaphi->at(m_chain).at(i_sa));
        gr_satrk_outline[i_sa].SetMarkerStyle(26);
        gr_satrk_outline[i_sa].SetMarkerSize(2);
        gr_satrk_outline[i_sa].SetMarkerColor(1);
        TText tex;
        tex.SetNDC(true);
        tex.SetTextSize(0.03);
        tex.SetText(0.25, 0.85-i_sa*0.03, Form("mtSA %4.3f[GeV]", tdt_CBMPsapt->at(m_chain).at(i_sa)));
        tex.SetTextColor(2+i_sa);
        texs.push_back(tex);
        if(etamin > tdt_CBMPsaeta->at(m_chain).at(i_sa)) etamin = tdt_CBMPsaeta->at(m_chain).at(i_sa);
        if(phimin > tdt_CBMPsaphi->at(m_chain).at(i_sa)) phimin = tdt_CBMPsaphi->at(m_chain).at(i_sa);
        if(etamax < tdt_CBMPsaeta->at(m_chain).at(i_sa)) etamax = tdt_CBMPsaeta->at(m_chain).at(i_sa);
        if(phimax < tdt_CBMPsaphi->at(m_chain).at(i_sa)) phimax = tdt_CBMPsaphi->at(m_chain).at(i_sa);
        countLeg++;
      }
    }
    for(int i_id = 0; i_id < tdt_CBMPidpt->at(m_chain).size(); i_id++){
      gr_idtrk[i_id].SetPoint(0, tdt_CBMPideta->at(m_chain).at(i_id), tdt_CBMPidphi->at(m_chain).at(i_id));
      gr_idtrk[i_id].SetMarkerStyle(8);
      gr_idtrk[i_id].SetMarkerSize(2-i_id*0.5);
      gr_idtrk[i_id].SetMarkerColor(2+i_id);
      TText tex;
      tex.SetNDC(true);
      tex.SetText(0.25, 0.85-(i_id+countLeg)*0.03, Form("matched id %4.3f[GeV]", tdt_CBMPidpt->at(m_chain).at(i_id)/1000.));
      tex.SetTextColor(2+i_id);
      texs.push_back(tex);
      if(etamin > tdt_CBMPideta->at(m_chain).at(i_id)) etamin = tdt_CBMPideta->at(m_chain).at(i_id);
      if(phimin > tdt_CBMPidphi->at(m_chain).at(i_id)) phimin = tdt_CBMPidphi->at(m_chain).at(i_id);
      if(etamax < tdt_CBMPideta->at(m_chain).at(i_id)) etamax = tdt_CBMPideta->at(m_chain).at(i_id);
      if(phimax < tdt_CBMPidphi->at(m_chain).at(i_id)) phimax = tdt_CBMPidphi->at(m_chain).at(i_id);
    }
    //set window
    etamin = etamin - 0.05;
    phimin = phimin - 0.05;
    etamax = etamax + 0.15;
    phimax = phimax + 0.15;
    TH1* frame = c2->DrawFrame(etamin, phimin, etamax, phimax);
    frame->GetXaxis()->SetTitle("#eta");
    frame->GetYaxis()->SetTitle("#phi");
    for(int i_mu = 0; i_mu < n_muon; i_mu++){
      gr_offline[i_mu].Draw("p, same");
      gr_offline_outline[i_mu].Draw("p, same");
    }
    for(int i_mu = 0; i_mu < n_ftf; i_mu++){
      gr_ftf[i_mu].Draw("p, same");
    }
    for(int i_id = 0; i_id < n_id; i_id++){
      gr_idtrk[i_id].Draw("p, same");
    }
    for(int i_sa = 0; i_sa < n_sa; i_sa++){
      gr_satrk[i_sa].Draw("p, same");
      gr_satrk_outline[i_sa].Draw("p, same");
    }
    for(int i_tex = 0; i_tex < texs.size(); i_tex++){
      texs.at(i_tex).SetTextSize(0.03);
      //texs.at(i_tex).SetTextAngle(30);
      texs.at(i_tex).Draw("same");
    }
    ATLASLabel(0.45, 0.9, "Work In Progress");
    myText(0.45, 0.86, 1, "Simulation #sqrt{s}=13TeV, bb#rightarrow J/#psi#rightarrow#mu#mu");
    myText(0.45, 0.83, 1, "mtSA:p_{T}#geq10GeV#times2, MuonCB:p_{T}#geq10GeV#times2");
//    myText(0.5, 0.85, 1, "Simulation #sqrt{s}=13TeV, bb#rightarrow J/#psi#rightarrow#mu#mu");
//    myText(0.5, 0.82, 1, "mtSA:p_T#geq10GeV, MuonCB:p_T#geq10GeV");

    if(countCBhypoPass>1) myText(0.5, 0.79, 1, "w/o CBovlprm passed");
    else myText(0.5, 0.79, 1, "w/o CBovlprm failed");
    if(isPassedCBMP_evt->at(m_chain)) myText(0.5, 0.76, 1, "w/  CBovlprm passed");
    else myText(0.5, 0.76, 1, "w/  CBovlprm failed");
    TText eventInfo = TText(0.05,0.02,Form("EventNumber = %llu",eventNumber));
    eventInfo.SetNDC();
    eventInfo.SetTextSize(0.03);
    eventInfo.Draw("same");
    c2->Print(pdf, "pdf");
    c2->RedrawAxis();
    delete frame;
  }
  c2->Print(pdf + "]", "pdf");
  delete c2;

}

