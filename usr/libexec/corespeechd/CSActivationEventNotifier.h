//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedNotifier;	// IMP=0x00400000000815aa
- (void).cxx_destruct;	// IMP=0x0020000000081bb5
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_createXPCClientConnection;	// IMP=0x0010000000081b24
- (void)notifyActivationEvent:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000819ad
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000817fa
- (void)notifyActivationEventSynchronously:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000816dd
- (void)_notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081657
- (id)init;	// IMP=0x00100000000815ff

@end

