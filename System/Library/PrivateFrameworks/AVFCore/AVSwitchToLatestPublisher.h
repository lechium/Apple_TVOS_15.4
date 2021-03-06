//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVNotificationSubscription, AVPublisher;

@interface AVSwitchToLatestPublisher
{
    struct OpaqueFigReentrantMutex *_callbackMutex;	// 8 = 0x8
    AVPublisher *_upstream;	// 16 = 0x10
    AVNotificationSubscription *_outputPublisherSubscription;	// 24 = 0x18
    int _publisherIndex;	// 32 = 0x20
}

+ (id)switchToLatestPublisherWithUpstream:(id)arg1;	// IMP=0x000000000007f85a
- (id)description;	// IMP=0x000000000007fcb8
- (id)subscribeRequestingInitialValue:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f90d
- (void)dealloc;	// IMP=0x000000000007f890
- (id)initWithUpstream:(id)arg1;	// IMP=0x000000000007f7e5

@end

