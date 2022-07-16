//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    long long _submissionState;	// 8 = 0x8
    NSString *_dataSyncState;	// 16 = 0x10
    double _timeIntervalSincePreviousProcessLaunch;	// 24 = 0x18
    unsigned long long _millisecondsSinceLaunchToDataSyncStateGood;	// 32 = 0x20
    long long _numUncommittedRecords;	// 40 = 0x28
    long long _numUncommittedAndPushedRecords;	// 48 = 0x30
    NSString *_processExitType;	// 56 = 0x38
    NSString *_processExitReason;	// 64 = 0x40
    unsigned long long _processLaunchCount;	// 72 = 0x48
    unsigned long long _processJetsamCount;	// 80 = 0x50
    unsigned long long _processCrashCount;	// 88 = 0x58
}

+ (_Bool)submitEventWithHistogrammedCommonConfigurationDimensions;	// IMP=0x0000000000689958
- (void).cxx_destruct;	// IMP=0x0000000000689916
@property(readonly) unsigned long long processCrashCount; // @synthesize processCrashCount=_processCrashCount;
@property(readonly) unsigned long long processJetsamCount; // @synthesize processJetsamCount=_processJetsamCount;
@property(readonly) unsigned long long processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property(readonly, nonatomic) NSString *processExitReason; // @synthesize processExitReason=_processExitReason;
@property(readonly, nonatomic) NSString *processExitType; // @synthesize processExitType=_processExitType;
@property(readonly) long long numUncommittedAndPushedRecords; // @synthesize numUncommittedAndPushedRecords=_numUncommittedAndPushedRecords;
@property(readonly) long long numUncommittedRecords; // @synthesize numUncommittedRecords=_numUncommittedRecords;
@property(readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood; // @synthesize millisecondsSinceLaunchToDataSyncStateGood=_millisecondsSinceLaunchToDataSyncStateGood;
@property(readonly) double timeIntervalSincePreviousProcessLaunch; // @synthesize timeIntervalSincePreviousProcessLaunch=_timeIntervalSincePreviousProcessLaunch;
@property(readonly, copy, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly) long long submissionState; // @synthesize submissionState=_submissionState;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithSubmissionState:(long long)arg1 dataSyncState:(id)arg2 timeIntervalSincePreviousProcessLaunch:(double)arg3 millisecondsSinceLaunchToDataSyncStateGood:(unsigned long long)arg4 numUncommittedRecords:(long long)arg5 numUncommittedAndPushedRecords:(long long)arg6 processExitType:(id)arg7 processExitReason:(id)arg8 processLaunchCount:(unsigned long long)arg9 processJetsamCount:(unsigned long long)arg10 processCrashCount:(unsigned long long)arg11;	// IMP=0x0000000000689327

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

