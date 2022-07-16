//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>
#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDSiriCommandEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>
{
    unsigned long long _duration;	// 8 = 0x8
    NSString *_actionType;	// 16 = 0x10
    NSString *_outcome;	// 24 = 0x18
    unsigned long long _numberOfEntities;	// 32 = 0x20
    unsigned long long _numberOfFailures;	// 40 = 0x28
    unsigned long long _numberOfIncompletions;	// 48 = 0x30
    unsigned long long _configurationVersion;	// 56 = 0x38
    unsigned long long _lastSyncedConfigurationVersion;	// 64 = 0x40
    unsigned long long _serverConfigurationVersion;	// 72 = 0x48
    NSString *_clientMetricIdentifier;	// 80 = 0x50
}

+ (_Bool)submitEventWithHistogrammedCommonConfigurationDimensions;	// IMP=0x0000000000581db5
+ (id)commandEventWithDuration:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;	// IMP=0x0000000000581cff
+ (unsigned long long)generateErrorCodeWithNumberOfFailures:(unsigned long long)arg1 numberOfIncompletions:(unsigned long long)arg2 commandOutcome:(id)arg3;	// IMP=0x0000000000581c71
- (void).cxx_destruct;	// IMP=0x0000000000581c2f
@property(readonly, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(readonly, nonatomic) unsigned long long serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(readonly, nonatomic) unsigned long long lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(readonly, nonatomic) unsigned long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, nonatomic) unsigned long long numberOfIncompletions; // @synthesize numberOfIncompletions=_numberOfIncompletions;
@property(readonly, nonatomic) unsigned long long numberOfFailures; // @synthesize numberOfFailures=_numberOfFailures;
@property(readonly, nonatomic) unsigned long long numberOfEntities; // @synthesize numberOfEntities=_numberOfEntities;
@property(readonly, nonatomic) NSString *outcome; // @synthesize outcome=_outcome;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithDuration:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;	// IMP=0x0000000000581378
- (id)metricForAWD;	// IMP=0x000000000078ddff
- (unsigned int)AWDMessageType;	// IMP=0x000000000078ddf4

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

