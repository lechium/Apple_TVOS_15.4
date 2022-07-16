//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PKPaymentSessionHandle : NSObject
{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e85b5
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e85a3
- (void)invalidateSession;	// IMP=0x00000000000e858f
- (_Bool)isFirstInQueue;	// IMP=0x00000000000e8587

@end
