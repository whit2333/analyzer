#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ global gHaVars;
#pragma link C++ global gHaCuts;
#pragma link C++ global gHaApps;
#pragma link C++ global gHaPhysics;
#pragma link C++ global gHaEvtHandlers;
#pragma link C++ global gHaRun;
#pragma link C++ global gHaDB;
#pragma link C++ global gHaTextvars;

#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;

#pragma link C++ namespace Podd;
#pragma link C++ namespace podd2;

#pragma link C++ class podd2::EmptyBase+;

#pragma link C++ class podd2::AnalysisLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::CutLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::ConfigLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::DetectorLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::HitLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::ParameterLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::RunLogging<podd2::EmptyBase>+;
#pragma link C++ class podd2::SpectrometerLogging<podd2::EmptyBase>+;

#pragma link C++ class podd2::RunLogging<TObject>+;

#pragma link C++ class podd2::ParameterLogging<TNamed>+;

//podd2::ParameterLogging<TNamed>
//
// 

#pragma link C++ class THaVar+;
#pragma link C++ class THaVarList+;
#pragma link C++ class THaNamedList+;
#pragma link C++ class THaFormula+;
#pragma link C++ class THaVform+;
#pragma link C++ class THaVhist+;
#pragma link C++ class THaCut+;
#pragma link C++ class THaCutList+;
#pragma link C++ class THaHashList+;
#pragma link C++ class THaInterface+;
#pragma link C++ class THaRun+;
#pragma link C++ class THaRunBase+;
#pragma link C++ class THaCodaRun+;
#pragma link C++ class THaRunParameters+;
#pragma link C++ class THaApparatus+;
#pragma link C++ class podd2::SpectrometerLogging<THaApparatus>+;
#pragma link C++ class THaSpectrometer+;
#pragma link C++ class Podd::DecData+;
#pragma link C++ class BdataLoc+;
#pragma link C++ class CrateLoc+;
#pragma link C++ class CrateLocMulti+;
#pragma link C++ class WordLoc+;
#pragma link C++ class RoclenLoc+;
#pragma link C++ class BankData+;
#pragma link C++ class THaAnalysisObject+;
//#pragma link C++ class podd2::AnalysisLogging<THaAnalysisObject>+;
#pragma link C++ class podd2::AnalysisLogging<THaAnalysisObject>+;
#pragma link C++ class podd2::DetectorLogging<THaAnalysisObject>+;

#pragma link C++ class THaDetectorBase+;
#pragma link C++ class THaPhysicsModule+;
#pragma link C++ class THaVertexModule+;
#pragma link C++ class THaTrackingModule+;
#pragma link C++ class THaDetector+;
#pragma link C++ class THaSubDetector+;
#pragma link C++ class THaSpectrometerDetector+;
#pragma link C++ class THaTrackingDetector+;
#pragma link C++ class THaNonTrackingDetector+;
#pragma link C++ class THaPidDetector+;
#pragma link C++ class THaDetMap+;
#pragma link C++ class THaDetMap::Module+;
#pragma link C++ class THaScintillator+;
#pragma link C++ class THaEvent+;
#pragma link C++ class THaEventHeader+;
#pragma link C++ class THaOutput+;
#pragma link C++ class THaAnalyzer+;
#pragma link C++ class THaPrintOption+;
#pragma link C++ class THaBeam+;
#pragma link C++ class THaBeamDet+;
#pragma link C++ class THaIdealBeam+;
#pragma link C++ class THaRasteredBeam+;
#pragma link C++ class THaUnRasteredBeam+;
#pragma link C++ class THaRaster+;
#pragma link C++ class THaBPM+;
#pragma link C++ class THaShower+;
#pragma link C++ class THaTrack+;
#pragma link C++ class THaTrackID+;
#pragma link C++ class THaPIDinfo+;
#pragma link C++ class THaParticleInfo+;
#pragma link C++ class THaCluster+;
#pragma link C++ class THaArrayString+;
#pragma link C++ class THaCherenkov+;
#pragma link C++ class THaTotalShower+;
#pragma link C++ class THaRTTI+;
#pragma link C++ class THaElectronKine+;
#pragma link C++ class THaReactionPoint+;
#pragma link C++ class THaReacPointFoil+;
#pragma link C++ class THaTwoarmVertex+;
#pragma link C++ class THaAvgVertex+;
#pragma link C++ class THaExtTarCor+;
#pragma link C++ class THaTrackInfo+;
#pragma link C++ class THaDebugModule+;
#pragma link C++ class THaGoldenTrack+;
#pragma link C++ class THaPrimaryKine+;
#pragma link C++ class THaSecondaryKine+;
#pragma link C++ class THaCoincTime+;
#pragma link C++ class THaTrackProj+;
#pragma link C++ class THaPostProcess+;
#pragma link C++ class THaFilter+;
#pragma link C++ class THaElossCorrection+;
#pragma link C++ class THaTrackEloss+;
#pragma link C++ class THaBeamModule+;
#pragma link C++ class THaBeamInfo+;
#pragma link C++ class THaEpicsEbeam+;
#pragma link C++ class THaBeamEloss+;
#pragma link C++ class THaTriggerTime+;
#pragma link C++ class THaTrackOut+;
#pragma link C++ class THaHelicityDet+;
#pragma link C++ class THaPhotoReaction+;
#pragma link C++ class THaSAProtonEP+;
#pragma link C++ class THaTextvars+;
#pragma link C++ class THaEvtTypeHandler+;
#pragma link C++ class THaScalerEvtHandler+;
#pragma link C++ class THaEpicsEvtHandler+;
#pragma link C++ class THaEvt125Handler+;
#pragma link C++ class Podd::MCHitInfo+;
#pragma link C++ class Podd::MCTrack+;
#pragma link C++ class Podd::MCTrackPoint+;
#pragma link C++ class Podd::SimDecoder+;
#pragma link C++ class Podd::CodaRawDecoder+;

#pragma link C++ class podd2::AnalysisLogging<THaPostProcess>+;

#pragma link C++ class podd2::ConfigLogging<TObject>+;
#pragma link C++ class podd2::ConfigLogging<THaVarList>+;
#pragma link C++ class podd2::ConfigLogging<THaExtTarCor>+;
#pragma link C++ class podd2::ConfigLogging<THaBeamDet>+;
#pragma link C++ class podd2::ConfigLogging<THaPhysicsModule>+;
#pragma link C++ class podd2::ConfigLogging<THaNonTrackingDetector>+;
#pragma link C++ class podd2::ConfigLogging<THaEvtTypeHandler>+;
#pragma link C++ class podd2::ConfigLogging<THaSpectrometer>+;
#pragma link C++ class podd2::ConfigLogging<THaEvtTypeHandler>+;
#pragma link C++ class podd2::ConfigLogging<THaHelicityDet>+;


#ifdef ONLINE_ET
#pragma link C++ class THaOnlRun+;
#endif

#pragma link C++ function THaVar::THaVar( const char*, const char*, Double_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Float_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Long64_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, ULong64_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Int_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UInt_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Short_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UShort_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Char_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UChar_t&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Double_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Float_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Long64_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, ULong64_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Int_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UInt_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Short_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UShort_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Char_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UChar_t*&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Double_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Float_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Long64_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, ULong64_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Int_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UInt_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Short_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UShort_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, Char_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, UChar_t**&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, std::vector<int>&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, std::vector<unsigned int>&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, std::vector<double>&, const Int_t* );
#pragma link C++ function THaVar::THaVar( const char*, const char*, std::vector<float>&, const Int_t* );



#endif
