cmake_minimum_required(VERSION 3.5)

set(podd_src 
  THaADCHelicity.cxx          THaCoincTime.cxx            THaG0Helicity.cxx
  THaPhotoReaction.cxx        THaRunParameters.cxx        THaTrackID.cxx
  THaVDCTrackID.cxx           THaAnalysisObject.cxx       THaCut.cxx
  THaG0HelicityReader.cxx     THaPhysicsModule.cxx        THaS2CoincTime.cxx
  THaTrackInfo.cxx            THaAnalyzer.cxx             THaCutList.cxx
  THaGoldenTrack.cxx          THaPidDetector.cxx          THaSAProtonEP.cxx
  THaTrackOut.cxx             THaVDCPointPair.cxx         THaApparatus.cxx
  THaDebugModule.cxx          THaHRS.cxx                  THaVDCPoint.cxx
  THaPostProcess.cxx          THaTrackProj.cxx            THaEpicsEvtHandler.cxx
  THaVDCChamber.cxx           THaArrayString.cxx          THaDecData.cxx
  BdataLoc.cxx                THaHelicity.cxx             THaPrimaryKine.cxx
  THaScintillator.cxx         THaTrackingDetector.cxx     THaVDCWire.cxx
  THaAvgVertex.cxx            THaDetMap.cxx               THaHelicityDet.cxx
  THaPrintOption.cxx          THaSecondaryKine.cxx        THaTrackingModule.cxx
  THaVar.cxx                  THaBPM.cxx                  THaDetector.cxx
  THaIdealBeam.cxx            THaQWEAKHelicity.cxx        THaShower.cxx
  THaTriggerTime.cxx          THaVarList.cxx              THaBeam.cxx
  THaDetectorBase.cxx         THaInterface.cxx
  THaQWEAKHelicityReader.cxx
  THaSpectrometer.cxx         THaTwoarmVertex.cxx         THaVertexModule.cxx
  THaBeamDet.cxx              THaElectronKine.cxx         THaNamedList.cxx
  THaRTTI.cxx                 THaSpectrometerDetector.cxx THaUnRasteredBeam.cxx
  THaVform.cxx                THaBeamEloss.cxx            THaElossCorrection.cxx
  THaNonTrackingDetector.cxx  THaRaster.cxx               THaString.cxx
  THaVDC.cxx                  THaVhist.cxx                THaBeamInfo.cxx
  THaEpicsEbeam.cxx           THaRasteredBeam.cxx         THaSubDetector.cxx
  THaVDCAnalyticTTDConv.cxx   VDCeff.cxx                  THaBeamModule.cxx
  THaEvent.cxx                FileInclude.cxx             THaReacPointFoil.cxx
  THaTextvars.cxx             THaVDCCluster.cxx           THaCherenkov.cxx
  THaExtTarCor.cxx            THaOutput.cxx               THaReactionPoint.cxx
  THaTotalShower.cxx          THaVDCHit.cxx               THaCluster.cxx
  THaFilter.cxx               THaPIDinfo.cxx              THaRun.cxx
  THaTrack.cxx                THaVDCPlane.cxx             THaCodaRun.cxx
  THaFormula.cxx              THaParticleInfo.cxx         THaRunBase.cxx
  THaTrackEloss.cxx           THaVDCTimeToDistConv.cxx    THaEvtTypeHandler.cxx
  THaScalerEvtHandler.cxx     THaEvt125Handler.cxx        Variable.cxx
  VariableArrayVar.cxx        FixedArrayVar.cxx           VectorVar.cxx
  MethodVar.cxx               SeqCollectionVar.cxx 
  SeqCollectionMethodVar.cxx  VectorObjVar.cxx            VectorObjMethodVar.cxx
  BankData.cxx
  )

