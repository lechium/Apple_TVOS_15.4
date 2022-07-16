//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

@interface HAP2CoAPIOThreadQueueEntry : NSObject
{
    id <HAP2CoAPIOConsumer> _consumer;	// 8 = 0x8
    unsigned long long _operationType;	// 16 = 0x10
    CDUnknownBlockType _sessionBlock;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    HMFActivity *_activity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001827c1
- (long long)compare:(id)arg1;	// IMP=0x0000000000182770

@end
