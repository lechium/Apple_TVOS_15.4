//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion;
@protocol OS_dispatch_source;

@interface MFTaskAssertion : NSObject
{
    BKSProcessAssertion *_assertion;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000000000150b6
- (_Bool)isValid;	// IMP=0x00000000000150a0
- (void)invalidate;	// IMP=0x0000000000014fec
- (void)cancelTimer;	// IMP=0x0000000000014fbd
- (id)initWithName:(id)arg1 preventIdleSleep:(_Bool)arg2;	// IMP=0x0000000000014fa8
- (id)initWithName:(id)arg1;	// IMP=0x0000000000014f91
- (id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(_Bool)arg3;	// IMP=0x0000000000014d52

@end
