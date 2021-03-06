//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/PBSDisplayState-Protocol.h>
#import <PineBoardServices/PBSDisplayState_Private-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSSet, NSString, PBSDisplayManagerServiceProxy, PBSDisplayMode;

@interface PBSDisplayManager : NSObject <PBSDisplayState_Private, PBSDisplayState>
{
    _Bool _canHandleHighBandwidthModes;	// 8 = 0x8
    _Bool _shouldModeSwitchForDynamicRange;	// 9 = 0x9
    _Bool _shouldModeSwitchForFrameRate;	// 10 = 0xa
    _Bool _atmosEnabled;	// 11 = 0xb
    _Bool _detectedPoorCableConnection;	// 12 = 0xc
    _Bool _deemed4KCapable;	// 13 = 0xd
    double _localeRefreshRate;	// 16 = 0x10
    NSArray *_sortedDisplayModes;	// 24 = 0x18
    PBSDisplayMode *_currentDisplayMode;	// 32 = 0x20
    PBSDisplayMode *_fallbackDisplayMode;	// 40 = 0x28
    PBSDisplayMode *_userSelectedDisplayMode;	// 48 = 0x30
    NSSet *_seenDisplayIDs;	// 56 = 0x38
    NSString *_currentDisplayID;	// 64 = 0x40
    long long _displayConnection;	// 72 = 0x48
    NSSet *_promotedVirtualDisplayModes;	// 80 = 0x50
    long long _lastCablePollStatus;	// 88 = 0x58
    NSHashTable *_stateObservers;	// 96 = 0x60
    PBSDisplayManagerServiceProxy *_serviceProxy;	// 104 = 0x68
    NSDictionary *_audioLatencies;	// 112 = 0x70
    long long _eARCStatus;	// 120 = 0x78
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000009d840
+ (id)sharedInstance;	// IMP=0x00000000000991d0
+ (void)preheat;	// IMP=0x0000000000099190
- (void).cxx_destruct;	// IMP=0x000000000009e1b0
@property(nonatomic) long long eARCStatus; // @synthesize eARCStatus=_eARCStatus;
@property(retain, nonatomic) NSDictionary *audioLatencies; // @synthesize audioLatencies=_audioLatencies;
@property(readonly, nonatomic) PBSDisplayManagerServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(nonatomic) _Bool deemed4KCapable; // @synthesize deemed4KCapable=_deemed4KCapable;
@property(nonatomic) long long lastCablePollStatus; // @synthesize lastCablePollStatus=_lastCablePollStatus;
@property(retain, nonatomic) NSSet *promotedVirtualDisplayModes; // @synthesize promotedVirtualDisplayModes=_promotedVirtualDisplayModes;
@property(nonatomic) _Bool detectedPoorCableConnection; // @synthesize detectedPoorCableConnection=_detectedPoorCableConnection;
@property(nonatomic) long long displayConnection; // @synthesize displayConnection=_displayConnection;
@property(nonatomic) _Bool atmosEnabled; // @synthesize atmosEnabled=_atmosEnabled;
@property(nonatomic) _Bool shouldModeSwitchForFrameRate; // @synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate;
@property(nonatomic) _Bool shouldModeSwitchForDynamicRange; // @synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange;
@property(nonatomic) _Bool canHandleHighBandwidthModes; // @synthesize canHandleHighBandwidthModes=_canHandleHighBandwidthModes;
@property(retain, nonatomic) NSString *currentDisplayID; // @synthesize currentDisplayID=_currentDisplayID;
@property(retain, nonatomic) NSSet *seenDisplayIDs; // @synthesize seenDisplayIDs=_seenDisplayIDs;
@property(retain, nonatomic) PBSDisplayMode *userSelectedDisplayMode; // @synthesize userSelectedDisplayMode=_userSelectedDisplayMode;
@property(retain, nonatomic) PBSDisplayMode *fallbackDisplayMode; // @synthesize fallbackDisplayMode=_fallbackDisplayMode;
@property(retain, nonatomic) PBSDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(retain, nonatomic) NSArray *sortedDisplayModes; // @synthesize sortedDisplayModes=_sortedDisplayModes;
@property(nonatomic) double localeRefreshRate; // @synthesize localeRefreshRate=_localeRefreshRate;
- (void)removeStateObserver:(id)arg1;	// IMP=0x000000000009d7b0
- (void)addStateObserver:(id)arg1;	// IMP=0x000000000009d720
- (void)refreshValuesFromSerialisedState:(id)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x000000000009b2d0
- (void)refreshValuesOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ac80
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;	// IMP=0x000000000009ac20
- (void)enableAtmos:(_Bool)arg1;	// IMP=0x000000000009abc0
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;	// IMP=0x000000000009ab60
- (void)wakeDisplay:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a8f0
- (void)sleepDisplay:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a680
- (void)updateDisplayManagerWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a220
- (_Bool)updateDisplayManagerWithRequest:(id)arg1 errror:(id *)arg2;	// IMP=0x0000000000099d60
- (id)audioLatencyForDisplayMode:(id)arg1;	// IMP=0x0000000000099bf0
- (id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(_Bool)arg2;	// IMP=0x0000000000099990
- (id)findFirstMode:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099860
- (id)filterModes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099760
- (_Bool)isAdvertisingHDMI2;	// IMP=0x00000000000996c0
- (void)dealloc;	// IMP=0x0000000000099660
- (id)_init;	// IMP=0x0000000000099300
- (id)init;	// IMP=0x00000000000992d0
- (void)setAudioLatency:(double)arg1 forDisplayMode:(id)arg2;	// IMP=0x0000000000005910
- (void)displayAssistantDidCompleteForKind:(id)arg1;	// IMP=0x000000000007d780
- (void)displayAssistantDidStartForKind:(id)arg1;	// IMP=0x000000000007d700
- (void)removeCableCheckHistory;	// IMP=0x000000000007d6b0
- (void)forgetDisplaysForDisplayAssistant;	// IMP=0x000000000007d660
- (void)presentDisplayAssistantWithRequest:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d3c0
- (void)handleRegionChangeWithNewCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d120
- (_Bool)needsHDRBuddyForDisplayMode:(id)arg1;	// IMP=0x000000000007cda0
@property(readonly, nonatomic) _Bool canAttemptUpgradeWithDisplayAssistant;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

