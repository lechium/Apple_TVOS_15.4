//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATIDSServiceConnectionDataAggregationDelegate-Protocol.h>
#import <Catalyst/CATIDSServiceConnectionDataAggregator-Protocol.h>

@class NSMutableDictionary, NSMutableIndexSet;
@protocol CATIDSServiceConnectionDataAggregatorDelegate, CATTimer, CATTimerSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATConcreteIDSServiceConnectionDataAggregator : NSObject <CATIDSServiceConnectionDataAggregationDelegate, CATIDSServiceConnectionDataAggregator>
{
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 8 = 0x8
    id <CATTimerSource> mTimerSource;	// 16 = 0x10
    double mMissingItemInterval;	// 24 = 0x18
    _Bool mSupportsSequenceCorrection;	// 32 = 0x20
    NSMutableDictionary *mAggregationsByDataNumber;	// 40 = 0x28
    unsigned long long mNextDeploymentNumber;	// 48 = 0x30
    unsigned long long mNextExpectedSequenceNumber;	// 56 = 0x38
    unsigned long long mGreatestExpectedSequenceNumber;	// 64 = 0x40
    NSMutableIndexSet *mPendingSequenceNumbers;	// 72 = 0x48
    id <CATTimer> mMissingContentTimer;	// 80 = 0x50
    id <CATIDSServiceConnectionDataAggregatorDelegate> _delegate;	// 88 = 0x58
}

+ (id)missingContentTimerIdentifier;	// IMP=0x000000000000be43
- (void).cxx_destruct;	// IMP=0x000000000000bf12
@property(nonatomic) __weak id <CATIDSServiceConnectionDataAggregatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x000000000000be9d
- (void)dataAggregationCompleted:(id)arg1;	// IMP=0x000000000000bcb1
- (void)missingContentTimerDidFire:(id)arg1 fireCount:(unsigned long long)arg2;	// IMP=0x000000000000bbde
- (void)updateMissingContentTrackingForDataContent:(id)arg1;	// IMP=0x000000000000b87b
- (void)updateExistingDataWindowWithContent:(id)arg1;	// IMP=0x000000000000b745
- (void)processNewDataWindowWithContent:(id)arg1;	// IMP=0x000000000000b656
- (void)receiveExpectedSequenceNumber:(unsigned long long)arg1;	// IMP=0x000000000000b580
- (void)receiveDataContent:(id)arg1;	// IMP=0x000000000000b45b
@property(readonly, nonatomic) unsigned long long receivedSequenceNumber;
- (id)missingSequenceNumbers;	// IMP=0x000000000000b3b2
- (id)initWithWorkQueue:(id)arg1 timerSource:(id)arg2 missingItemInterval:(double)arg3 supportsSequenceCorrection:(_Bool)arg4;	// IMP=0x000000000000b2cc

@end

