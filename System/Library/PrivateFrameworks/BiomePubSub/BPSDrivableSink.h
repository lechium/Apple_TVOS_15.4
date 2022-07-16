//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSCancellable-Protocol.h>
#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class BPSSubscriptionStatus, NSString;

@interface BPSDrivableSink : NSObject <BPSSubscriber, BPSCancellable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _finished;	// 12 = 0xc
    BPSSubscriptionStatus *_status;	// 16 = 0x10
    CDUnknownBlockType _receivedCompletion;	// 24 = 0x18
    CDUnknownBlockType _shouldContinue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001fd40
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(copy, nonatomic) CDUnknownBlockType shouldContinue; // @synthesize shouldContinue=_shouldContinue;
@property(copy, nonatomic) CDUnknownBlockType receivedCompletion; // @synthesize receivedCompletion=_receivedCompletion;
@property(retain, nonatomic) BPSSubscriptionStatus *status; // @synthesize status=_status;
- (void)cancel;	// IMP=0x000000000001fb8d
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000001fa88
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000001f953
- (void)receiveSubscription:(id)arg1;	// IMP=0x000000000001f82c
- (id)initWithReceiveCompletion:(CDUnknownBlockType)arg1 shouldContinue:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f744
- (id)init;	// IMP=0x000000000001f73e
- (id)newBookmark;	// IMP=0x000000000000a2b8
- (id)initWithReceiveBookmarkedCompletion:(CDUnknownBlockType)arg1 shouldContinue:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a0b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
