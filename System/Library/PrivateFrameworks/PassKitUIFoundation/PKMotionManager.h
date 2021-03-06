//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMDeviceMotion, CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject
{
    CMMotionManager *_motionManager;	// 8 = 0x8
    NSHashTable *_clients;	// 16 = 0x10
    _Bool _monitoring;	// 24 = 0x18
    CMDeviceMotion *_motion;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000000d53d
- (void).cxx_destruct;	// IMP=0x000000000000d9db
@property(readonly, nonatomic) CMDeviceMotion *motion; // @synthesize motion=_motion;
@property(readonly, nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)unregisterClient:(id)arg1;	// IMP=0x000000000000d92a
- (void)registerClient:(id)arg1;	// IMP=0x000000000000d7fa
- (void)updateWithMotion:(id)arg1;	// IMP=0x000000000000d69b
- (void)dealloc;	// IMP=0x000000000000d653
- (id)_init;	// IMP=0x000000000000d5b0
- (id)init;	// IMP=0x000000000000d5a2

@end

