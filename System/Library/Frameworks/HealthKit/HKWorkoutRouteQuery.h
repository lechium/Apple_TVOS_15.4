//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkoutRouteQueryClientInterface-Protocol.h>

@class HKWorkoutRoute, NSString;

@interface HKWorkoutRouteQuery <HKWorkoutRouteQueryClientInterface>
{
    CDUnknownBlockType _dataHandler;	// 8 = 0x8
    HKWorkoutRoute *_series;	// 16 = 0x10
}

+ (void)configureClientInterface:(id)arg1;	// IMP=0x00000000000a9f04
+ (id)clientInterfaceProtocol;	// IMP=0x00000000000a9ef3
+ (Class)configurationClass;	// IMP=0x00000000000a9ee2
- (void).cxx_destruct;	// IMP=0x00000000000aa181
@property(copy) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
- (void)queue_queryDidDeactivate:(id)arg1;	// IMP=0x00000000000aa110
- (void)queue_deliverError:(id)arg1;	// IMP=0x00000000000aa002
- (void)queue_populateConfiguration:(id)arg1;	// IMP=0x00000000000a9f85
- (void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(_Bool)arg2 query:(id)arg3;	// IMP=0x00000000000a9c76
- (id)initWithRoute:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a9b34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

