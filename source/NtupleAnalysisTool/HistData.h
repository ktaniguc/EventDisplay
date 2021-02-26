#ifndef HISTDATA
#define HISTDATA

#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TString.h"
#include "TFile.h"

#include "TEfficiency.h"
//trigger -> HLT_2mu10_l2mp_L1MU10/ isPassed -> 1
//trigger -> HLT_2mu10_l2mp_L12MU10/ isPassed -> 0
//trigger -> HLT_2mu10_L12MU10/ isPassed -> 0
//trigger -> HLT_2mu6_l2mp_L1MU6/ isPassed -> 1
//trigger -> HLT_2mu6_l2mp_L12MU6/ isPassed -> 0
//trigger -> HLT_2mu6_L12MU6/ isPassed -> 0
//trigger -> HLT_2mu4_l2mp_L1MU4/ isPassed -> 1
//trigger -> HLT_2mu4_L12MU4/ isPassed -> 0
//trigger -> HLT_2mu15_l2mp_L1MU10/ isPassed -> 1
//trigger -> HLT_2mu15_L12MU10/ isPassed -> 0

class HistData
{
  public :
    HistData(){
      HistInit();
    };
    ~HistData() {};

    void HistInit()
    {
      // for example
      m_dR_nocut = new TH1D("m_dR_nocut", ";#DeltaR_{#mu#mu};entries", 46, 0, 0.46);
      m_eta_nocut = new TH1D("m_eta_nocut", ";#eta_{#mu};entries", 104, -2.6, 2.6);
      m_phi_nocut = new TH1D("m_phi_nocut", ";#phi_{#mu};entries", 120, -3.0, 3.0);
//      m_pt_nocut = new TH1D("m_pt_nocut", ";p_{T,#mu}[GeV];entries", 994, 3, 500);
      //m_pt_nocut = new TH1D("m_pt_nocut", ";p_{T,#mu}[GeV];entries", 250, 0, 500);
      m_pt_nocut = new TH1D("m_pt_nocut", ";p_{T,#mu}[GeV];entries", 100, 0, 50);
      m_ptdR_nocut = new TH2D("m_ptdR_nocut", ";p_{T,#mu}[GeV];#DeltaR_{#mu#mu};entries", 100, 0, 50, 70, 0, 1.4);
      float binwid = 14;
      float binmax = 0.42;
      float binwid_foreta = 22;
      float binmin_foreta = -1.1;
      float binmax_foreta = 1.1;
      float binwid_forphi = 15;
      float binmin_forphi = -3;
      float binmax_forphi = 3;
      trigname[0] = "HLT_2mu10_l2mp_L1MU10";
      trigname[1] = "HLT_2mu10_L12MU10";
      trigname[2] = "HLT_2mu4_l2mp_L1MU4";
      trigname[3] = "HLT_2mu4_L12MU4";
      m_dR_off = new TH1D("m_dR_off", "offline #DeltaR_{#mu#mu};#DeltaR_{#mu#mu};events", binwid, 0, binmax);
      m_jpsiEta_off = new TH1D("m_jpsiEta_off", ";offline #eta_{J/#psi};events", binwid_foreta, binmin_foreta, binmax_foreta);
      m_jpsiPhi_off = new TH1D("m_jpsiphi_off", ";offline #phi_{J/#psi};events", binwid_forphi, binmin_forphi, binmax_forphi);
      for(int i=0; i < 4; i++){
        TString trigtitle = trigname[i]+"; #DeltaR(#mu,#mu);events";
        m_dR_l1[i] = new TH1D(Form("m_dR_l1%d", i), trigtitle, binwid, 0, binmax);
        m_dR_sa[i] = new TH1D(Form("m_dR_sa%d", i), trigtitle, binwid, 0, binmax);
        m_dR_cb[i] = new TH1D(Form("m_dR_cb%d", i), trigtitle, binwid, 0, binmax);
        m_dR_ef[i] = new TH1D(Form("m_dR_ef%d", i), trigtitle, binwid, 0, binmax);
        m_dR_l1_wisMore[i] = new TH1D(Form("m_dR_l1_wisMore%d", i), trigtitle, binwid, 0, binmax);
        m_dR_sa_wisMore[i] = new TH1D(Form("m_dR_sa_wisMore%d", i), trigtitle, binwid, 0, binmax);
        m_dR_cb_wisMore[i] = new TH1D(Form("m_dR_cb_wisMore%d", i), trigtitle, binwid, 0, binmax);
        m_dR_ef_wisMore[i] = new TH1D(Form("m_dR_ef_wisMore%d", i), trigtitle, binwid, 0, binmax);
        m_dR_l1_or[i] = new TH1D(Form("m_dR_l1_or%d", i), trigtitle, binwid, 0, binmax);
        m_dR_sa_or[i] = new TH1D(Form("m_dR_sa_or%d", i), trigtitle, binwid, 0, binmax);
        m_dR_cb_or[i] = new TH1D(Form("m_dR_cb_or%d", i), trigtitle, binwid, 0, binmax);
        m_dR_ef_or[i] = new TH1D(Form("m_dR_ef_or%d", i), trigtitle, binwid, 0, binmax);
        m_eff_l1_dR[i] = nullptr;
        m_eff_sa_dR[i] = nullptr;
        m_eff_cb_dR[i] = nullptr;
        m_eff_ef_dR[i] = nullptr;
        m_eff_l1_dR_wisMore[i] = nullptr;
        m_eff_sa_dR_wisMore[i] = nullptr;
        m_eff_cb_dR_wisMore[i] = nullptr;
        m_eff_ef_dR_wisMore[i] = nullptr;
        m_eff_l1_dR_or[i] = nullptr;
        m_eff_sa_dR_or[i] = nullptr;
        m_eff_cb_dR_or[i] = nullptr;
        m_eff_ef_dR_or[i] = nullptr;
        //jpsi Eta
        trigtitle = trigname[i]+"; #eta_{J/#psi};events";
        m_jpsiEta_l1[i] = new TH1D(Form("m_jpsiEta_l1%d", i), trigtitle, binwid_foreta, binmin_foreta, binmax_foreta);
        m_jpsiEta_sa[i] = new TH1D(Form("m_jpsiEta_sa%d", i), trigtitle, binwid_foreta, binmin_foreta, binmax_foreta);
        m_jpsiEta_cb[i] = new TH1D(Form("m_jpsiEta_cb%d", i), trigtitle, binwid_foreta, binmin_foreta, binmax_foreta);
        m_jpsiEta_ef[i] = new TH1D(Form("m_jpsiEta_ef%d", i), trigtitle, binwid_foreta, binmin_foreta, binmax_foreta);
        m_eff_l1_jpsiEta[i] = nullptr;
        m_eff_sa_jpsiEta[i] = nullptr;
        m_eff_cb_jpsiEta[i] = nullptr;
        m_eff_ef_jpsiEta[i] = nullptr;
        //jpsi Phi
        trigtitle = trigname[i]+"; #phi_{J/#psi};events";
        m_jpsiPhi_l1[i] = new TH1D(Form("m_jpsiphi_l1%d", i), trigtitle, binwid_forphi, binmin_forphi, binmax_forphi);
        m_jpsiPhi_sa[i] = new TH1D(Form("m_jpsiphi_sa%d", i), trigtitle, binwid_forphi, binmin_forphi, binmax_forphi);
        m_jpsiPhi_cb[i] = new TH1D(Form("m_jpsiphi_cb%d", i), trigtitle, binwid_forphi, binmin_forphi, binmax_forphi);
        m_jpsiPhi_ef[i] = new TH1D(Form("m_jpsiphi_ef%d", i), trigtitle, binwid_forphi, binmin_forphi, binmax_forphi);
        m_eff_l1_jpsiPhi[i] = nullptr;
        m_eff_sa_jpsiPhi[i] = nullptr;
        m_eff_cb_jpsiPhi[i] = nullptr;
        m_eff_ef_jpsiPhi[i] = nullptr;
      }
      m_l2mpStep = new TH1D("m_l2mpStep", "# of events passing HLT_2mu10_l2mp_L1MU10;step;events", 6, 0, 6);
      m_l2mpStep->GetXaxis()->SetBinLabel(1, "L1_MU10");
      m_l2mpStep->GetXaxis()->SetBinLabel(2, "SA Hypo");
      m_l2mpStep->GetXaxis()->SetBinLabel(3, "SA OvlpRm");
      m_l2mpStep->GetXaxis()->SetBinLabel(4, "CB Hypo");
      m_l2mpStep->GetXaxis()->SetBinLabel(5, "CB OvlpRm");
      m_l2mpStep->GetXaxis()->SetBinLabel(6, "EF");
      m_dR_sahypo = new TH1D("m_dR_sahypo", ";|#DeltaR(#mu, #mu)|;events", binwid, 0, binmax);
      m_dR_cbhypo = new TH1D("m_dR_cbhypo", ";|#DeltaR(#mu, #mu)|;events", binwid, 0, binmax);
      m_dR_sahypodef = new TH1D("m_dR_sahypodef", ";|#DeltaR(#mu, #mu)|;events", binwid, 0, binmax);
      m_dR_cbhypodef = new TH1D("m_dR_cbhypodef", ";|#DeltaR(#mu, #mu)|;events", binwid, 0, binmax);
      m_dR_cbovlprmfail = new TH1D("m_dR_cbovlprmfail", ";#DeltaR_{#mu#mu} at MuonSpectrometer;events", binwid, 0, binmax);
      m_dR_cbovlprmfail_sameid = new TH1D("m_dR_cbovlprmfail_sameid", ";#DeltaR_{#mu, #mu} at MuonSpectrometer;events", binwid, 0, binmax);
      m_dpt_cbovlprmfailed = new TH1D("m_dpt_cbovlprmfail", ";|#delta p_{T}|;events", 100, 0, 0.1);
      m_detaphi_cbovlprmfailed = new TH2D("m_detaphi_cbovlprmfailed", ";|#delta#eta|;|#delta#phi(rad)|;entries", 50, 0, 0.001, 50, 0, 0.001);
      m_eff_sa_dR_woOvlpRm = nullptr;
      m_eff_cb_dR_woOvlpRm = nullptr;
      m_eff_sa_dR_woOvlpRm_def = nullptr;
      m_eff_cb_dR_woOvlpRm_def = nullptr;
    };
    void HistEnd()
    {
      // for example
    };

