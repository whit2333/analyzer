#ifndef Podd_THaGlobals_h_
#define Podd_THaGlobals_h_

// Pick up definition of R__EXTERN
#ifndef Podd_DllImport_h_
#include "DllImport.h"
#endif

// Global Analyzer variables. Defined in THaInterface implementation file.
#include "TList.h"
#include "THaRunBase.h"
#include "THaCutList.h"
#include "THaVarList.h"
#include "THaCut.h"
//#include "THaDB.h"
#include "THaTextvars.h"

//R__EXTERN class THaVarList*  gHaVars;      //List of global symbolic variables
//R__EXTERN class THaCutList*  gHaCuts;      //List of defined cuts
//R__EXTERN class TList*       gHaApps;      //List of apparatuses
//R__EXTERN class TList*       gHaPhysics;   //List of physics modules
//R__EXTERN class TList*       gHaEvtHandlers;   //List of event handlers
//R__EXTERN class THaRunBase*  gHaRun;       //The currently active run
R__EXTERN class TClass*      gHaDecoder;   //Class(!) of decoder to use
R__EXTERN class THaDB*       gHaDB;        //Database system to use
//R__EXTERN class THaTextvars* gHaTextvars;  //List of text variable definitions

namespace podd {

  /** Singleton class for getting global variables.  
   *  Obligatory note: "global variables are bad"
   *  That said, this is better than having their creation in THaInterface.
   */
  class Globals {
  public:

    THaVarList   gHaVars;      //List of global symbolic variables
    THaCutList   gHaCuts;      //List of defined cuts
    TList        gHaApps;      //List of apparatuses
    TList        gHaPhysics;   //List of physics modules
    TList        gHaEvtHandlers;   //List of event handlers
    THaRunBase*  gHaRun;       //The currently active run
    TClass*      gHaDecoder;   //Class(!) of decoder to use
    THaDB*       gHaDB;        //Database system to use
    THaTextvars  gHaTextvars;  //List of text variable definitions

    static Globals& Instance() {
      static Globals S;
      return S;
    }

    /** List of global symbolic variables */
    THaVarList*  Vars_ptr() { return &gHaVars;}

    /** List of defined cuts */
    THaCutList*   Cuts_ptr() { return &gHaCuts;}

    /** List of apparatuses */
    TList*   Apps_ptr() { return &gHaApps;}

    /** List of physics modules */
    TList*   Physics_ptr() { return &gHaPhysics;}

    /** List of event handlers */
    TList*   EvtHandlers_ptr() { return &gHaEvtHandlers;}

    /** The currently active run */
    THaRunBase*&   Run_ptr() { return gHaRun;}
    void          SetRun(THaRunBase* r) { gHaRun = r;}

    /** Class(!) of decoder to use */
    TClass*&   Decoder_ptr() { return gHaDecoder;}

    /** Database system to use */
    THaDB*   DB_ptr() { return gHaDB;}

    /** List of text variable definitions */
    THaTextvars*   Textvars_ptr() { return &gHaTextvars;}
    
  private:
    Globals(){}
    ~Globals(){}
  };

}

#define gHaVars        (podd::Globals::Instance().Vars_ptr())
#define gHaCuts        (podd::Globals::Instance().Cuts_ptr())
#define gHaApps        (podd::Globals::Instance().Apps_ptr())
#define gHaPhysics     (podd::Globals::Instance().Physics_ptr())
#define gHaEvtHandlers (podd::Globals::Instance().EvtHandlers_ptr())
#define gHaRun         (podd::Globals::Instance().Run_ptr())
#define gHaDecoder     (podd::Globals::Instance().Decoder_ptr())
#define gHaDB          (podd::Globals::Instance().DB_ptr())
#define gHaTextvars    (podd::Globals::Instance().Textvars_ptr())


#endif
