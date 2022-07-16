//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CESRTrialAssetManager, MorphunAssets, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADAssetManager : NSObject
{
    NSString *_currentLanguageCode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_group;	// 32 = 0x20
    double _assetFetchTimeout;	// 40 = 0x28
    NSMutableDictionary *_assetFetchIntervalBeginDates;	// 48 = 0x30
    NSDictionary *_speechAssetStatus;	// 56 = 0x38
    CESRTrialAssetManager *_speechAssetManager;	// 64 = 0x40
    NSMutableDictionary *_nlAssetStatus;	// 72 = 0x48
    MorphunAssets *_morphunAssetsManager;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00100000001ad760
+ (id)constructNamespaceStatusEventForNamespace:(unsigned int)arg1 withClient:(id)arg2;	// IMP=0x001000000000381e
+ (void)logAvailableAssetDailyStatus;	// IMP=0x00100000000032ec
- (void).cxx_destruct;	// IMP=0x00200000001afe6d
- (void)_emitUODAssetPreparedEventWithLanguage:(id)arg1 elapsed:(unsigned int)arg2;	// IMP=0x00100000001af47a
- (void)_checkAssetsStatusForIntervalRecording;	// IMP=0x00100000001af16a
- (void)_recordAssetsNeededForLanguage:(id)arg1 resetPrevious:(_Bool)arg2;	// IMP=0x00100000001aefa7
- (_Bool)_shouldLogAssetsPreparedEvent;	// IMP=0x00100000001aef99
- (void)recordAssetsFetchingInterval;	// IMP=0x00100000001aef38
- (void)_subscribeToMorphunAssetStatusForLanguage:(id)arg1;	// IMP=0x00100000001aeb57
- (void)_fetchAssetStatusForLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ae767
- (void)_registerAssetStatusTrackers;	// IMP=0x00100000001ae519
- (void)assetsUnavailable;	// IMP=0x00100000001ae3a9
- (void)assetsAvailableForLocale:(id)arg1;	// IMP=0x00100000001ae17c
- (void)assetsAvailable;	// IMP=0x00100000001ae176
- (void)assetStatus:(id)arg1;	// IMP=0x00100000001adf99
- (void)languageCodeWasChangedTo:(id)arg1;	// IMP=0x00100000001adeb0
- (id)assetsAvailableStatusForLanguage:(id)arg1;	// IMP=0x00100000001adbcd
- (id)initWithLanguageCode:(id)arg1 speechAssetManager:(id)arg2 morphunAssetManager:(id)arg3 assetFetchTimeout:(double)arg4 registerAssetTracker:(_Bool)arg5;	// IMP=0x00100000001ad9e3
- (id)init;	// IMP=0x00100000001ad7b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
