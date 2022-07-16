//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitEventsAggregationReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _acceptedXPCRequestsCount;	// 16 = 0x10
    unsigned int _activeDay;	// 20 = 0x14
    unsigned int _activeDaysPerMonthCount;	// 24 = 0x18
    unsigned int _averageSampledProcessMemoryUsage;	// 28 = 0x1c
    NSString *_dataSyncState;	// 32 = 0x20
    unsigned int _erroredXPCRequestsCount;	// 40 = 0x28
    unsigned int _filteredXPCNotificationsCount;	// 44 = 0x2c
    unsigned int _hapBTLEConnectionPerReasonsCount;	// 48 = 0x30
    unsigned int _hapBTLEConnectionsCount;	// 52 = 0x34
    unsigned int _hapBTLEDiscoveriesCount;	// 56 = 0x38
    unsigned int _hapIPInvalidationCount;	// 60 = 0x3c
    unsigned int _hapIPReceivedHTTPEventCount;	// 64 = 0x40
    unsigned int _hapIPReceivedHTTPResponsesCount;	// 68 = 0x44
    unsigned int _hapIPSentHTTPRequestsCount;	// 72 = 0x48
    unsigned int _jetsamReasonHighwaterCount;	// 76 = 0x4c
    unsigned int _jetsamReasonOtherCount;	// 80 = 0x50
    unsigned int _jetsamReasonProcessLimitCount;	// 84 = 0x54
    unsigned int _jetsamReasonUnknownKillCount;	// 88 = 0x58
    unsigned int _peakSampledProcessMemoryUsage;	// 92 = 0x5c
    unsigned int _processLaunchCount;	// 96 = 0x60
    unsigned int _processMemoryPressureStateCriticalCount;	// 100 = 0x64
    unsigned int _processMemoryPressureStateWarningCount;	// 104 = 0x68
    unsigned int _remoteMessagesReceivedCount;	// 108 = 0x6c
    unsigned int _remoteMessagesSentCount;	// 112 = 0x70
    unsigned int _sentXPCNotificationsCount;	// 116 = 0x74
    struct {
        unsigned int timestamp:1;
        unsigned int acceptedXPCRequestsCount:1;
        unsigned int activeDay:1;
        unsigned int activeDaysPerMonthCount:1;
        unsigned int averageSampledProcessMemoryUsage:1;
        unsigned int erroredXPCRequestsCount:1;
        unsigned int filteredXPCNotificationsCount:1;
        unsigned int hapBTLEConnectionPerReasonsCount:1;
        unsigned int hapBTLEConnectionsCount:1;
        unsigned int hapBTLEDiscoveriesCount:1;
        unsigned int hapIPInvalidationCount:1;
        unsigned int hapIPReceivedHTTPEventCount:1;
        unsigned int hapIPReceivedHTTPResponsesCount:1;
        unsigned int hapIPSentHTTPRequestsCount:1;
        unsigned int jetsamReasonHighwaterCount:1;
        unsigned int jetsamReasonOtherCount:1;
        unsigned int jetsamReasonProcessLimitCount:1;
        unsigned int jetsamReasonUnknownKillCount:1;
        unsigned int peakSampledProcessMemoryUsage:1;
        unsigned int processLaunchCount:1;
        unsigned int processMemoryPressureStateCriticalCount:1;
        unsigned int processMemoryPressureStateWarningCount:1;
        unsigned int remoteMessagesReceivedCount:1;
        unsigned int remoteMessagesSentCount:1;
        unsigned int sentXPCNotificationsCount:1;
    } _has;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000045de53
