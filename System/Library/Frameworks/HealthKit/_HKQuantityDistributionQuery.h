//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQuantityDistributionQueryClientInterface-Protocol.h>

@class HKQuantity, NSDate, NSDateComponents, NSString;

@interface _HKQuantityDistributionQuery <HKQuantityDistributionQueryClientInterface>
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    long long _contextStyle;	// 24 = 0x18
    NSDate *_anchorDate;	// 32 = 0x20
    NSDateComponents *_intervalComponents;	// 40 = 0x28
    HKQuantity *_histogramAnchor;	// 48 = 0x30
    HKQuantity *_histogramBucketSize;	// 56 = 0x38
    unsigned long long _options;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x000000000015678a
+ (id)clientInterfaceProtocol;	// IMP=0x0000000000156779
+ (Class)configurationClass;	// IMP=0x0000000000156768
- (void).cxx_destruct;	// IMP=0x0000000000156c04
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) HKQuantity *histogramBucketSize; // @synthesize histogramBucketSize=_histogramBucketSize;
@property(readonly, nonatomic) HKQuantity *histogramAnchor; // @synthesize histogramAnchor=_histogramAnchor;
@property(readonly, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(readonly, nonatomic) long long contextStyle; // @synthesize contextStyle=_contextStyle;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)client_deliverDistributionCollection:(id)arg1 forQuery:(id)arg2;	// IMP=0x000000000015699e
- (void)queue_populateConfiguration:(id)arg1;	// IMP=0x0000000000156873
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x0000000000156829
- (void)queue_deliverError:(id)arg1;	// IMP=0x000000000015680b
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 histogramAnchor:(id)arg8 histogramBucketSize:(id)arg9 options:(unsigned long long)arg10 completionHandler:(CDUnknownBlockType)arg11;	// IMP=0x00000000001564b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

