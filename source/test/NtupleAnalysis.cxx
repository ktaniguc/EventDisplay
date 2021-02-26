#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include "/home/ktaniguc/RootUtils/src/rootlogon.C"

int main(int argc, char *argv[])
{
  TString dir = argv[1];
  TString output = argv[3];
  int begin_entry = atoi(argv[4]);
  int limit_entry = atoi(argv[5]);
  std::string chain = argv[6];
  TString isDisplay = argv[7];
  TString outputroot = "output/"+dir+"/"+output+".root";
  TString outputpdf = "plot/"+dir+"/"+output+".pdf";
  if(isDisplay == "true"){
    outputpdf = "plot/"+dir+"/"+output+"_display.pdf";
  }
  TFile *fout = new TFile(outputroot, "recreate");
  TChain *tree1 = new TChain("ntuple", "ntuple");
  rootlogon();
  HistData histData;
  tree1->Add(argv[2]);
  NtupleAnalysisTool nat(tree1);
  if(isDisplay != "true"){
    nat.Loop(histData, begin_entry, limit_entry, chain);
    nat.DrawHist(outputpdf, histData);
  } else {
    nat.Display(begin_entry, limit_entry, chain, outputpdf);
  }
  fout->Write();
  delete tree1;
  delete fout;

  return 0;
}
