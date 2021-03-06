//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHeartRateSummaryQueryClientInterface-Protocol.h>

@class NSString;

@interface HKHeartRateSummaryQuery <HKHeartRateSummaryQueryClientInterface>
{
    CDUnknownBlockType _updateHandler;	// 8 = 0x8
}

+ (id)clientInterfaceProtocol;	// IMP=0x0000000000043aa6
- (void).cxx_destruct;	// IMP=0x0000000000043c68
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x0000000000043c47
- (_Bool)queue_shouldDeactivateAfterInitialResults;	// IMP=0x0000000000043c3f
- (void)queue_validate;	// IMP=0x0000000000043bc0
- (void)queue_deliverError:(id)arg1;	// IMP=0x0000000000043ab7
- (void)client_deliverSummary:(id)arg1 queryUUID:(id)arg2;	// IMP=0x0000000000043866
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000437e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

