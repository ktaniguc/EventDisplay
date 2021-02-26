#!/bin/sh
if [[ "$1" = "" ]]; then
  TITLE="TEST"
else
  TITLE="$1"
fi
#INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/bb_jpsimu3p5mu3p5_calceff_cbmatch_Ntuple.root"
#INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/bb_jpsimu3p5mu3p5_calceff_cbmatch_Ntuple.root"
#INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/bb_jpsimu3p5mu3p5_calceff_mu10_addismore_Ntuple.root"   # used for trigger efficiency
INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/bb_jpsimu3p5mu3p5_calceff_addftftrack_cbsa_Ntuple.root" 
#INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/jpsiCollimated_mpmode_450files_Ntuple.root"
BEGIN_ENTRY=0
#LIMIT_ENTRY=-1
LIMIT_ENTRY=50
#LIMIT_ENTRY=50000
CHAIN="HLT_2mu10_l2mp_L1MU10"
#OUTPUTFILE="mpmode_display"
OUTPUTFILE="mpmode"
#IS_DISPLAY="false"
IS_DISPLAY="true"

mkdir -p ./output/${TITLE}
mkdir -p ./plot/${TITLE}
$setupDir/build/source/test/NtupleAnalysis.out $TITLE $INPUTFILE $OUTPUTFILE $BEGIN_ENTRY $LIMIT_ENTRY $CHAIN $IS_DISPLAY
