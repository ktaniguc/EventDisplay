//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul 10 12:48:54 2020 by ROOT version 6.12/04
// from TTree t_tap/TrigMuonTagAndProbe
// found on file: /gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root
//////////////////////////////////////////////////////////

#ifndef NtupleAnalysisTool_h
#define NtupleAnalysisTool_h

#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TString.h"
#include "HistData.h"
#include "TLegend_addfunc.h"
#include "TCanvas_opt.h"
#include "../AtlasStyle/AtlasLabels.h"
#include "../AtlasStyle/AtlasUtils.h"

// Header file for the classes stored in the TTree if any.
#include "vector"
using namespace std;

class NtupleAnalysisTool {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   int m_chain{0};

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           eventNumber;
   Int_t           runNumber;
   vector<string>  *trigname;
   vector<bool>    *isPassedTrig;
   vector<bool>    *isPassedL1_evt;
   vector<bool>    *isPassedSA_evt;
   vector<bool>    *isPassedCB_evt;
   vector<bool>    *isPassedSAMP_evt;
   vector<bool>    *isPassedCBMP_evt;
   vector<bool>    *isPassedEF_evt;
   vector<vector<bool> > *isPassedL1;
   vector<vector<bool> > *isPassedSA;
   vector<vector<bool> > *isPassedCB;
   vector<vector<bool> > *isPassedSAMP;
   vector<vector<bool> > *isPassedCBMP;
   vector<vector<bool> > *isPassedEF;
   vector<vector<int> > *tdt_L1RoINumber;
   vector<vector<int> > *tdt_SARoINumber;
   vector<vector<int> > *tdt_CBRoINumber;
   vector<vector<int> > *tdt_SAMPRoINumber;
   vector<vector<int> > *tdt_CBMPRoINumber;
   vector<vector<int> > *tdt_L1RoISector;
   vector<vector<int> > *tdt_SARoISector;
   vector<vector<int> > *tdt_CBRoISector;
   vector<vector<int> > *tdt_SAMPRoISector;
   vector<vector<int> > *tdt_CBMPRoISector;
   vector<vector<double> > *tdt_L1roieta;
   vector<vector<double> > *tdt_L1roiphi;
   vector<vector<bool> > *tdt_L1isMoreCandInRoI;
   vector<vector<double> > *tdt_SApt;
   vector<vector<double> > *tdt_SAeta;
   vector<vector<double> > *tdt_SAphi;
   vector<vector<double> > *tdt_SAetaMS;
   vector<vector<double> > *tdt_SAphiMS;
   vector<vector<int> > *tdt_SAsAddress;
   vector<vector<float> > *tdt_SAroiEta;
   vector<vector<float> > *tdt_SAroiPhi;
   vector<vector<double> > *tdt_SAsuperPointR_BI;
   vector<vector<double> > *tdt_SAsuperPointR_BM;
   vector<vector<double> > *tdt_SAsuperPointR_BO;
   vector<vector<double> > *tdt_SAsuperPointR_EI;
   vector<vector<double> > *tdt_SAsuperPointR_EM;
   vector<vector<double> > *tdt_SAsuperPointR_EO;
   vector<vector<double> > *tdt_SAsuperPointR_EE;
   vector<vector<double> > *tdt_SAsuperPointR_CSC;
   vector<vector<double> > *tdt_SAsuperPointR_BEE;
   vector<vector<double> > *tdt_SAsuperPointR_BME;
   vector<vector<double> > *tdt_SAsuperPointZ_BI;
   vector<vector<double> > *tdt_SAsuperPointZ_BM;
   vector<vector<double> > *tdt_SAsuperPointZ_BO;
   vector<vector<double> > *tdt_SAsuperPointZ_EI;
   vector<vector<double> > *tdt_SAsuperPointZ_EM;
   vector<vector<double> > *tdt_SAsuperPointZ_EO;
   vector<vector<double> > *tdt_SAsuperPointZ_EE;
   vector<vector<double> > *tdt_SAsuperPointZ_CSC;
   vector<vector<double> > *tdt_SAsuperPointZ_BEE;
   vector<vector<double> > *tdt_SAsuperPointZ_BME;
   vector<vector<double> > *tdt_SAMPpt;
   vector<vector<double> > *tdt_SAMPeta;
   vector<vector<double> > *tdt_SAMPphi;
   vector<vector<double> > *tdt_SAMPetaMS;
   vector<vector<double> > *tdt_SAMPphiMS;
   vector<vector<int> > *tdt_SAMPsAddress;
   vector<vector<float> > *tdt_SAMProiEta;
   vector<vector<float> > *tdt_SAMProiPhi;
   vector<vector<double> > *tdt_SAMPsuperPointR_BI;
   vector<vector<double> > *tdt_SAMPsuperPointR_BM;
   vector<vector<double> > *tdt_SAMPsuperPointR_BO;
   vector<vector<double> > *tdt_SAMPsuperPointR_EI;
   vector<vector<double> > *tdt_SAMPsuperPointR_EM;
   vector<vector<double> > *tdt_SAMPsuperPointR_EO;
   vector<vector<double> > *tdt_SAMPsuperPointR_EE;
   vector<vector<double> > *tdt_SAMPsuperPointR_CSC;
   vector<vector<double> > *tdt_SAMPsuperPointR_BEE;
   vector<vector<double> > *tdt_SAMPsuperPointR_BME;
   vector<vector<double> > *tdt_SAMPsuperPointZ_BI;
   vector<vector<double> > *tdt_SAMPsuperPointZ_BM;
   vector<vector<double> > *tdt_SAMPsuperPointZ_BO;
   vector<vector<double> > *tdt_SAMPsuperPointZ_EI;
   vector<vector<double> > *tdt_SAMPsuperPointZ_EM;
   vector<vector<double> > *tdt_SAMPsuperPointZ_EO;
   vector<vector<double> > *tdt_SAMPsuperPointZ_EE;
   vector<vector<double> > *tdt_SAMPsuperPointZ_CSC;
   vector<vector<double> > *tdt_SAMPsuperPointZ_BEE;
   vector<vector<double> > *tdt_SAMPsuperPointZ_BME;
   vector<vector<double> > *tdt_CBpt;
   vector<vector<double> > *tdt_CBeta;
   vector<vector<double> > *tdt_CBphi;
   vector<vector<double> > *tdt_CBMPpt;
   vector<vector<double> > *tdt_CBMPeta;
   vector<vector<double> > *tdt_CBMPphi;
   vector<vector<double> > *tdt_CBidpt;
   vector<vector<double> > *tdt_CBideta;
   vector<vector<double> > *tdt_CBidphi;
   vector<vector<double> > *tdt_CBMPidpt;
   vector<vector<double> > *tdt_CBMPideta;
   vector<vector<double> > *tdt_CBMPidphi;
   vector<vector<double> > *tdt_CBsapt;
   vector<vector<double> > *tdt_CBsaeta;
   vector<vector<double> > *tdt_CBsaphi;
   vector<vector<double> > *tdt_CBMPsapt;
   vector<vector<double> > *tdt_CBMPsaeta;
   vector<vector<double> > *tdt_CBMPsaphi;
   Int_t           n_trig;
   vector<double>  *muon_pt;
   vector<double>  *muon_eta;
   vector<double>  *muon_phi;
   vector<double>  *muon_extEta;
   vector<double>  *muon_extPhi;
   vector<double>  *ftf_pt;
   vector<double>  *ftf_eta;
   vector<double>  *ftf_phi;
   vector<double>  *L1_eta;
   vector<double>  *L1_phi;
   vector<double>  *L1_thrValue;
   vector<int>     *L1_roiNum;
   vector<int>     *L1_roiSector;
   vector<int>     *L1_thrNumber;
   vector<bool>    *L1_isMoreCandInRoI;
   vector<int>     *SAMP_roiNumber;
   vector<int>     *SAMP_roiSector;
   vector<double>  *SAMP_pt;
   vector<double>  *SAMP_eta;
   vector<double>  *SAMP_phi;
   vector<double>  *SAMP_etaMS;
   vector<double>  *SAMP_phiMS;
   vector<int>     *SAMP_sAddress;
   vector<float>   *SAMP_roiEta;
   vector<float>   *SAMP_roiPhi;
   vector<double>  *SAMP_superPointR_BI;
   vector<double>  *SAMP_superPointR_BM;
   vector<double>  *SAMP_superPointR_BO;
   vector<double>  *SAMP_superPointR_EI;
   vector<double>  *SAMP_superPointR_EM;
   vector<double>  *SAMP_superPointR_EO;
   vector<double>  *SAMP_superPointR_EE;
   vector<double>  *SAMP_superPointR_CSC;
   vector<double>  *SAMP_superPointR_BEE;
   vector<double>  *SAMP_superPointR_BME;
   vector<double>  *SAMP_superPointZ_BI;
   vector<double>  *SAMP_superPointZ_BM;
   vector<double>  *SAMP_superPointZ_BO;
   vector<double>  *SAMP_superPointZ_EI;
   vector<double>  *SAMP_superPointZ_EM;
   vector<double>  *SAMP_superPointZ_EO;
   vector<double>  *SAMP_superPointZ_EE;
   vector<double>  *SAMP_superPointZ_CSC;
   vector<double>  *SAMP_superPointZ_BEE;
   vector<double>  *SAMP_superPointZ_BME;
   vector<int>     *SA_roiNumber;
   vector<int>     *SA_roiSector;
   vector<double>  *SA_pt;
   vector<double>  *SA_eta;
   vector<double>  *SA_phi;
   vector<double>  *SA_etaMS;
   vector<double>  *SA_phiMS;
   vector<int>     *SA_sAddress;
   vector<float>   *SA_roiEta;
   vector<float>   *SA_roiPhi;
   vector<double>  *SA_superPointR_BI;
   vector<double>  *SA_superPointR_BM;
   vector<double>  *SA_superPointR_BO;
   vector<double>  *SA_superPointR_EI;
   vector<double>  *SA_superPointR_EM;
   vector<double>  *SA_superPointR_EO;
   vector<double>  *SA_superPointR_EE;
   vector<double>  *SA_superPointR_CSC;
   vector<double>  *SA_superPointR_BEE;
   vector<double>  *SA_superPointR_BME;
   vector<double>  *SA_superPointZ_BI;
   vector<double>  *SA_superPointZ_BM;
   vector<double>  *SA_superPointZ_BO;
   vector<double>  *SA_superPointZ_EI;
   vector<double>  *SA_superPointZ_EM;
   vector<double>  *SA_superPointZ_EO;
   vector<double>  *SA_superPointZ_EE;
   vector<double>  *SA_superPointZ_CSC;
   vector<double>  *SA_superPointZ_BEE;
   vector<double>  *SA_superPointZ_BME;
   vector<double>  *CB_pt;
   vector<double>  *CB_eta;
   vector<double>  *CB_phi;
   vector<double>  *CB_idpt;
   vector<double>  *CB_ideta;
   vector<double>  *CB_idphi;
   vector<int>     *CB_roiNumber;
   vector<int>     *CB_roiSector;
   vector<double>  *CBMP_pt;
   vector<double>  *CBMP_eta;
   vector<double>  *CBMP_phi;
   vector<double>  *CBMP_idpt;
   vector<double>  *CBMP_ideta;
   vector<double>  *CBMP_idphi;
   vector<int>     *CBMP_roiNumber;
   vector<int>     *CBMP_roiSector;
   vector<double>  *EF_pt;
   vector<double>  *EF_eta;
   vector<double>  *EF_phi;

