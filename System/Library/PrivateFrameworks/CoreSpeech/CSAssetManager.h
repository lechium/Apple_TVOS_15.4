//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAdBlockerMetaUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAssetControllerDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechEndpointAssetMetaUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetMetaUpdateMonitorDelegate-Protocol.h>

@class CSAssetDownloadingOption, CSPolicy, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSPolicy *_enablePolicy;	// 8 = 0x8
    NSString *_currentLanguageCode;	// 16 = 0x10
    CSAssetDownloadingOption *_downloadingOption;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_downloadTimer;	// 40 = 0x28
    long long _downloadTimerCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x0000000000030bc4
- (void).cxx_destruct;	// IMP=0x0000000000032ed2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopPeriodicalDownload;	// IMP=0x0000000000032df9
- (void)_startPeriodicalDownload;	// IMP=0x0000000000032d3d
- (void)_createPeriodicalDownloadTimer;	// IMP=0x0000000000032b52
- (void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2;	// IMP=0x0000000000032907
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(_Bool)arg2;	// IMP=0x0000000000032874
- (void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeakerRecognitionAssetMetaData:(_Bool)arg2;	// IMP=0x00000000000327e1
- (void)CSAdBlockerMetaUpdateMonitor:(id)arg1 didReceiveNewAdBlockerAssetMetaData:(_Bool)arg2;	// IMP=0x000000000003274e
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(_Bool)arg2;	// IMP=0x0000000000032658
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x00000000000324c9
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x00000000000322d1
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0000000000032212
@property(readonly, nonatomic) NSString *currentLanguageCode;
- (_Bool)_canFetchRemoteAsset:(unsigned long long)arg1;	// IMP=0x0000000000032145
- (void)_fetchRemoteMetaData;	// IMP=0x0000000000031eb0
- (void)assetOfType:(unsigned long long)arg1 providerType:(unsigned long long)arg2 language:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031dde
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031d4c
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000000031cbf
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031bfc
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031b45
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000000031a94
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000319e7
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x0000000000031946
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003186c
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00000000000317df
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x000000000003171b
- (void)setAssetDownloadingOption:(id)arg1;	// IMP=0x00000000000312f7
- (id)initWithDownloadOption:(id)arg1;	// IMP=0x0000000000030c4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

