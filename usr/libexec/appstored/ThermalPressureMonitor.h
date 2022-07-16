//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ThermalPressureMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _token;	// 16 = 0x10
    _Bool _elevated;	// 20 = 0x14
}

+ (id)defaultMonitor;	// IMP=0x004000000022f3c4
- (void).cxx_destruct;	// IMP=0x002000000022f993
- (void)_updateState;	// IMP=0x001000000022f86a
- (void)_registerForNotification;	// IMP=0x001000000022f6c1
- (void)_postStateDidChangeNotification;	// IMP=0x001000000022f5f6
@property(readonly, getter=isElevated) _Bool elevated; // @synthesize elevated=_elevated;
- (void)dealloc;	// IMP=0x001000000022f50b
- (id)init;	// IMP=0x001000000022f419

@end