   // List of branches
   TBranch        *b_eventNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_trigname;   //!
   TBranch        *b_isPassedTrig;   //!
   TBranch        *b_isPassedL1_evt;   //!
   TBranch        *b_isPassedSA_evt;   //!
   TBranch        *b_isPassedCB_evt;   //!
   TBranch        *b_isPassedSAMP_evt;   //!
   TBranch        *b_isPassedCBMP_evt;   //!
   TBranch        *b_isPassedEF_evt;   //!
   TBranch        *b_isPassedL1;   //!
   TBranch        *b_isPassedSA;   //!
   TBranch        *b_isPassedCB;   //!
   TBranch        *b_isPassedSAMP;   //!
   TBranch        *b_isPassedCBMP;   //!
   TBranch        *b_isPassedEF;   //!
   TBranch        *b_tdt_L1RoINumber;   //!
   TBranch        *b_tdt_SARoINumber;   //!
   TBranch        *b_tdt_CBRoINumber;   //!
   TBranch        *b_tdt_SAMPRoINumber;   //!
   TBranch        *b_tdt_CBMPRoINumber;   //!
   TBranch        *b_tdt_L1RoISector;   //!
   TBranch        *b_tdt_SARoISector;   //!
   TBranch        *b_tdt_CBRoISector;   //!
   TBranch        *b_tdt_SAMPRoISector;   //!
   TBranch        *b_tdt_CBMPRoISector;   //!
   TBranch        *b_tdt_L1roieta;   //!
   TBranch        *b_tdt_L1roiphi;   //!
   TBranch        *b_tdt_L1isMoreCandInRoI;   //!
   TBranch        *b_tdt_SApt;   //!
   TBranch        *b_tdt_SAeta;   //!
   TBranch        *b_tdt_SAphi;   //!
   TBranch        *b_tdt_SAetaMS;   //!
   TBranch        *b_tdt_SAphiMS;   //!
   TBranch        *b_tdt_SAsAddress;   //!
   TBranch        *b_tdt_SAroiEta;   //!
   TBranch        *b_tdt_SAroiPhi;   //!
   TBranch        *b_tdt_SAsuperPointR_BI;   //!
   TBranch        *b_tdt_SAsuperPointR_BM;   //!
   TBranch        *b_tdt_SAsuperPointR_BO;   //!
   TBranch        *b_tdt_SAsuperPointR_EI;   //!
   TBranch        *b_tdt_SAsuperPointR_EM;   //!
   TBranch        *b_tdt_SAsuperPointR_EO;   //!
   TBranch        *b_tdt_SAsuperPointR_EE;   //!
   TBranch        *b_tdt_SAsuperPointR_CSC;   //!
   TBranch        *b_tdt_SAsuperPointR_BEE;   //!
   TBranch        *b_tdt_SAsuperPointR_BME;   //!
   TBranch        *b_tdt_SAsuperPointZ_BI;   //!
   TBranch        *b_tdt_SAsuperPointZ_BM;   //!
   TBranch        *b_tdt_SAsuperPointZ_BO;   //!
   TBranch        *b_tdt_SAsuperPointZ_EI;   //!
   TBranch        *b_tdt_SAsuperPointZ_EM;   //!
   TBranch        *b_tdt_SAsuperPointZ_EO;   //!
   TBranch        *b_tdt_SAsuperPointZ_EE;   //!
   TBranch        *b_tdt_SAsuperPointZ_CSC;   //!
   TBranch        *b_tdt_SAsuperPointZ_BEE;   //!
   TBranch        *b_tdt_SAsuperPointZ_BME;   //!
   TBranch        *b_tdt_SAMPpt;   //!
   TBranch        *b_tdt_SAMPeta;   //!
   TBranch        *b_tdt_SAMPphi;   //!
   TBranch        *b_tdt_SAMPetaMS;   //!
   TBranch        *b_tdt_SAMPphiMS;   //!
   TBranch        *b_tdt_SAMPsAddress;   //!
   TBranch        *b_tdt_SAMProiEta;   //!
   TBranch        *b_tdt_SAMProiPhi;   //!
   TBranch        *b_tdt_SAMPsuperPointR_BI;   //!
   TBranch        *b_tdt_SAMPsuperPointR_BM;   //!
   TBranch        *b_tdt_SAMPsuperPointR_BO;   //!
   TBranch        *b_tdt_SAMPsuperPointR_EI;   //!
   TBranch        *b_tdt_SAMPsuperPointR_EM;   //!
   TBranch        *b_tdt_SAMPsuperPointR_EO;   //!
   TBranch        *b_tdt_SAMPsuperPointR_EE;   //!
   TBranch        *b_tdt_SAMPsuperPointR_CSC;   //!
   TBranch        *b_tdt_SAMPsuperPointR_BEE;   //!
   TBranch        *b_tdt_SAMPsuperPointR_BME;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_BI;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_BM;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_BO;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_EI;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_EM;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_EO;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_EE;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_CSC;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_BEE;   //!
   TBranch        *b_tdt_SAMPsuperPointZ_BME;   //!
   TBranch        *b_tdt_CBpt;   //!
   TBranch        *b_tdt_CBeta;   //!
   TBranch        *b_tdt_CBphi;   //!
   TBranch        *b_tdt_CBMPpt;   //!
   TBranch        *b_tdt_CBMPeta;   //!
   TBranch        *b_tdt_CBMPphi;   //!
   TBranch        *b_tdt_CBidpt;   //!
   TBranch        *b_tdt_CBideta;   //!
   TBranch        *b_tdt_CBidphi;   //!
   TBranch        *b_tdt_CBMPidpt;   //!
   TBranch        *b_tdt_CBMPideta;   //!
   TBranch        *b_tdt_CBMPidphi;   //!
   TBranch        *b_tdt_CBsapt;   //!
   TBranch        *b_tdt_CBsaeta;   //!
   TBranch        *b_tdt_CBsaphi;   //!
   TBranch        *b_tdt_CBMPsapt;   //!
   TBranch        *b_tdt_CBMPsaeta;   //!
   TBranch        *b_tdt_CBMPsaphi;   //!
   TBranch        *b_n_trig;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_extEta;   //!
   TBranch        *b_muon_extPhi;   //!
   TBranch        *b_ftf_pt;   //!
   TBranch        *b_ftf_eta;   //!
   TBranch        *b_ftf_phi;   //!
   TBranch        *b_L1_eta;   //!
   TBranch        *b_L1_phi;   //!
   TBranch        *b_L1_thrValue;   //!
   TBranch        *b_L1_roiNum;   //!
   TBranch        *b_L1_roiSector;   //!
   TBranch        *b_L1_thrNumber;   //!
   TBranch        *b_L1_isMoreCandInRoI;   //!
   TBranch        *b_SAMP_roiNumber;   //!
   TBranch        *b_SAMP_roiSector;   //!
   TBranch        *b_SAMP_pt;   //!
   TBranch        *b_SAMP_eta;   //!
   TBranch        *b_SAMP_phi;   //!
   TBranch        *b_SAMP_etaMS;   //!
   TBranch        *b_SAMP_phiMS;   //!
   TBranch        *b_SAMP_sAddress;   //!
   TBranch        *b_SAMP_roiEta;   //!
   TBranch        *b_SAMP_roiPhi;   //!
   TBranch        *b_SAMP_superPointR_BI;   //!
   TBranch        *b_SAMP_superPointR_BM;   //!
   TBranch        *b_SAMP_superPointR_BO;   //!
   TBranch        *b_SAMP_superPointR_EI;   //!
   TBranch        *b_SAMP_superPointR_EM;   //!
   TBranch        *b_SAMP_superPointR_EO;   //!
   TBranch        *b_SAMP_superPointR_EE;   //!
   TBranch        *b_SAMP_superPointR_CSC;   //!
   TBranch        *b_SAMP_superPointR_BEE;   //!
   TBranch        *b_SAMP_superPointR_BME;   //!
   TBranch        *b_SAMP_superPointZ_BI;   //!
   TBranch        *b_SAMP_superPointZ_BM;   //!
   TBranch        *b_SAMP_superPointZ_BO;   //!
   TBranch        *b_SAMP_superPointZ_EI;   //!
   TBranch        *b_SAMP_superPointZ_EM;   //!
   TBranch        *b_SAMP_superPointZ_EO;   //!
   TBranch        *b_SAMP_superPointZ_EE;   //!
   TBranch        *b_SAMP_superPointZ_CSC;   //!
   TBranch        *b_SAMP_superPointZ_BEE;   //!
   TBranch        *b_SAMP_superPointZ_BME;   //!
   TBranch        *b_SA_roiNumber;   //!
   TBranch        *b_SA_roiSector;   //!
   TBranch        *b_SA_pt;   //!
   TBranch        *b_SA_eta;   //!
   TBranch        *b_SA_phi;   //!
   TBranch        *b_SA_etaMS;   //!
   TBranch        *b_SA_phiMS;   //!
   TBranch        *b_SA_sAddress;   //!
   TBranch        *b_SA_roiEta;   //!
   TBranch        *b_SA_roiPhi;   //!
   TBranch        *b_SA_superPointR_BI;   //!
   TBranch        *b_SA_superPointR_BM;   //!
   TBranch        *b_SA_superPointR_BO;   //!
   TBranch        *b_SA_superPointR_EI;   //!
   TBranch        *b_SA_superPointR_EM;   //!
   TBranch        *b_SA_superPointR_EO;   //!
   TBranch        *b_SA_superPointR_EE;   //!
   TBranch        *b_SA_superPointR_CSC;   //!
   TBranch        *b_SA_superPointR_BEE;   //!
   TBranch        *b_SA_superPointR_BME;   //!
   TBranch        *b_SA_superPointZ_BI;   //!
   TBranch        *b_SA_superPointZ_BM;   //!
   TBranch        *b_SA_superPointZ_BO;   //!
   TBranch        *b_SA_superPointZ_EI;   //!
   TBranch        *b_SA_superPointZ_EM;   //!
   TBranch        *b_SA_superPointZ_EO;   //!
   TBranch        *b_SA_superPointZ_EE;   //!
   TBranch        *b_SA_superPointZ_CSC;   //!
   TBranch        *b_SA_superPointZ_BEE;   //!
   TBranch        *b_SA_superPointZ_BME;   //!
   TBranch        *b_CB_pt;   //!
   TBranch        *b_CB_eta;   //!
   TBranch        *b_CB_phi;   //!
   TBranch        *b_CB_idpt;   //!
   TBranch        *b_CB_ideta;   //!
   TBranch        *b_CB_idphi;   //!
   TBranch        *b_CB_roiNumber;   //!
   TBranch        *b_CB_roiSector;   //!
   TBranch        *b_CBMP_pt;   //!
   TBranch        *b_CBMP_eta;   //!
   TBranch        *b_CBMP_phi;   //!
   TBranch        *b_CBMP_idpt;   //!
   TBranch        *b_CBMP_ideta;   //!
   TBranch        *b_CBMP_idphi;   //!
   TBranch        *b_CBMP_roiNumber;   //!
   TBranch        *b_CBMP_roiSector;   //!
   TBranch        *b_EF_pt;   //!
   TBranch        *b_EF_eta;   //!
   TBranch        *b_EF_phi;   //!

