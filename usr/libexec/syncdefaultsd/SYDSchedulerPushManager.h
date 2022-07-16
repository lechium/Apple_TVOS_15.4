//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYDPushManager;

@interface SYDSchedulerPushManager : NSObject
{
    NSString *_user;	// 8 = 0x8
    SYDPushManager *_pushManager;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    double _refreshInterval;	// 32 = 0x20
}

+ (void)_unregisterManager:(id)arg1;	// IMP=0x004000000005ead7
+ (void)_registerManager:(id)arg1;	// IMP=0x001000000005ea65
+ (void)_managerDidChange:(id)arg1;	// IMP=0x001000000005e7c8
+ (id)sharedManagers;	// IMP=0x001000000005e773
- (void).cxx_destruct;	// IMP=0x002000000005f518
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) SYDPushManager *pushManager; // @synthesize pushManager=_pushManager;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
- (void)shutdown;	// IMP=0x001000000005f459
- (void)didUpdateTokenOnServer:(id)arg1;	// IMP=0x001000000005f443
- (void)resetUpdates;	// IMP=0x001000000005f42d
- (double)nextUpdateInterval;	// IMP=0x001000000005f3dd
- (void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3;	// IMP=0x001000000005f1ad
- (_Bool)needsUpdate;	// IMP=0x001000000005f185
- (id)publicToken;	// IMP=0x001000000005f14d
- (id)persistentState;	// IMP=0x001000000005f051
- (void)_managerDidReceivePushNotification:(id)arg1;	// IMP=0x001000000005ef07
- (void)_managerNeedsUpdateOnServer:(id)arg1;	// IMP=0x001000000005ee23
- (void)dealloc;	// IMP=0x001000000005edae
- (id)initWithPersistentState:(id)arg1 pushManager:(id)arg2;	// IMP=0x001000000005eba7

@end

