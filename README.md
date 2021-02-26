# NtupleAnalysisTool
analysis of AODAnalysisTool's output

## setup, compile and run
----------------------------------------------
```shell
source setup.sh
./compile.sh cmake
cd run
./run.sh (pdf and output root file's directory name) 
     #if you don't add 1st argment, then output dir name is the date when you run
```
## change run option
```bash
# in /run/run.sh
INPUTFILE="your ntuple files (CalcEffTool's output, etc ....)"
OUTPUTFILE="output filename"
BEGIN_ENTRY # the entry to start
LIMIT_ENTRY # -1 : all events loop
IS_DISPLAY  #if true, then switch to make EventDisplay, (src/EventDisplay.cxx)
```
## add histogram
```c++
   //// at HistData.h
17     void HistInit()
18     {
19       // for example
20       for(int i=0; i<3; i++){
21         m_res_mdtvsroad[i] = new TH1D(Form("m_res_mdtvsroad%d", i), "mdt vs road residual; residual; events", 250, 0, 500);
22         m_res_mdtvshitroad[i] = new TH1D(Form("m_res_mdtvshitroad%d", i), "mdt vs rpc hit road residual; residual; events", 250, 0, 500);
23       }
         myHist = new TH1D(........         //add!
24     }

36   public : 
37     // for example
38     TH1D *m_res_mdtvsroad[3];
39     TH1D *m_res_mdtvshitroad[3];
40     TH1D *myHist                   //add!
```
```c++
25 void NtupleAnalysisTool::DrawHist(TString pdf)                                                                     
26 {                                                                                                                  
27   TCanvas_opt *c1 = new TCanvas_opt();                                                                             
28   c1->Print( pdf + "[", "pdf");                                                                                    
29   histData.myHist->Draw();             //add!                                                                              
30   c1->Print(pdf, "pdf");               //add!                                                                            
31   c1->Print( pdf + "]", "pdf");                                                                                    
32   delete c1;                                                                                                       
33 }             
```
- fill in NtupleAnalysisTool::Loop(...)

## notice
- this read branch are optimized to CalcEffToolMT's output. please change as you like
- this tool's output pdf and root file are in run/pdf/(dir), run/output/(dir)
- if you want to check the histograms in output root file, then run/output/checkFile.cxx is useful
```shell
cd run/output/
root -l checkFile.cxx
```
