//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject
{
    NSMutableSet *_watcherWrappers;	// 8 = 0x8
    unsigned long long _availabilityState;	// 16 = 0x10
    unsigned long long _simulatedAvailablityState;	// 24 = 0x18
}

+ (id)sharedMonitor;	// IMP=0x00000000000e2256
+ (void)initialize;	// IMP=0x00000000000e2215
- (void).cxx_destruct;	// IMP=0x00000000000e310d
@property unsigned long long simulatedAvailablityState; // @synthesize simulatedAvailablityState=_simulatedAvailablityState;
@property unsigned long long availabilityState; // @synthesize availabilityState=_availabilityState;
@property(retain, nonatomic) NSMutableSet *watcherWrappers; // @synthesize watcherWrappers=_watcherWrappers;
- (void)simulateFirstUnlockForUnitTests;	// IMP=0x00000000000e30b4
- (void)simulateBuddyCompletedForUnitTests;	// IMP=0x00000000000e309e
- (void)resetToUnavailableForUnitTests;	// IMP=0x00000000000e308d
- (_Bool)registerWatcher:(id)arg1;	// IMP=0x00000000000e2ebd
- (void)_systemMayNowBeReady;	// IMP=0x00000000000e2b14
- (void)_clearVanishedWatchers;	// IMP=0x00000000000e28d8
- (void)_logAvailabilityDescription;	// IMP=0x00000000000e26e6
- (unsigned long long)currentAvailabilityState;	// IMP=0x00000000000e263a
- (void)assertAvailability:(unsigned long long)arg1;	// IMP=0x00000000000e2597
- (void)dealloc;	// IMP=0x00000000000e2559
- (void)removeNotifications;	// IMP=0x00000000000e252e
- (id)_init;	// IMP=0x00000000000e2267

@end

