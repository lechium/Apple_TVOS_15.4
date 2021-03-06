//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKActivityStatisticsQueryClientInterface-Protocol.h>

@class NSDate, NSDateComponents, NSString;

@interface _HKActivityStatisticsQuery <HKActivityStatisticsQueryClientInterface>
{
    _Bool _deliveredInitial;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSDateComponents *_moveIntervalComponents;	// 32 = 0x20
    NSDateComponents *_exerciseIntervalComponents;	// 40 = 0x28
    CDUnknownBlockType _queryUpdateHandler;	// 48 = 0x30
    CDUnknownBlockType _initialQueryResultsHandler;	// 56 = 0x38
    double _updateInterval;	// 64 = 0x40
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x0000000000114745
+ (id)clientInterfaceProtocol;	// IMP=0x0000000000114734
+ (Class)configurationClass;	// IMP=0x0000000000114723
- (void).cxx_destruct;	// IMP=0x0000000000114ef0
@property(nonatomic, getter=_updateInterval, setter=_setUpdateInterval:) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(copy, nonatomic) CDUnknownBlockType initialQueryResultsHandler; // @synthesize initialQueryResultsHandler=_initialQueryResultsHandler;
@property(copy, nonatomic) CDUnknownBlockType queryUpdateHandler; // @synthesize queryUpdateHandler=_queryUpdateHandler;
- (void)client_deliverResult:(id)arg1 query:(id)arg2;	// IMP=0x0000000000114c96
- (void)queue_deliverError:(id)arg1;	// IMP=0x0000000000114b09
- (void)_validateIntervalComponents:(id)arg1;	// IMP=0x0000000000114a37
- (void)queue_validate;	// IMP=0x0000000000114927
- (_Bool)queue_shouldDeactivateAfterInitialResults;	// IMP=0x0000000000114912
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x00000000001148ab
- (void)queue_populateConfiguration:(id)arg1;	// IMP=0x00000000001147c6
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialQueryResultsHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001144b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