# This would be alot easier if there was an "include" directory
set(headers
THaFormula.h THaVform.h THaVhist.h THaVar.h
THaVarList.h THaCut.h THaNamedList.h THaCutList.h
THaInterface.h THaRunBase.h THaCodaRun.h THaRun.h
THaRunParameters.h THaDetMap.h THaApparatus.h
THaDetector.h THaSpectrometer.h THaSpectrometerDetector.h
THaHRS.h THaDecData.h BdataLoc.h THaOutput.h BankData.h
THaString.h THaTrackingDetector.h THaNonTrackingDetector.h
THaPidDetector.h THaSubDetector.h THaAnalysisObject.h
THaDetectorBase.h THaRTTI.h THaPhysicsModule.h
THaVertexModule.h THaTrackingModule.h THaAnalyzer.h
THaPrintOption.h THaBeam.h THaIdealBeam.h
THaRasteredBeam.h THaRaster.h THaBeamDet.h THaBPM.h
THaUnRasteredBeam.h THaTrack.h THaPIDinfo.h
THaParticleInfo.h THaCluster.h THaArrayString.h
THaScintillator.h THaShower.h THaTotalShower.h
THaCherenkov.h THaEvent.h THaTrackID.h THaVDC.h
THaVDCPlane.h THaVDCWire.h THaVDCHit.h THaVDCCluster.h
THaVDCTimeToDistConv.h THaVDCTrackID.h
THaVDCAnalyticTTDConv.h VDCeff.h THaElectronKine.h
THaReactionPoint.h THaReacPointFoil.h THaTwoarmVertex.h
THaAvgVertex.h THaExtTarCor.h THaDebugModule.h
THaTrackInfo.h THaGoldenTrack.h THaPrimaryKine.h
THaSecondaryKine.h THaCoincTime.h THaS2CoincTime.h
THaTrackProj.h THaPostProcess.h THaFilter.h
THaElossCorrection.h THaTrackEloss.h THaBeamModule.h
THaBeamInfo.h THaEpicsEbeam.h THaBeamEloss.h
THaTrackOut.h THaTriggerTime.h THaHelicityDet.h
THaG0HelicityReader.h THaG0Helicity.h THaADCHelicity.h
THaHelicity.h THaPhotoReaction.h THaSAProtonEP.h
THaTextvars.h THaQWEAKHelicity.h THaQWEAKHelicityReader.h
THaEvtTypeHandler.h THaScalerEvtHandler.h
THaEpicsEvtHandler.h THaEvt125Handler.h Variable.h
VariableArrayVar.h FixedArrayVar.h VectorVar.h
MethodVar.h SeqCollectionVar.h SeqCollectionMethodVar.h
VectorObjVar.h VectorObjMethodVar.h THaVDCChamber.h
THaVDCPoint.h THaVDCPointPair.h THaGlobals.h
FileInclude.h
)


ROOT_GENERATE_DICTIONARY(HallADict ${headers} 
  INCLUDEDIRS include ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../hana_decode 
  LINKDEF HallA_LinkDef.h  
  OPTIONS -p)
set(PCM_FILE  ${CMAKE_CURRENT_BINARY_DIR}/HallADict_rdict.pcm)

#SET(lib_HEADERS ${lib_HEADERS})
#SET(lib_SRCS ${lib_Fortran_SRCs} ${lib_SRCS} ${lib_DICTIONARY_SRC})
#SET(lib_VERSION "${${PROJECT_NAME}_VERSION}")
#SET(lib_MAJOR_VERSION "${${PROJECT_NAME}_MAJOR_VERSION}")
#SET(lib_LIBRARY_PROPERTIES 
#    VERSION   "${lib_VERSION}"
#    SOVERSION "${lib_MAJOR_VERSION}"
#    SUFFIX ".so")

include_directories(${PROJECT_SOURCE_DIR}/hana_decode)

add_custom_target(HallA_ROOTDICTS DEPENDS ${podd_src} ${headers} HallA_LinkDef.h HallADict.cxx)

add_library(HallA
  ${podd_src} HallADict.cxx
  )

#add_library(PODD::HallA ALIAS HallA)

#Set target properties
target_include_directories(HallA
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)

#target_compile_features(HallA PRIVATE cxx_auto_type)

target_link_libraries(HallA
  PUBLIC ${ROOT_LIBRARIES} 
  PUBLIC EVIO::EVIO
  PRIVATE dc 
)
#This is required so that the exported target has the name JSONUtils and not jsonutils
#set_target_properties(HallA PROPERTIES EXPORT_NAME HallA)

add_executable(analyzer main.cxx)
target_include_directories(analyzer
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)

#target_compile_features(HallA PRIVATE cxx_auto_type)
target_compile_options(analyzer PRIVATE $<$<CXX_COMPILER_ID:GNU>:-DHAS_SSTREAM=1>)
target_link_libraries(analyzer
  PRIVATE HallA
  PRIVATE dc
  PUBLIC ${ROOT_LIBRARIES} 
)

install(TARGETS HallA analyzer
  EXPORT podd-targets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )


install(FILES ${headers} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/podd)
install(FILES ${PCM_FILE} DESTINATION lib)

#Export the targets to a script
install(EXPORT podd-targets
  FILE
  PODDTargets.cmake
  NAMESPACE
  PODD::
  DESTINATION
    lib/podd
)
