//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RMAudioListenerPoseProviderConfiguration;
@protocol OS_dispatch_queue;

@interface RMAudioListenerPoseProvider : NSObject
{
    _Atomic _Bool isRunning;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_receiverQueue;	// 16 = 0x10
    RMAudioListenerPoseProviderConfiguration *_configuration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002e35
@property(retain, nonatomic) RMAudioListenerPoseProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
- (void)stopProducingData;	// IMP=0x0010000000002d5e
- (id)startProducingDataWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002c9f
- (id)initWithConfiguration:(id)arg1 receiverQueue:(id)arg2;	// IMP=0x0010000000002bfc

@end

