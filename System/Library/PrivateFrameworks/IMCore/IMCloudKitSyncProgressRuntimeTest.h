//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IMCloudKitSyncProgressRuntimeTest
{
    unsigned long long _progressCount;	// 8 = 0x8
    unsigned long long _maxProgressCount;	// 16 = 0x10
    double _progressRescheduleDelay;	// 24 = 0x18
}

@property double progressRescheduleDelay; // @synthesize progressRescheduleDelay=_progressRescheduleDelay;
@property unsigned long long maxProgressCount; // @synthesize maxProgressCount=_maxProgressCount;
@property unsigned long long progressCount; // @synthesize progressCount=_progressCount;
- (void)setUp;	// IMP=0x00000000000aa6c5
- (id)createSyncStatisticsForMockSyncState:(id)arg1;	// IMP=0x00000000000aa5ee
- (void)startTest;	// IMP=0x00000000000aa5b7
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;	// IMP=0x00000000000aa4b0

@end

