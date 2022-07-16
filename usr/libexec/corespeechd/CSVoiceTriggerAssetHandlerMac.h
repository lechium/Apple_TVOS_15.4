//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAsset, CSAssetManager, CSFirstUnlockMonitor, CSLanguageCodeUpdateMonitor, CSTrialAssetDownloadMonitor, CSTrialAssetManager, CSVoiceTriggerAssetDownloadMonitor, MISSING_TYPE, NSMutableDictionary, NSString;

@interface CSVoiceTriggerAssetHandlerMac
{
    CSAsset *_cachedAsset;	// 8 = 0x8
    NSMutableDictionary *_cachedEndpointAssets;	// 16 = 0x10
    CSVoiceTriggerAssetDownloadMonitor *_voiceTriggerAssetDownloadMonitor;	// 24 = 0x18
    MISSING_TYPE *_languageCodeUpdateMonitor;	// 32 = 0x20
    CSFirstUnlockMonitor *_firstUnlockMonitor;	// 40 = 0x28
    CSTrialAssetDownloadMonitor *_trialAssetDownloadMonitor;	// 48 = 0x30
    CSAssetManager *_assetManager;	// 56 = 0x38
    CSTrialAssetManager *_trialAssetManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000202a6
@property(retain, nonatomic) CSTrialAssetManager *trialAssetManager; // @synthesize trialAssetManager=_trialAssetManager;
@property(retain, nonatomic) CSAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *trialAssetDownloadMonitor; // @synthesize trialAssetDownloadMonitor=_trialAssetDownloadMonitor;
@property(retain, nonatomic) CSFirstUnlockMonitor *firstUnlockMonitor; // @synthesize firstUnlockMonitor=_firstUnlockMonitor;
@property(retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor; // @synthesize languageCodeUpdateMonitor=_languageCodeUpdateMonitor;
@property(retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor; // @synthesize voiceTriggerAssetDownloadMonitor=_voiceTriggerAssetDownloadMonitor;
@property(retain) NSMutableDictionary *cachedEndpointAssets; // @synthesize cachedEndpointAssets=_cachedEndpointAssets;
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x00100000000200a1
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;	// IMP=0x001000000001ffe6
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x001000000001ff1d
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;	// IMP=0x001000000001fe78
- (void)_checkNewAssetAvailablityForEndpoint;	// IMP=0x001000000001f8e6
- (void)_checkNewAssetAvailablity;	// IMP=0x001000000001f5ed
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f0c4
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;	// IMP=0x001000000001f041
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f019
- (void)_handleEndpointVoiceTriggerAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001edd2
- (void)_handleVoiceTriggerAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ec61
- (void)start;	// IMP=0x001000000001ebea
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)arg1 languageCodeUpdateMonitor:(id)arg2 firstUnlockMonitor:(id)arg3 trialAssetDownloadMonitor:(id)arg4 assetManager:(id)arg5 trialAssetManager:(id)arg6;	// IMP=0x001000000001e911
- (id)init;	// IMP=0x001000000001e8e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
