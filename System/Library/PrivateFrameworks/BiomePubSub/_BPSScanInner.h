//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class NSString;
@protocol BPSSubscriber;

@interface _BPSScanInner : NSObject <BPSSubscriber>
{
    id <BPSSubscriber> _downstream;	// 8 = 0x8
    id _result;	// 16 = 0x10
    CDUnknownBlockType _nextPartialResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025fca
@property(copy, nonatomic) CDUnknownBlockType nextPartialResult; // @synthesize nextPartialResult=_nextPartialResult;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (void)cancel;	// IMP=0x0000000000025f3e
- (void)receiveCompletion:(id)arg1;	// IMP=0x0000000000025e95
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000025d8b
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000025d19
- (id)initWithDownstream:(id)arg1 nextPartialResult:(CDUnknownBlockType)arg2 initialResult:(id)arg3;	// IMP=0x0000000000025c46
- (id)init;	// IMP=0x0000000000025c40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

