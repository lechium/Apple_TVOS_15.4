//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, _BKCloneMirroringClient, _BKDisplayBlankingContext;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKTVOutController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSSet *_queue_replayCloneContextIDs;	// 16 = 0x10
    int _queue_currentVirtualDisplayClientPID;	// 24 = 0x18
    _BKCloneMirroringClient *_queue_currentCloneMirroringClient;	// 32 = 0x20
    _BKDisplayBlankingContext *_blankingContext;	// 40 = 0x28
    id <BSInvalidatable> _systemShellObserving;	// 48 = 0x30
    _Bool _queue_cloneRotationDisabled;	// 56 = 0x38
    _Bool _queue_forceTVOutMode;	// 57 = 0x39
    _Bool _queue_tvOutDisplayHasAvailableModes;	// 58 = 0x3a
    _Bool _queue_systemAppHasCheckedIn;	// 59 = 0x3b
    int _tvOutMode;	// 60 = 0x3c
}

+ (id)sharedInstance;	// IMP=0x0020000000037651
- (void).cxx_destruct;	// IMP=0x0020000000036d07
@property int tvOutMode; // @synthesize tvOutMode=_tvOutMode;
- (void)stopListeningForSettingsChanges;	// IMP=0x0010000000036c68
- (void)startListeningForSettingsChanges;	// IMP=0x0010000000036b83
- (void)_tetherSettingChanged:(id)arg1;	// IMP=0x0010000000036b71
- (void)_handleIapServerConnectionDied;	// IMP=0x0010000000036ae3
@property(retain, nonatomic) NSSet *replayCloneContextIDs;
- (void)setVirtualDisplayClientPID:(int)arg1;	// IMP=0x0010000000036951
- (void)setCloneMirroringModeFromClient:(id)arg1;	// IMP=0x00100000000368c6
- (void)setCloneRotationDisabled:(_Bool)arg1;	// IMP=0x0010000000036878
- (void)cloneMirroringClientDidExit:(id)arg1;	// IMP=0x00100000000367ed
- (void)_queue_setInitialTVModeIfNeeded;	// IMP=0x00100000000367e7
- (void)_queue_updateLayerKitSettings;	// IMP=0x00100000000367e1
- (void)updateSettings;	// IMP=0x00100000000367db
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x00100000000366db
- (void)_queue_updateClonedDisplays;	// IMP=0x001000000003634f
- (void)_queue_addClone:(id)arg1;	// IMP=0x0010000000035e1d
- (_Bool)_supportsDisplayMirroring;	// IMP=0x0010000000035df2
- (void)_collectWirelessDisplays:(id *)arg1 tvOutDisplay:(id *)arg2 makeImmutable:(_Bool)arg3;	// IMP=0x001000000003590d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000035646
- (void)_queue_currentModeDidChangeForDisplay:(id)arg1;	// IMP=0x00100000000354e4
- (void)_queue_availableModesDidChangeForDisplay:(id)arg1 displayKind:(long long)arg2;	// IMP=0x0010000000035084
- (void)_queue_availableModesDidChangeForWirelessDisplay:(id)arg1 windowServerDisplay:(id)arg2 mainWindowServerDisplay:(id)arg3;	// IMP=0x0010000000034c76
- (void)_queue_forceRemoveClone:(id)arg1 fromMainWindowServerDisplay:(id)arg2;	// IMP=0x0010000000034b45
- (void)_queue_availableModesDidChangeForPurpleTVOutDisplay:(id)arg1 windowServerDisplay:(id)arg2 mainWindowServerDisplay:(id)arg3;	// IMP=0x00100000000348ff
- (void)setBlanked:(_Bool)arg1 forDisplay:(id)arg2;	// IMP=0x0010000000034877
- (void)dealloc;	// IMP=0x0010000000034839
- (id)init;	// IMP=0x00100000000343f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