  public : 
    // for example
    TH1D *m_l2mpStep;
    TH1D *m_dR_nocut;
    TH1D *m_pt_nocut;
    TH1D *m_eta_nocut;
    TH1D *m_phi_nocut;
    TH2D *m_ptdR_nocut;
    TString trigname[4];
    TH1D *m_dR_off;
    TH1D *m_dR_l1[4];
    TH1D *m_dR_sa[4];
    TH1D *m_dR_cb[4];
    TH1D *m_dR_ef[4];
    TEfficiency* m_eff_l1_dR[4];
    TEfficiency* m_eff_sa_dR[4];
    TEfficiency* m_eff_cb_dR[4];
    TEfficiency* m_eff_ef_dR[4];
    TH1D *m_dR_l1_wisMore[4];
    TH1D *m_dR_sa_wisMore[4];
    TH1D *m_dR_cb_wisMore[4];
    TH1D *m_dR_ef_wisMore[4];
    TEfficiency* m_eff_l1_dR_wisMore[4];
    TEfficiency* m_eff_sa_dR_wisMore[4];
    TEfficiency* m_eff_cb_dR_wisMore[4];
    TEfficiency* m_eff_ef_dR_wisMore[4];
    TH1D *m_dR_l1_or[4];
    TH1D *m_dR_sa_or[4];
    TH1D *m_dR_cb_or[4];
    TH1D *m_dR_ef_or[4];
    TEfficiency* m_eff_l1_dR_or[4];
    TEfficiency* m_eff_sa_dR_or[4];
    TEfficiency* m_eff_cb_dR_or[4];
    TEfficiency* m_eff_ef_dR_or[4];
    TEfficiency* m_eff_sa_dR_woOvlpRm;
    TEfficiency* m_eff_cb_dR_woOvlpRm;
    TEfficiency* m_eff_sa_dR_woOvlpRm_def;
    TEfficiency* m_eff_cb_dR_woOvlpRm_def;
    TH1D* m_dR_sahypo;
    TH1D* m_dR_cbhypo;
    TH1D* m_dR_sahypodef;
    TH1D* m_dR_cbhypodef;
    TH1D* m_dR_cbovlprmfail;
    TH1D* m_dR_cbovlprmfail_sameid;
    TH2D *m_detaphi_cbovlprmfailed;
    TH1D* m_dpt_cbovlprmfailed;

