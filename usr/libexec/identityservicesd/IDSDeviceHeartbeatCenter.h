//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000000a4a0
- (void).cxx_destruct;	// IMP=0x002000000000d410
- (void)systemDidWake;	// IMP=0x001000000000d3e0
- (void)_cleanupKeychain;	// IMP=0x001000000000d290
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x001000000000cb70
- (void)accountsChanged;	// IMP=0x001000000000c2f0
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x001000000000bc70
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x001000000000bb40
- (void)_updateDependentRegistrations;	// IMP=0x001000000000ba40
- (void)_scheduleRescueHeartBeat;	// IMP=0x001000000000b880
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x001000000000b590
- (void)invalidateTimer;	// IMP=0x001000000000b550
- (void)printInfo;	// IMP=0x001000000000af30
- (void)dealloc;	// IMP=0x001000000000aea0
- (id)_getNextExpirationDate;	// IMP=0x001000000000a810
- (void)_heartBeat;	// IMP=0x001000000000a6e0
- (void)setup;	// IMP=0x001000000000a660
- (id)init;	// IMP=0x001000000000a560

@end

