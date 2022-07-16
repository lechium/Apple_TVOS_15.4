//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class NSDate, NSString;
@protocol BPSSubscriber;

@interface _BPSThrottleInner : NSObject <BPSSubscriber>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CDUnknownBlockType _getTimestamp;	// 16 = 0x10
    _Bool _latest;	// 24 = 0x18
    id <BPSSubscriber> _downstream;	// 32 = 0x20
    double _interval;	// 40 = 0x28
    id _intervalEvent;	// 48 = 0x30
    NSDate *_nextIntervalBoundary;	// 56 = 0x38
    NSDate *_startTimestamp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002d52c
@property(retain, nonatomic) NSDate *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) NSDate *nextIntervalBoundary; // @synthesize nextIntervalBoundary=_nextIntervalBoundary;
@property(retain, nonatomic) id intervalEvent; // @synthesize intervalEvent=_intervalEvent;
@property(nonatomic) _Bool latest; // @synthesize latest=_latest;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (void)receiveSubscription:(id)arg1;	// IMP=0x000000000002d426
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000002d0b0
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000002d007
- (void)cancel;	// IMP=0x000000000002cf7c
- (id)initWithDownstream:(id)arg1 interval:(double)arg2 latest:(_Bool)arg3 getTimestamp:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ce69
- (id)init;	// IMP=0x000000000002ce63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