@property(nonatomic) unsigned int activeDaysPerMonthCount; // @synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount;
@property(nonatomic) unsigned int activeDay; // @synthesize activeDay=_activeDay;
@property(nonatomic) unsigned int hapBTLEDiscoveriesCount; // @synthesize hapBTLEDiscoveriesCount=_hapBTLEDiscoveriesCount;
@property(nonatomic) unsigned int hapBTLEConnectionPerReasonsCount; // @synthesize hapBTLEConnectionPerReasonsCount=_hapBTLEConnectionPerReasonsCount;
@property(nonatomic) unsigned int hapBTLEConnectionsCount; // @synthesize hapBTLEConnectionsCount=_hapBTLEConnectionsCount;
@property(nonatomic) unsigned int hapIPReceivedHTTPEventCount; // @synthesize hapIPReceivedHTTPEventCount=_hapIPReceivedHTTPEventCount;
@property(nonatomic) unsigned int hapIPReceivedHTTPResponsesCount; // @synthesize hapIPReceivedHTTPResponsesCount=_hapIPReceivedHTTPResponsesCount;
@property(nonatomic) unsigned int hapIPSentHTTPRequestsCount; // @synthesize hapIPSentHTTPRequestsCount=_hapIPSentHTTPRequestsCount;
@property(nonatomic) unsigned int hapIPInvalidationCount; // @synthesize hapIPInvalidationCount=_hapIPInvalidationCount;
@property(nonatomic) unsigned int filteredXPCNotificationsCount; // @synthesize filteredXPCNotificationsCount=_filteredXPCNotificationsCount;
@property(nonatomic) unsigned int sentXPCNotificationsCount; // @synthesize sentXPCNotificationsCount=_sentXPCNotificationsCount;
@property(nonatomic) unsigned int erroredXPCRequestsCount; // @synthesize erroredXPCRequestsCount=_erroredXPCRequestsCount;
@property(nonatomic) unsigned int acceptedXPCRequestsCount; // @synthesize acceptedXPCRequestsCount=_acceptedXPCRequestsCount;
@property(nonatomic) unsigned int remoteMessagesReceivedCount; // @synthesize remoteMessagesReceivedCount=_remoteMessagesReceivedCount;
@property(nonatomic) unsigned int remoteMessagesSentCount; // @synthesize remoteMessagesSentCount=_remoteMessagesSentCount;
@property(nonatomic) unsigned int peakSampledProcessMemoryUsage; // @synthesize peakSampledProcessMemoryUsage=_peakSampledProcessMemoryUsage;
@property(nonatomic) unsigned int averageSampledProcessMemoryUsage; // @synthesize averageSampledProcessMemoryUsage=_averageSampledProcessMemoryUsage;
@property(nonatomic) unsigned int processMemoryPressureStateCriticalCount; // @synthesize processMemoryPressureStateCriticalCount=_processMemoryPressureStateCriticalCount;
@property(nonatomic) unsigned int processMemoryPressureStateWarningCount; // @synthesize processMemoryPressureStateWarningCount=_processMemoryPressureStateWarningCount;
@property(nonatomic) unsigned int jetsamReasonOtherCount; // @synthesize jetsamReasonOtherCount=_jetsamReasonOtherCount;
@property(nonatomic) unsigned int jetsamReasonUnknownKillCount; // @synthesize jetsamReasonUnknownKillCount=_jetsamReasonUnknownKillCount;
@property(nonatomic) unsigned int jetsamReasonProcessLimitCount; // @synthesize jetsamReasonProcessLimitCount=_jetsamReasonProcessLimitCount;
@property(nonatomic) unsigned int jetsamReasonHighwaterCount; // @synthesize jetsamReasonHighwaterCount=_jetsamReasonHighwaterCount;
@property(nonatomic) unsigned int processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property(retain, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000045d975
- (unsigned long long)hash;	// IMP=0x000000000045d5ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000045d0df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045cd8a
- (void)copyTo:(id)arg1;	// IMP=0x000000000045ca62
- (void)writeTo:(id)arg1;	// IMP=0x000000000045c6ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000045c6f2
- (id)dictionaryRepresentation;	// IMP=0x000000000045bdf5
- (id)description;	// IMP=0x000000000045bd46
@property(nonatomic) _Bool hasActiveDaysPerMonthCount;
@property(nonatomic) _Bool hasActiveDay;
@property(nonatomic) _Bool hasHapBTLEDiscoveriesCount;
@property(nonatomic) _Bool hasHapBTLEConnectionPerReasonsCount;
@property(nonatomic) _Bool hasHapBTLEConnectionsCount;
@property(nonatomic) _Bool hasHapIPReceivedHTTPEventCount;
@property(nonatomic) _Bool hasHapIPReceivedHTTPResponsesCount;
@property(nonatomic) _Bool hasHapIPSentHTTPRequestsCount;
@property(nonatomic) _Bool hasHapIPInvalidationCount;
@property(nonatomic) _Bool hasFilteredXPCNotificationsCount;
@property(nonatomic) _Bool hasSentXPCNotificationsCount;
@property(nonatomic) _Bool hasErroredXPCRequestsCount;
@property(nonatomic) _Bool hasAcceptedXPCRequestsCount;
@property(nonatomic) _Bool hasRemoteMessagesReceivedCount;
@property(nonatomic) _Bool hasRemoteMessagesSentCount;
@property(nonatomic) _Bool hasPeakSampledProcessMemoryUsage;
@property(nonatomic) _Bool hasAverageSampledProcessMemoryUsage;
@property(nonatomic) _Bool hasProcessMemoryPressureStateCriticalCount;
@property(nonatomic) _Bool hasProcessMemoryPressureStateWarningCount;
@property(nonatomic) _Bool hasJetsamReasonOtherCount;
@property(nonatomic) _Bool hasJetsamReasonUnknownKillCount;
@property(nonatomic) _Bool hasJetsamReasonProcessLimitCount;
@property(nonatomic) _Bool hasJetsamReasonHighwaterCount;
@property(nonatomic) _Bool hasProcessLaunchCount;
@property(readonly, nonatomic) _Bool hasDataSyncState;
@property(nonatomic) _Bool hasTimestamp;

@end

