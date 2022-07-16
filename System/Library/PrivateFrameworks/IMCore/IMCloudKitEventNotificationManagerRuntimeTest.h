//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMRuntimeTestCase.h>

#import <IMCore/IMCloudKitEventHandler-Protocol.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler>
{
    double _previousInterval;	// 8 = 0x8
    double _defaultTestDuration;	// 16 = 0x10
    IMCloudKitHookTestSingleton *_cloudKitHooks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010b978
@property(retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks; // @synthesize cloudKitHooks=_cloudKitHooks;
@property double defaultTestDuration; // @synthesize defaultTestDuration=_defaultTestDuration;
- (void)startTest;	// IMP=0x000000000010b880
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;	// IMP=0x000000000010b865
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;	// IMP=0x000000000010b84a
- (void)sendSyncStateChangedEvent;	// IMP=0x000000000010b78d
- (void)willUpdateSyncState:(id)arg1;	// IMP=0x000000000010b787
- (void)willSendSyncState:(id)arg1 withSyncStatistics:(id)arg2;	// IMP=0x000000000010b781
- (void)updateMockSyncState;	// IMP=0x000000000010b597
- (id)createSyncStatisticsForMockSyncState:(id)arg1;	// IMP=0x000000000010b51a
- (void)tearDown;	// IMP=0x000000000010b410
- (void)setUp;	// IMP=0x000000000010b312

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