   NtupleAnalysisTool(TTree *tree=0);
   virtual ~NtupleAnalysisTool();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(HistData histData, int begin_entry, int limit_entry, std::string& chain);
   virtual void     Display(int begin_entry, int limit_entry, std::string& chain, TString pdf);
   virtual void     DrawHist(TString outputpdf, HistData histData);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NtupleAnalysisTool_cxx
NtupleAnalysisTool::NtupleAnalysisTool(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root");
      }
      f->GetObject("t_tap",tree);

   }
   Init(tree);
}

NtupleAnalysisTool::~NtupleAnalysisTool()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t NtupleAnalysisTool::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t NtupleAnalysisTool::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void NtupleAnalysisTool::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   trigname = 0;
   isPassedTrig = 0;
   isPassedL1_evt = 0;
   isPassedSA_evt = 0;
   isPassedCB_evt = 0;
   isPassedSAMP_evt = 0;
   isPassedCBMP_evt = 0;
   isPassedEF_evt = 0;
   isPassedL1 = 0;
   isPassedSA = 0;
   isPassedCB = 0;
   isPassedSAMP = 0;
   isPassedCBMP = 0;
   isPassedEF = 0;
   tdt_L1RoINumber = 0;
   tdt_SARoINumber = 0;
   tdt_CBRoINumber = 0;
   tdt_SAMPRoINumber = 0;
   tdt_CBMPRoINumber = 0;
   tdt_L1RoISector = 0;
   tdt_SARoISector = 0;
   tdt_CBRoISector = 0;
   tdt_SAMPRoISector = 0;
   tdt_CBMPRoISector = 0;
   tdt_L1roieta = 0;
   tdt_L1roiphi = 0;
   tdt_L1isMoreCandInRoI = 0;
   tdt_SApt = 0;
   tdt_SAeta = 0;
   tdt_SAphi = 0;
   tdt_SAetaMS = 0;
   tdt_SAphiMS = 0;
   tdt_SAsAddress = 0;
   tdt_SAroiEta = 0;
   tdt_SAroiPhi = 0;
   tdt_SAsuperPointR_BI = 0;
   tdt_SAsuperPointR_BM = 0;
   tdt_SAsuperPointR_BO = 0;
   tdt_SAsuperPointR_EI = 0;
   tdt_SAsuperPointR_EM = 0;
   tdt_SAsuperPointR_EO = 0;
   tdt_SAsuperPointR_EE = 0;
   tdt_SAsuperPointR_CSC = 0;
   tdt_SAsuperPointR_BEE = 0;
   tdt_SAsuperPointR_BME = 0;
   tdt_SAsuperPointZ_BI = 0;
   tdt_SAsuperPointZ_BM = 0;
   tdt_SAsuperPointZ_BO = 0;
   tdt_SAsuperPointZ_EI = 0;
   tdt_SAsuperPointZ_EM = 0;
   tdt_SAsuperPointZ_EO = 0;
   tdt_SAsuperPointZ_EE = 0;
   tdt_SAsuperPointZ_CSC = 0;
   tdt_SAsuperPointZ_BEE = 0;
   tdt_SAsuperPointZ_BME = 0;
   tdt_SAMPpt = 0;
   tdt_SAMPeta = 0;
   tdt_SAMPphi = 0;
   tdt_SAMPetaMS = 0;
   tdt_SAMPphiMS = 0;
   tdt_SAMPsAddress = 0;
   tdt_SAMProiEta = 0;
   tdt_SAMProiPhi = 0;
   tdt_SAMPsuperPointR_BI = 0;
   tdt_SAMPsuperPointR_BM = 0;
   tdt_SAMPsuperPointR_BO = 0;
   tdt_SAMPsuperPointR_EI = 0;
   tdt_SAMPsuperPointR_EM = 0;
   tdt_SAMPsuperPointR_EO = 0;
   tdt_SAMPsuperPointR_EE = 0;
   tdt_SAMPsuperPointR_CSC = 0;
   tdt_SAMPsuperPointR_BEE = 0;
   tdt_SAMPsuperPointR_BME = 0;
   tdt_SAMPsuperPointZ_BI = 0;
   tdt_SAMPsuperPointZ_BM = 0;
   tdt_SAMPsuperPointZ_BO = 0;
   tdt_SAMPsuperPointZ_EI = 0;
   tdt_SAMPsuperPointZ_EM = 0;
   tdt_SAMPsuperPointZ_EO = 0;
   tdt_SAMPsuperPointZ_EE = 0;
   tdt_SAMPsuperPointZ_CSC = 0;
   tdt_SAMPsuperPointZ_BEE = 0;
   tdt_SAMPsuperPointZ_BME = 0;
   tdt_CBpt = 0;
   tdt_CBeta = 0;
   tdt_CBphi = 0;
   tdt_CBMPpt = 0;
   tdt_CBMPeta = 0;
   tdt_CBMPphi = 0;
   tdt_CBidpt = 0;
   tdt_CBideta = 0;
   tdt_CBidphi = 0;
   tdt_CBMPidpt = 0;
   tdt_CBMPideta = 0;
   tdt_CBMPidphi = 0;
   tdt_CBsapt = 0;
   tdt_CBsaeta = 0;
   tdt_CBsaphi = 0;
   tdt_CBMPsapt = 0;
   tdt_CBMPsaeta = 0;
   tdt_CBMPsaphi = 0;
   muon_pt = 0;
   muon_eta = 0;
   muon_phi = 0;
   muon_extEta = 0;
   muon_extPhi = 0;
   ftf_pt = 0;
   ftf_eta = 0;
   ftf_phi = 0;
   L1_eta = 0;
   L1_phi = 0;
   L1_thrValue = 0;
   L1_roiNum = 0;
   L1_roiSector = 0;
   L1_thrNumber = 0;
   L1_isMoreCandInRoI = 0;
   SAMP_roiNumber = 0;
   SAMP_roiSector = 0;
   SAMP_pt = 0;
   SAMP_eta = 0;
   SAMP_phi = 0;
   SAMP_etaMS = 0;
   SAMP_phiMS = 0;
   SAMP_sAddress = 0;
   SAMP_roiEta = 0;
   SAMP_roiPhi = 0;
   SAMP_superPointR_BI = 0;
   SAMP_superPointR_BM = 0;
   SAMP_superPointR_BO = 0;
   SAMP_superPointR_EI = 0;
   SAMP_superPointR_EM = 0;
   SAMP_superPointR_EO = 0;
   SAMP_superPointR_EE = 0;
   SAMP_superPointR_CSC = 0;
   SAMP_superPointR_BEE = 0;
   SAMP_superPointR_BME = 0;
   SAMP_superPointZ_BI = 0;
   SAMP_superPointZ_BM = 0;
   SAMP_superPointZ_BO = 0;
   SAMP_superPointZ_EI = 0;
   SAMP_superPointZ_EM = 0;
   SAMP_superPointZ_EO = 0;
   SAMP_superPointZ_EE = 0;
   SAMP_superPointZ_CSC = 0;
   SAMP_superPointZ_BEE = 0;
   SAMP_superPointZ_BME = 0;
   SA_roiNumber = 0;
   SA_roiSector = 0;
   SA_pt = 0;
   SA_eta = 0;
   SA_phi = 0;
   SA_etaMS = 0;
   SA_phiMS = 0;
   SA_sAddress = 0;
   SA_roiEta = 0;
   SA_roiPhi = 0;
   SA_superPointR_BI = 0;
   SA_superPointR_BM = 0;
   SA_superPointR_BO = 0;
   SA_superPointR_EI = 0;
   SA_superPointR_EM = 0;
   SA_superPointR_EO = 0;
   SA_superPointR_EE = 0;
   SA_superPointR_CSC = 0;
   SA_superPointR_BEE = 0;
   SA_superPointR_BME = 0;
   SA_superPointZ_BI = 0;
   SA_superPointZ_BM = 0;
   SA_superPointZ_BO = 0;
   SA_superPointZ_EI = 0;
   SA_superPointZ_EM = 0;
   SA_superPointZ_EO = 0;
   SA_superPointZ_EE = 0;
   SA_superPointZ_CSC = 0;
   SA_superPointZ_BEE = 0;
   SA_superPointZ_BME = 0;
   CB_pt = 0;
   CB_eta = 0;
   CB_phi = 0;
   CB_idpt = 0;
   CB_ideta = 0;
   CB_idphi = 0;
   CB_roiNumber = 0;
   CB_roiSector = 0;
   CBMP_pt = 0;
   CBMP_eta = 0;
   CBMP_phi = 0;
   CBMP_idpt = 0;
   CBMP_ideta = 0;
   CBMP_idphi = 0;
   CBMP_roiNumber = 0;
   CBMP_roiSector = 0;
   EF_pt = 0;
   EF_eta = 0;
   EF_phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("trigname", &trigname, &b_trigname);
   fChain->SetBranchAddress("isPassedTrig", &isPassedTrig, &b_isPassedTrig);
   fChain->SetBranchAddress("isPassedL1_evt", &isPassedL1_evt, &b_isPassedL1_evt);
   fChain->SetBranchAddress("isPassedSA_evt", &isPassedSA_evt, &b_isPassedSA_evt);
   fChain->SetBranchAddress("isPassedCB_evt", &isPassedCB_evt, &b_isPassedCB_evt);
   fChain->SetBranchAddress("isPassedSAMP_evt", &isPassedSAMP_evt, &b_isPassedSAMP_evt);
   fChain->SetBranchAddress("isPassedCBMP_evt", &isPassedCBMP_evt, &b_isPassedCBMP_evt);
   fChain->SetBranchAddress("isPassedEF_evt", &isPassedEF_evt, &b_isPassedEF_evt);
   fChain->SetBranchAddress("isPassedL1", &isPassedL1, &b_isPassedL1);
   fChain->SetBranchAddress("isPassedSA", &isPassedSA, &b_isPassedSA);
   fChain->SetBranchAddress("isPassedCB", &isPassedCB, &b_isPassedCB);
   fChain->SetBranchAddress("isPassedSAMP", &isPassedSAMP, &b_isPassedSAMP);
   fChain->SetBranchAddress("isPassedCBMP", &isPassedCBMP, &b_isPassedCBMP);
   fChain->SetBranchAddress("isPassedEF", &isPassedEF, &b_isPassedEF);
   fChain->SetBranchAddress("tdt_L1RoINumber", &tdt_L1RoINumber, &b_tdt_L1RoINumber);
   fChain->SetBranchAddress("tdt_SARoINumber", &tdt_SARoINumber, &b_tdt_SARoINumber);
   fChain->SetBranchAddress("tdt_CBRoINumber", &tdt_CBRoINumber, &b_tdt_CBRoINumber);
   fChain->SetBranchAddress("tdt_SAMPRoINumber", &tdt_SAMPRoINumber, &b_tdt_SAMPRoINumber);
   fChain->SetBranchAddress("tdt_CBMPRoINumber", &tdt_CBMPRoINumber, &b_tdt_CBMPRoINumber);
   fChain->SetBranchAddress("tdt_L1RoISector", &tdt_L1RoISector, &b_tdt_L1RoISector);
   fChain->SetBranchAddress("tdt_SARoISector", &tdt_SARoISector, &b_tdt_SARoISector);
   fChain->SetBranchAddress("tdt_CBRoISector", &tdt_CBRoISector, &b_tdt_CBRoISector);
   fChain->SetBranchAddress("tdt_SAMPRoISector", &tdt_SAMPRoISector, &b_tdt_SAMPRoISector);
   fChain->SetBranchAddress("tdt_CBMPRoISector", &tdt_CBMPRoISector, &b_tdt_CBMPRoISector);
   fChain->SetBranchAddress("tdt_L1roieta", &tdt_L1roieta, &b_tdt_L1roieta);
   fChain->SetBranchAddress("tdt_L1roiphi", &tdt_L1roiphi, &b_tdt_L1roiphi);
   fChain->SetBranchAddress("tdt_L1isMoreCandInRoI", &tdt_L1isMoreCandInRoI, &b_tdt_L1isMoreCandInRoI);
   fChain->SetBranchAddress("tdt_SApt", &tdt_SApt, &b_tdt_SApt);
   fChain->SetBranchAddress("tdt_SAeta", &tdt_SAeta, &b_tdt_SAeta);
   fChain->SetBranchAddress("tdt_SAphi", &tdt_SAphi, &b_tdt_SAphi);
   fChain->SetBranchAddress("tdt_SAetaMS", &tdt_SAetaMS, &b_tdt_SAetaMS);
   fChain->SetBranchAddress("tdt_SAphiMS", &tdt_SAphiMS, &b_tdt_SAphiMS);
   fChain->SetBranchAddress("tdt_SAsAddress", &tdt_SAsAddress, &b_tdt_SAsAddress);
   fChain->SetBranchAddress("tdt_SAroiEta", &tdt_SAroiEta, &b_tdt_SAroiEta);
   fChain->SetBranchAddress("tdt_SAroiPhi", &tdt_SAroiPhi, &b_tdt_SAroiPhi);
   fChain->SetBranchAddress("tdt_SAsuperPointR_BI", &tdt_SAsuperPointR_BI, &b_tdt_SAsuperPointR_BI);
   fChain->SetBranchAddress("tdt_SAsuperPointR_BM", &tdt_SAsuperPointR_BM, &b_tdt_SAsuperPointR_BM);
   fChain->SetBranchAddress("tdt_SAsuperPointR_BO", &tdt_SAsuperPointR_BO, &b_tdt_SAsuperPointR_BO);
   fChain->SetBranchAddress("tdt_SAsuperPointR_EI", &tdt_SAsuperPointR_EI, &b_tdt_SAsuperPointR_EI);
   fChain->SetBranchAddress("tdt_SAsuperPointR_EM", &tdt_SAsuperPointR_EM, &b_tdt_SAsuperPointR_EM);
   fChain->SetBranchAddress("tdt_SAsuperPointR_EO", &tdt_SAsuperPointR_EO, &b_tdt_SAsuperPointR_EO);
   fChain->SetBranchAddress("tdt_SAsuperPointR_EE", &tdt_SAsuperPointR_EE, &b_tdt_SAsuperPointR_EE);
   fChain->SetBranchAddress("tdt_SAsuperPointR_CSC", &tdt_SAsuperPointR_CSC, &b_tdt_SAsuperPointR_CSC);
   fChain->SetBranchAddress("tdt_SAsuperPointR_BEE", &tdt_SAsuperPointR_BEE, &b_tdt_SAsuperPointR_BEE);
   fChain->SetBranchAddress("tdt_SAsuperPointR_BME", &tdt_SAsuperPointR_BME, &b_tdt_SAsuperPointR_BME);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_BI", &tdt_SAsuperPointZ_BI, &b_tdt_SAsuperPointZ_BI);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_BM", &tdt_SAsuperPointZ_BM, &b_tdt_SAsuperPointZ_BM);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_BO", &tdt_SAsuperPointZ_BO, &b_tdt_SAsuperPointZ_BO);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_EI", &tdt_SAsuperPointZ_EI, &b_tdt_SAsuperPointZ_EI);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_EM", &tdt_SAsuperPointZ_EM, &b_tdt_SAsuperPointZ_EM);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_EO", &tdt_SAsuperPointZ_EO, &b_tdt_SAsuperPointZ_EO);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_EE", &tdt_SAsuperPointZ_EE, &b_tdt_SAsuperPointZ_EE);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_CSC", &tdt_SAsuperPointZ_CSC, &b_tdt_SAsuperPointZ_CSC);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_BEE", &tdt_SAsuperPointZ_BEE, &b_tdt_SAsuperPointZ_BEE);
   fChain->SetBranchAddress("tdt_SAsuperPointZ_BME", &tdt_SAsuperPointZ_BME, &b_tdt_SAsuperPointZ_BME);
   fChain->SetBranchAddress("tdt_SAMPpt", &tdt_SAMPpt, &b_tdt_SAMPpt);
   fChain->SetBranchAddress("tdt_SAMPeta", &tdt_SAMPeta, &b_tdt_SAMPeta);
   fChain->SetBranchAddress("tdt_SAMPphi", &tdt_SAMPphi, &b_tdt_SAMPphi);
   fChain->SetBranchAddress("tdt_SAMPetaMS", &tdt_SAMPetaMS, &b_tdt_SAMPetaMS);
   fChain->SetBranchAddress("tdt_SAMPphiMS", &tdt_SAMPphiMS, &b_tdt_SAMPphiMS);
   fChain->SetBranchAddress("tdt_SAMPsAddress", &tdt_SAMPsAddress, &b_tdt_SAMPsAddress);
   fChain->SetBranchAddress("tdt_SAMProiEta", &tdt_SAMProiEta, &b_tdt_SAMProiEta);
   fChain->SetBranchAddress("tdt_SAMProiPhi", &tdt_SAMProiPhi, &b_tdt_SAMProiPhi);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_BI", &tdt_SAMPsuperPointR_BI, &b_tdt_SAMPsuperPointR_BI);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_BM", &tdt_SAMPsuperPointR_BM, &b_tdt_SAMPsuperPointR_BM);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_BO", &tdt_SAMPsuperPointR_BO, &b_tdt_SAMPsuperPointR_BO);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_EI", &tdt_SAMPsuperPointR_EI, &b_tdt_SAMPsuperPointR_EI);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_EM", &tdt_SAMPsuperPointR_EM, &b_tdt_SAMPsuperPointR_EM);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_EO", &tdt_SAMPsuperPointR_EO, &b_tdt_SAMPsuperPointR_EO);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_EE", &tdt_SAMPsuperPointR_EE, &b_tdt_SAMPsuperPointR_EE);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_CSC", &tdt_SAMPsuperPointR_CSC, &b_tdt_SAMPsuperPointR_CSC);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_BEE", &tdt_SAMPsuperPointR_BEE, &b_tdt_SAMPsuperPointR_BEE);
   fChain->SetBranchAddress("tdt_SAMPsuperPointR_BME", &tdt_SAMPsuperPointR_BME, &b_tdt_SAMPsuperPointR_BME);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_BI", &tdt_SAMPsuperPointZ_BI, &b_tdt_SAMPsuperPointZ_BI);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_BM", &tdt_SAMPsuperPointZ_BM, &b_tdt_SAMPsuperPointZ_BM);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_BO", &tdt_SAMPsuperPointZ_BO, &b_tdt_SAMPsuperPointZ_BO);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_EI", &tdt_SAMPsuperPointZ_EI, &b_tdt_SAMPsuperPointZ_EI);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_EM", &tdt_SAMPsuperPointZ_EM, &b_tdt_SAMPsuperPointZ_EM);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_EO", &tdt_SAMPsuperPointZ_EO, &b_tdt_SAMPsuperPointZ_EO);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_EE", &tdt_SAMPsuperPointZ_EE, &b_tdt_SAMPsuperPointZ_EE);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_CSC", &tdt_SAMPsuperPointZ_CSC, &b_tdt_SAMPsuperPointZ_CSC);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_BEE", &tdt_SAMPsuperPointZ_BEE, &b_tdt_SAMPsuperPointZ_BEE);
   fChain->SetBranchAddress("tdt_SAMPsuperPointZ_BME", &tdt_SAMPsuperPointZ_BME, &b_tdt_SAMPsuperPointZ_BME);
   fChain->SetBranchAddress("tdt_CBpt", &tdt_CBpt, &b_tdt_CBpt);
   fChain->SetBranchAddress("tdt_CBeta", &tdt_CBeta, &b_tdt_CBeta);
   fChain->SetBranchAddress("tdt_CBphi", &tdt_CBphi, &b_tdt_CBphi);
   fChain->SetBranchAddress("tdt_CBMPpt", &tdt_CBMPpt, &b_tdt_CBMPpt);
   fChain->SetBranchAddress("tdt_CBMPeta", &tdt_CBMPeta, &b_tdt_CBMPeta);
   fChain->SetBranchAddress("tdt_CBMPphi", &tdt_CBMPphi, &b_tdt_CBMPphi);
   fChain->SetBranchAddress("tdt_CBidpt", &tdt_CBidpt, &b_tdt_CBidpt);
   fChain->SetBranchAddress("tdt_CBideta", &tdt_CBideta, &b_tdt_CBideta);
   fChain->SetBranchAddress("tdt_CBidphi", &tdt_CBidphi, &b_tdt_CBidphi);
   fChain->SetBranchAddress("tdt_CBMPidpt", &tdt_CBMPidpt, &b_tdt_CBMPidpt);
   fChain->SetBranchAddress("tdt_CBMPideta", &tdt_CBMPideta, &b_tdt_CBMPideta);
   fChain->SetBranchAddress("tdt_CBMPidphi", &tdt_CBMPidphi, &b_tdt_CBMPidphi);
   fChain->SetBranchAddress("tdt_CBsapt", &tdt_CBsapt, &b_tdt_CBsapt);
   fChain->SetBranchAddress("tdt_CBsaeta", &tdt_CBsaeta, &b_tdt_CBsaeta);
   fChain->SetBranchAddress("tdt_CBsaphi", &tdt_CBsaphi, &b_tdt_CBsaphi);
   fChain->SetBranchAddress("tdt_CBMPsapt", &tdt_CBMPsapt, &b_tdt_CBMPsapt);
   fChain->SetBranchAddress("tdt_CBMPsaeta", &tdt_CBMPsaeta, &b_tdt_CBMPsaeta);
   fChain->SetBranchAddress("tdt_CBMPsaphi", &tdt_CBMPsaphi, &b_tdt_CBMPsaphi);
   fChain->SetBranchAddress("n_trig", &n_trig, &b_n_trig);
   fChain->SetBranchAddress("muon_pt", &muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", &muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_extEta", &muon_extEta, &b_muon_extEta);
   fChain->SetBranchAddress("muon_extPhi", &muon_extPhi, &b_muon_extPhi);
   fChain->SetBranchAddress("ftf_pt", &ftf_pt, &b_ftf_pt);
   fChain->SetBranchAddress("ftf_eta", &ftf_eta, &b_ftf_eta);
   fChain->SetBranchAddress("ftf_phi", &ftf_phi, &b_ftf_phi);
   fChain->SetBranchAddress("L1_eta", &L1_eta, &b_L1_eta);
   fChain->SetBranchAddress("L1_phi", &L1_phi, &b_L1_phi);
   fChain->SetBranchAddress("L1_thrValue", &L1_thrValue, &b_L1_thrValue);
   fChain->SetBranchAddress("L1_roiNum", &L1_roiNum, &b_L1_roiNum);
   fChain->SetBranchAddress("L1_roiSector", &L1_roiSector, &b_L1_roiSector);
   fChain->SetBranchAddress("L1_thrNumber", &L1_thrNumber, &b_L1_thrNumber);
   fChain->SetBranchAddress("L1_isMoreCandInRoI", &L1_isMoreCandInRoI, &b_L1_isMoreCandInRoI);
   fChain->SetBranchAddress("SAMP_roiNumber", &SAMP_roiNumber, &b_SAMP_roiNumber);
   fChain->SetBranchAddress("SAMP_roiSector", &SAMP_roiSector, &b_SAMP_roiSector);
   fChain->SetBranchAddress("SAMP_pt", &SAMP_pt, &b_SAMP_pt);
   fChain->SetBranchAddress("SAMP_eta", &SAMP_eta, &b_SAMP_eta);
   fChain->SetBranchAddress("SAMP_phi", &SAMP_phi, &b_SAMP_phi);
   fChain->SetBranchAddress("SAMP_etaMS", &SAMP_etaMS, &b_SAMP_etaMS);
   fChain->SetBranchAddress("SAMP_phiMS", &SAMP_phiMS, &b_SAMP_phiMS);
   fChain->SetBranchAddress("SAMP_sAddress", &SAMP_sAddress, &b_SAMP_sAddress);
   fChain->SetBranchAddress("SAMP_roiEta", &SAMP_roiEta, &b_SAMP_roiEta);
   fChain->SetBranchAddress("SAMP_roiPhi", &SAMP_roiPhi, &b_SAMP_roiPhi);
   fChain->SetBranchAddress("SAMP_superPointR_BI", &SAMP_superPointR_BI, &b_SAMP_superPointR_BI);
   fChain->SetBranchAddress("SAMP_superPointR_BM", &SAMP_superPointR_BM, &b_SAMP_superPointR_BM);
   fChain->SetBranchAddress("SAMP_superPointR_BO", &SAMP_superPointR_BO, &b_SAMP_superPointR_BO);
   fChain->SetBranchAddress("SAMP_superPointR_EI", &SAMP_superPointR_EI, &b_SAMP_superPointR_EI);
   fChain->SetBranchAddress("SAMP_superPointR_EM", &SAMP_superPointR_EM, &b_SAMP_superPointR_EM);
   fChain->SetBranchAddress("SAMP_superPointR_EO", &SAMP_superPointR_EO, &b_SAMP_superPointR_EO);
   fChain->SetBranchAddress("SAMP_superPointR_EE", &SAMP_superPointR_EE, &b_SAMP_superPointR_EE);
   fChain->SetBranchAddress("SAMP_superPointR_CSC", &SAMP_superPointR_CSC, &b_SAMP_superPointR_CSC);
   fChain->SetBranchAddress("SAMP_superPointR_BEE", &SAMP_superPointR_BEE, &b_SAMP_superPointR_BEE);
   fChain->SetBranchAddress("SAMP_superPointR_BME", &SAMP_superPointR_BME, &b_SAMP_superPointR_BME);
   fChain->SetBranchAddress("SAMP_superPointZ_BI", &SAMP_superPointZ_BI, &b_SAMP_superPointZ_BI);
   fChain->SetBranchAddress("SAMP_superPointZ_BM", &SAMP_superPointZ_BM, &b_SAMP_superPointZ_BM);
   fChain->SetBranchAddress("SAMP_superPointZ_BO", &SAMP_superPointZ_BO, &b_SAMP_superPointZ_BO);
   fChain->SetBranchAddress("SAMP_superPointZ_EI", &SAMP_superPointZ_EI, &b_SAMP_superPointZ_EI);
   fChain->SetBranchAddress("SAMP_superPointZ_EM", &SAMP_superPointZ_EM, &b_SAMP_superPointZ_EM);
   fChain->SetBranchAddress("SAMP_superPointZ_EO", &SAMP_superPointZ_EO, &b_SAMP_superPointZ_EO);
   fChain->SetBranchAddress("SAMP_superPointZ_EE", &SAMP_superPointZ_EE, &b_SAMP_superPointZ_EE);
   fChain->SetBranchAddress("SAMP_superPointZ_CSC", &SAMP_superPointZ_CSC, &b_SAMP_superPointZ_CSC);
   fChain->SetBranchAddress("SAMP_superPointZ_BEE", &SAMP_superPointZ_BEE, &b_SAMP_superPointZ_BEE);
   fChain->SetBranchAddress("SAMP_superPointZ_BME", &SAMP_superPointZ_BME, &b_SAMP_superPointZ_BME);
   fChain->SetBranchAddress("SA_roiNumber", &SA_roiNumber, &b_SA_roiNumber);
   fChain->SetBranchAddress("SA_roiSector", &SA_roiSector, &b_SA_roiSector);
   fChain->SetBranchAddress("SA_pt", &SA_pt, &b_SA_pt);
   fChain->SetBranchAddress("SA_eta", &SA_eta, &b_SA_eta);
   fChain->SetBranchAddress("SA_phi", &SA_phi, &b_SA_phi);
   fChain->SetBranchAddress("SA_etaMS", &SA_etaMS, &b_SA_etaMS);
   fChain->SetBranchAddress("SA_phiMS", &SA_phiMS, &b_SA_phiMS);
   fChain->SetBranchAddress("SA_sAddress", &SA_sAddress, &b_SA_sAddress);
   fChain->SetBranchAddress("SA_roiEta", &SA_roiEta, &b_SA_roiEta);
   fChain->SetBranchAddress("SA_roiPhi", &SA_roiPhi, &b_SA_roiPhi);
   fChain->SetBranchAddress("SA_superPointR_BI", &SA_superPointR_BI, &b_SA_superPointR_BI);
   fChain->SetBranchAddress("SA_superPointR_BM", &SA_superPointR_BM, &b_SA_superPointR_BM);
   fChain->SetBranchAddress("SA_superPointR_BO", &SA_superPointR_BO, &b_SA_superPointR_BO);
   fChain->SetBranchAddress("SA_superPointR_EI", &SA_superPointR_EI, &b_SA_superPointR_EI);
   fChain->SetBranchAddress("SA_superPointR_EM", &SA_superPointR_EM, &b_SA_superPointR_EM);
   fChain->SetBranchAddress("SA_superPointR_EO", &SA_superPointR_EO, &b_SA_superPointR_EO);
   fChain->SetBranchAddress("SA_superPointR_EE", &SA_superPointR_EE, &b_SA_superPointR_EE);
   fChain->SetBranchAddress("SA_superPointR_CSC", &SA_superPointR_CSC, &b_SA_superPointR_CSC);
   fChain->SetBranchAddress("SA_superPointR_BEE", &SA_superPointR_BEE, &b_SA_superPointR_BEE);
   fChain->SetBranchAddress("SA_superPointR_BME", &SA_superPointR_BME, &b_SA_superPointR_BME);
   fChain->SetBranchAddress("SA_superPointZ_BI", &SA_superPointZ_BI, &b_SA_superPointZ_BI);
   fChain->SetBranchAddress("SA_superPointZ_BM", &SA_superPointZ_BM, &b_SA_superPointZ_BM);
   fChain->SetBranchAddress("SA_superPointZ_BO", &SA_superPointZ_BO, &b_SA_superPointZ_BO);
   fChain->SetBranchAddress("SA_superPointZ_EI", &SA_superPointZ_EI, &b_SA_superPointZ_EI);
   fChain->SetBranchAddress("SA_superPointZ_EM", &SA_superPointZ_EM, &b_SA_superPointZ_EM);
   fChain->SetBranchAddress("SA_superPointZ_EO", &SA_superPointZ_EO, &b_SA_superPointZ_EO);
   fChain->SetBranchAddress("SA_superPointZ_EE", &SA_superPointZ_EE, &b_SA_superPointZ_EE);
   fChain->SetBranchAddress("SA_superPointZ_CSC", &SA_superPointZ_CSC, &b_SA_superPointZ_CSC);
   fChain->SetBranchAddress("SA_superPointZ_BEE", &SA_superPointZ_BEE, &b_SA_superPointZ_BEE);
   fChain->SetBranchAddress("SA_superPointZ_BME", &SA_superPointZ_BME, &b_SA_superPointZ_BME);
   fChain->SetBranchAddress("CB_pt", &CB_pt, &b_CB_pt);
   fChain->SetBranchAddress("CB_eta", &CB_eta, &b_CB_eta);
   fChain->SetBranchAddress("CB_phi", &CB_phi, &b_CB_phi);
   fChain->SetBranchAddress("CB_idpt", &CB_idpt, &b_CB_idpt);
   fChain->SetBranchAddress("CB_ideta", &CB_ideta, &b_CB_ideta);
   fChain->SetBranchAddress("CB_idphi", &CB_idphi, &b_CB_idphi);
   fChain->SetBranchAddress("CB_roiNumber", &CB_roiNumber, &b_CB_roiNumber);
   fChain->SetBranchAddress("CB_roiSector", &CB_roiSector, &b_CB_roiSector);
   fChain->SetBranchAddress("CBMP_pt", &CBMP_pt, &b_CBMP_pt);
   fChain->SetBranchAddress("CBMP_eta", &CBMP_eta, &b_CBMP_eta);
   fChain->SetBranchAddress("CBMP_phi", &CBMP_phi, &b_CBMP_phi);
   fChain->SetBranchAddress("CBMP_idpt", &CBMP_idpt, &b_CBMP_idpt);
   fChain->SetBranchAddress("CBMP_ideta", &CBMP_ideta, &b_CBMP_ideta);
   fChain->SetBranchAddress("CBMP_idphi", &CBMP_idphi, &b_CBMP_idphi);
   fChain->SetBranchAddress("CBMP_roiNumber", &CBMP_roiNumber, &b_CBMP_roiNumber);
   fChain->SetBranchAddress("CBMP_roiSector", &CBMP_roiSector, &b_CBMP_roiSector);
   fChain->SetBranchAddress("EF_pt", &EF_pt, &b_EF_pt);
   fChain->SetBranchAddress("EF_eta", &EF_eta, &b_EF_eta);
   fChain->SetBranchAddress("EF_phi", &EF_phi, &b_EF_phi);
   Notify();
}

Bool_t NtupleAnalysisTool::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void NtupleAnalysisTool::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
#endif // #ifdef NtupleAnalysisTool_cxx
