//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKHeartbeatSeriesQueryClientInterface-Protocol.h>

@class HKHeartbeatSeriesSample, NSString;

@interface HKHeartbeatSeriesQuery <HKHeartbeatSeriesQueryClientInterface>
{
    CDUnknownBlockType _bufferHandler;	// 8 = 0x8
    HKHeartbeatSeriesSample *_heartbeatSeries;	// 16 = 0x10
}

+ (id)clientInterfaceProtocol;	// IMP=0x000000000007c77b
- (void).cxx_destruct;	// IMP=0x000000000007c8e4
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x000000000007c89a
- (void)queue_deliverError:(id)arg1;	// IMP=0x000000000007c78c
- (void)_enumerateHeartbeatData:(id)arg1 final:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007c63d
- (void)client_deliverHeartbeats;	// IMP=0x000000000007c490
- (id)initWithHeartbeatSeries:(id)arg1 bufferHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007c346
- (id)initWithHeartbeatSeries:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007c0c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

