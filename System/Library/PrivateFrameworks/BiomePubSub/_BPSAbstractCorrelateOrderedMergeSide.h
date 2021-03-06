//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class NSString, _BPSAbstractCorrelateOrderedMerge;

@interface _BPSAbstractCorrelateOrderedMergeSide : NSObject <BPSSubscriber>
{
    unsigned long long _index;	// 8 = 0x8
    _BPSAbstractCorrelateOrderedMerge *_combiner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b6b9
@property(retain, nonatomic) _BPSAbstractCorrelateOrderedMerge *combiner; // @synthesize combiner=_combiner;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)cancel;	// IMP=0x000000000002b684
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000002b60c
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000002b58e
- (void)receiveSubscription:(id)arg1;	// IMP=0x000000000002b516
- (id)initWithIndex:(unsigned long long)arg1 combiner:(id)arg2;	// IMP=0x000000000002b4a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