    TH1D *m_jpsiEta_off;
    TH1D *m_jpsiEta_l1[4];
    TH1D *m_jpsiEta_sa[4];
    TH1D *m_jpsiEta_cb[4];
    TH1D *m_jpsiEta_ef[4];
    TH1D* m_jpsiEta_sahypo;
    TH1D* m_jpsiEta_cbhypo;
    TH1D* m_jpsiEta_sahypodef;
    TH1D* m_jpsiEta_cbhypodef;
    TEfficiency* m_eff_l1_jpsiEta[4];
    TEfficiency* m_eff_sa_jpsiEta[4];
    TEfficiency* m_eff_cb_jpsiEta[4];
    TEfficiency* m_eff_ef_jpsiEta[4];
    TH1D *m_jpsiPhi_off;
    TH1D *m_jpsiPhi_l1[4];
    TH1D *m_jpsiPhi_sa[4];
    TH1D *m_jpsiPhi_cb[4];
    TH1D *m_jpsiPhi_ef[4];
    TH1D* m_jpsiPhi_sahypo;
    TH1D* m_jpsiPhi_cbhypo;
    TH1D* m_jpsiPhi_sahypodef;
    TH1D* m_jpsiPhi_cbhypodef;
    TEfficiency* m_eff_l1_jpsiPhi[4];
    TEfficiency* m_eff_sa_jpsiPhi[4];
    TEfficiency* m_eff_cb_jpsiPhi[4];
    TEfficiency* m_eff_ef_jpsiPhi[4];
};

#endif //RPCL2MUONSA_HISTDATA
