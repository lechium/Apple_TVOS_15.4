//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBDisplayLayoutTransition;

@interface UISystemShellApplication
{
    FBDisplayLayoutTransition *_interfaceOrientationTransition;	// 192 = 0xc0
    id _didFinishLaunchingObserver;	// 200 = 0xc8
}

+ (_Bool)rendersLocally;	// IMP=0x0000000000e6203b
+ (_Bool)registerAsSystemApp;	// IMP=0x0000000000e62033
- (void).cxx_destruct;	// IMP=0x0000000000e62357
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;	// IMP=0x0000000000e62273
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3;	// IMP=0x0000000000e62173
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1;	// IMP=0x0000000000e620ed
- (_Bool)_openURL:(id)arg1;	// IMP=0x0000000000e6208d
- (_Bool)canOpenURL:(id)arg1;	// IMP=0x0000000000e62079
- (_Bool)_saveSnapshotWithName:(id)arg1;	// IMP=0x0000000000e62071
- (_Bool)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)arg1;	// IMP=0x0000000000e62069
- (void)resetIdleTimerAndUndim;	// IMP=0x0000000000e62063
- (_Bool)isSuspendedUnderLock;	// IMP=0x0000000000e6205b
- (_Bool)isSuspendedEventsOnly;	// IMP=0x0000000000e62053
- (_Bool)isSuspended;	// IMP=0x0000000000e6204b
- (_Bool)isFrontBoard;	// IMP=0x0000000000e62043
- (long long)startupInterfaceOrientation;	// IMP=0x0000000000e62028
- (id)init;	// IMP=0x0000000000e61d1a

@end

