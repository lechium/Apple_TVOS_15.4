//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/DDSAssetCenterDelegate-Protocol.h>
#import <TextInputCore/TIAssetManaging-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, TIRequestedInputModes;
@protocol OS_dispatch_queue, TIInputModePreferenceProvider;

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging>
{
    NSMutableArray *_notificationTokens;	// 8 = 0x8
    NSMutableSet *_languagesWithWarmedAssets;	// 16 = 0x10
    CDUnknownBlockType _enabledInputModeIdentifiersProviderBlock;	// 24 = 0x18
    CDUnknownBlockType _preferencesProviderBlock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSArray *_requestedInputModes_mainThreadCache;	// 48 = 0x30
    id <TIInputModePreferenceProvider> _inputModePreferenceProvider;	// 56 = 0x38
    NSArray *_currentActiveRegions;	// 64 = 0x40
    NSArray *_currentNormalizedActiveRegions;	// 72 = 0x48
    NSTimer *_didUpdateAssetsTimer;	// 80 = 0x50
    TIRequestedInputModes *_requestedInputModes;	// 88 = 0x58
}

+ (id)_regionFromAddress:(id)arg1;	// IMP=0x0000000000098f31
+ (id)_addressFromRegion:(id)arg1;	// IMP=0x0000000000098e3c
+ (id)singletonInstanceWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098d93
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098d56
+ (id)sharedAssetManager;	// IMP=0x0000000000098d42
+ (void)setSharedAssetManager:(id)arg1;	// IMP=0x00000000000990df
- (void).cxx_destruct;	// IMP=0x0000000000097b06
@property(readonly, nonatomic) TIRequestedInputModes *requestedInputModes; // @synthesize requestedInputModes=_requestedInputModes;
@property(retain, nonatomic) NSTimer *didUpdateAssetsTimer; // @synthesize didUpdateAssetsTimer=_didUpdateAssetsTimer;
@property(retain, nonatomic) NSArray *currentNormalizedActiveRegions; // @synthesize currentNormalizedActiveRegions=_currentNormalizedActiveRegions;
@property(retain, nonatomic) NSArray *currentActiveRegions; // @synthesize currentActiveRegions=_currentActiveRegions;
@property(readonly, nonatomic) id <TIInputModePreferenceProvider> inputModePreferenceProvider; // @synthesize inputModePreferenceProvider=_inputModePreferenceProvider;
@property(copy, nonatomic) NSArray *requestedInputModes_mainThreadCache; // @synthesize requestedInputModes_mainThreadCache=_requestedInputModes_mainThreadCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType preferencesProviderBlock; // @synthesize preferencesProviderBlock=_preferencesProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock; // @synthesize enabledInputModeIdentifiersProviderBlock=_enabledInputModeIdentifiersProviderBlock;
- (void)getActiveRegionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000979cd
- (id)topActiveRegions;	// IMP=0x000000000009793f
- (void)updatedActiveRegionsWithCompletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000097939
- (id)updatedActiveRegions;	// IMP=0x0000000000097909
- (id)activeInputModeLevels;	// IMP=0x00000000000976ba
- (id)activeInputModes;	// IMP=0x000000000009763a
- (id)defaultEnabledInputModes;	// IMP=0x000000000009747a
- (id)enabledInputModes;	// IMP=0x0000000000097259
- (id)levelsForInputMode:(id)arg1;	// IMP=0x0000000000097217
- (void)didUpdateAssets;	// IMP=0x00000000000970f8
- (void)scheduleAssetsDidChangeNotificationWithDelay:(double)arg1;	// IMP=0x0000000000097078
- (_Bool)inputModeHasRegions:(id)arg1;	// IMP=0x0000000000097017
- (id)ddsLanguageIdentifierFromInputMode:(id)arg1;	// IMP=0x0000000000096fb2
- (id)ddsAssertionIDFromInputMode:(id)arg1 withPotentialRegions:(id)arg2;	// IMP=0x0000000000096c33
- (void)addAssertionWithInputMode:(id)arg1 assertionID:(id)arg2 potentialRegions:(id)arg3;	// IMP=0x0000000000096748
- (void)updateAssertionsForInputModes:(id)arg1;	// IMP=0x000000000009657b
- (void)appleKeyboardsPreferencesChanged:(id)arg1;	// IMP=0x0000000000096428
- (void)didUpdateAssetsWithType:(id)arg1;	// IMP=0x00000000000962f3
- (void)unregisterForNotifications;	// IMP=0x0000000000096269
- (void)registerForNotifications;	// IMP=0x00000000000961ce
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009613e
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000095f1d
- (void)requestAssetDownloadForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000095e8b
- (void)_warmAssetQueryForLanguage:(id)arg1;	// IMP=0x0000000000095dda
- (void)_warmAssetQueriesForInputModes:(id)arg1;	// IMP=0x0000000000095c5c
- (id)_ddsContentItemsFromAssets:(id)arg1 contentType:(id)arg2 filteredWithRegion:(_Bool)arg3;	// IMP=0x000000000009569a
- (id)_ddsAssetsForLanguageIdentifier:(id)arg1 cachedOnly:(_Bool)arg2;	// IMP=0x0000000000095427
- (void)ddsAssetsForInputMode:(id)arg1 cachedOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000095342
- (void)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009522e
- (id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(_Bool)arg3;	// IMP=0x000000000009512c
@property(readonly, nonatomic) NSMutableSet *languagesWithWarmedAssets;
@property(readonly, nonatomic) double requestExpirationInterval;
- (void)dealloc;	// IMP=0x0000000000095063
- (id)initWithRequestedInputModes:(id)arg1 inputModePreferenceProvider:(id)arg2 enabledInputModesProvider:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094dc1
- (id)init;	// IMP=0x0000000000094da8
- (id)initForTestingWithRequestedInputModes:(id)arg1 inputModePreferenceProvider:(id)arg2 enabledInputModesProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000000990cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

