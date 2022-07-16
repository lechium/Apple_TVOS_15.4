//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXFrontBoardUtils/FBProcessManagerObserver-Protocol.h>
#import <AXFrontBoardUtils/FBProcessObserver-Protocol.h>

@class AXDispatchTimer, NSSet, NSString;

@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver>
{
    id _observerToken;	// 8 = 0x8
    AXDispatchTimer *_appTransitionTimer;	// 16 = 0x10
    NSSet *_cachedFocusedAppPIDs;	// 24 = 0x18
}

+ (id)accessibilitySpokenNameForProcess:(id)arg1;	// IMP=0x0000000000005855
+ (id)processForBundleIdentifier:(id)arg1;	// IMP=0x000000000000566d
+ (void)validateFocusedAppsWithEvent:(long long)arg1;	// IMP=0x0000000000004253
- (void).cxx_destruct;	// IMP=0x0000000000005965
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;	// IMP=0x00000000000052f3
- (void)processDidExit:(id)arg1;	// IMP=0x00000000000052ed
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x00000000000052e7
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x0000000000005134
- (_Bool)_processStateChangeIsTaskStateChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000050dc
- (_Bool)_processStateChangeIsVisibilityStateChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000005066
- (void)_validateFocusedApps:(long long)arg1;	// IMP=0x0000000000004b0c
- (id)_processDescriptionForPID:(int)arg1;	// IMP=0x00000000000049c8
- (void)dealloc;	// IMP=0x00000000000047b9
- (id)init;	// IMP=0x000000000000434b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

