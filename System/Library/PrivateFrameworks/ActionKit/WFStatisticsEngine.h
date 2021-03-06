//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFStatisticsEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_statisticsQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000357d39
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue; // @synthesize statisticsQueue=_statisticsQueue;
- (void)standardDeviationOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357cff
- (void)rangeOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357c41
- (void)modeOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357c22
- (void)medianOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357c03
- (void)sumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357be4
- (void)maximumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357bc5
- (void)minimumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357ba6
- (void)averageOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000357b87
- (void)asyncApplyNSExpressionFunction:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000357a4d
- (void)applyOperation:(long long)arg1 onStatisticsSampleProviders:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000357900
- (void)applyOperation:(long long)arg1 onNumbers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000035780e
- (id)init;	// IMP=0x000000000035778a

@end

