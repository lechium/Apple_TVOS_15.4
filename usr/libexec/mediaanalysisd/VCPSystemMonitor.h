//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface VCPSystemMonitor : NSObject
{
    int _powerToken;	// 8 = 0x8
    int _screenToken;	// 12 = 0xc
    int _chargedToken;	// 16 = 0x10
    int _thermalToken;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_freeSpaceTimer;	// 24 = 0x18
    long long _recommendedState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003f903
@property(readonly) long long recommendedState; // @synthesize recommendedState=_recommendedState;
- (int)disable;	// IMP=0x001000000003f8d7
- (int)enable;	// IMP=0x001000000003f56e
- (void)checkFreeSpace;	// IMP=0x001000000003f24e
- (unsigned long long)checkThermalPressure;	// IMP=0x001000000003f146
- (id)checkFullyCharged;	// IMP=0x001000000003eeec
- (long long)checkScreenLocked;	// IMP=0x001000000003ed3a
- (long long)checkPluggedIn;	// IMP=0x001000000003eb6b
- (void)dealloc;	// IMP=0x001000000003eade
- (void)reset;	// IMP=0x001000000003ea6f
- (id)init;	// IMP=0x001000000003ea10

@end

