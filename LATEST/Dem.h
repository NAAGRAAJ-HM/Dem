#pragma once

class class_Dem{
   public:
      void PreInit(void);
      void InitFunction(void);
      void GetVersionInfo(void);
      void Shutdown(void);
      void ClearDTC(void);
      void ClearPrestoredFreezeFrame(void);
      void GetComponentFailed(void);
      void GetDTCSelectionResult(void);
      void GetDTCSelectionResultForClearDTC(void);
      void GetEventUdsStatus(void);
      void GetMonitorStatus(void);
      void GetDebouncingOfEvent(void);
      void GetDTCOfEvent(void);
      void GetDTCSuppression(void);
      void GetFaultDetectionCounter(void);
      void GetIndicatorStatus(void);
      void GetEventFreezeFrameDataEx(void);
      void GetEventExtendedDataRecordEx(void);
      void GetEventMemoryOverflow(void);
      void GetNumberOfEventMemoryEntries(void);
      void ResetEventDebounceStatus(void);
      void ResetEventStatus(void);
      void RestartOperationCycle(void);
      void PrestoreFreezeFrame(void);
      void SelectDTC(void);
      void SetComponentAvailable(void);
      void SetDTCSuppression(void);
      void SetEnableCondition(void);
      void SetEventAvailable(void);
      void SetEventFailureCycleCounterThreshold(void);
      void SetEventStatus(void);
      void SetEventStatusWithMonitorData(void);
      void SetStorageCondition(void);
      void SetWIRStatus(void);
      void GetTranslationType(void);
      void GetDTCStatusAvailabilityMask(void);
      void GetStatusOfDTC(void);
      void GetSeverityOfDTC(void);
      void GetFunctionalUnitOfDTC(void);
      void SetDTCFilter(void);
      void GetNumberOfFilteredDTC(void);
      void GetNextFilteredDTC(void);
      void GetNextFilteredDTCAndFDC(void);
      void GetNextFilteredDTCAndSeverity(void);
      void SetFreezeFrameRecordFilter(void);
      void GetNextFilteredRecord(void);
      void GetDTCByOccuranceTime(void);
      void DisableDTCRecordUpdate(void);
      void EnableDTCRecordUpdate(void);
      void GetSizeOfExtendedDataRecordSelection(void);
      void GetSizeOfFreezeFrameSelection(void);
      void GetNextExtendedDataRecord(void);
      void GetNextFreezeFrameData(void);
      void SelectExtendedDataRecord(void);
      void SelectFreezeFrameData(void);
      void GetNumberOfFreezeFrameRecords(void);
      void DisableDTCSetting(void);
      void EnableDTCSetting(void);
      void DcmGetInfoTypeValue08(void);
      void DcmGetInfoTypeValue0B(void);
      void DcmReadDataOfPID01(void);
      void DcmReadDataOfPID1C(void);
      void DcmReadDataOfPID21(void);
      void DcmReadDataOfPID30(void);
      void DcmReadDataOfPID31(void);
      void DcmReadDataOfPID41(void);
      void DcmReadDataOfPID4D(void);
      void DcmReadDataOfPID4E(void);
      void DcmReadDataOfPID91(void);
      void DcmReadDataOfOBDFreezeFrame(void);
      void DcmGetDTCOfOBDFreezeFrame(void);
      void DcmGetAvailableOBDMIDs(void);
      void DcmGetNumTIDsOfOBDMID(void);
      void DcmGetDTRData(void);
      void J1939DcmSetDTCFilter(void);
      void J1939DcmGetNumberOfFilteredDTC(void);
      void J1939DcmGetNextFilteredDTC(void);
      void J1939DcmFirstDTCwithLampStatus(void);
      void J1939DcmClearDTC(void);
      void J1939DcmSetFreezeFrameFilter(void);
      void J1939DcmGetNextFreezeFrame(void);
      void J1939DcmGetNextSPNInFreezeFrame(void);
      void J1939DcmSetRatioFilter(void);
      void J1939DcmGetNextFilteredRatio(void);
      void J1939DcmReadDiagnosticReadiness1(void);
      void J1939DcmReadDiagnosticReadiness2(void);
      void J1939DcmReadDiagnosticReadiness3(void);
};

extern class_Dem Dem;


