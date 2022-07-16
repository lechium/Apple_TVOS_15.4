//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MMCS/MMCSOperationStateTimeRange-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>
{
    unsigned long long _operationState;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

+ (id)describedSortedRanges:(id)arg1;	// IMP=0x0000000000006599
+ (id)descriptionWithOperationState:(unsigned long long)arg1 absoluteStart:(double)arg2 duration:(double)arg3;	// IMP=0x00000000000064be
+ (id)stringForOperationState:(unsigned long long)arg1;	// IMP=0x0000000000006485
- (void).cxx_destruct;	// IMP=0x00000000000069c5
@property(readonly) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) unsigned long long operationState; // @synthesize operationState=_operationState;
@property(readonly) double relativeStart;
@property(readonly) double absoluteStop;
- (long long)compareStopTime:(id)arg1;	// IMP=0x00000000000068a4
- (long long)compareStartTime:(id)arg1;	// IMP=0x0000000000006824
@property(readonly) double executing;
@property(readonly) double queueing;
@property(readonly) double absoluteStart;
@property(readonly, copy) NSString *description;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000006400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

