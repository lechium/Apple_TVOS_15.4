//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>
#import <HomeKitDaemonLegacy/HMDBiomeLogEvent-Protocol.h>

@class HMDHome, NSArray, NSString, NSUUID;

@interface HMDActionSetEvent : HMMLogEvent <HMDBiomeLogEvent, HMDAWDLogEvent>
{
    unsigned int _numAccessoriesModified;	// 8 = 0x8
    unsigned int _numAccessoriesInHome;	// 12 = 0xc
    unsigned int _numNonEmptyScenesInHome;	// 16 = 0x10
    unsigned long long _triggerSource;	// 24 = 0x18
    NSUUID *_actionSetUUID;	// 32 = 0x20
    NSUUID *_actionSetUniqueIdentifier;	// 40 = 0x28
    NSString *_bundleId;	// 48 = 0x30
    NSUUID *_transactionId;	// 56 = 0x38
    NSString *_clientMetricIdentifier;	// 64 = 0x40
    NSString *_serializedIdentifier;	// 72 = 0x48
    NSString *_actionSetName;	// 80 = 0x50
    NSString *_actionSetType;	// 88 = 0x58
    HMDHome *_home;	// 96 = 0x60
    NSString *_homeName;	// 104 = 0x68
    NSArray *_accessoryUUIDs;	// 112 = 0x70
    NSArray *_accessoryUniqueIdentifiers;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000054bc17
@property(readonly, copy, nonatomic) NSArray *accessoryUniqueIdentifiers; // @synthesize accessoryUniqueIdentifiers=_accessoryUniqueIdentifiers;
@property(readonly, copy, nonatomic) NSArray *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(readonly, copy) NSString *homeName; // @synthesize homeName=_homeName;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(readonly, copy, nonatomic) NSString *actionSetName; // @synthesize actionSetName=_actionSetName;
@property(readonly, copy, nonatomic) NSString *serializedIdentifier; // @synthesize serializedIdentifier=_serializedIdentifier;
@property(readonly, nonatomic) unsigned int numNonEmptyScenesInHome; // @synthesize numNonEmptyScenesInHome=_numNonEmptyScenesInHome;
@property(readonly, nonatomic) unsigned int numAccessoriesInHome; // @synthesize numAccessoriesInHome=_numAccessoriesInHome;
@property(readonly, nonatomic) unsigned int numAccessoriesModified; // @synthesize numAccessoriesModified=_numAccessoriesModified;
@property(readonly, copy, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(readonly, copy, nonatomic) NSUUID *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, copy, nonatomic) NSUUID *actionSetUniqueIdentifier; // @synthesize actionSetUniqueIdentifier=_actionSetUniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *actionSetUUID; // @synthesize actionSetUUID=_actionSetUUID;
@property(readonly, nonatomic) unsigned long long triggerSource; // @synthesize triggerSource=_triggerSource;
- (id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;	// IMP=0x000000000054b6b1
- (id)biomeEventsRepresentationForLogObserver:(id)arg1;	// IMP=0x000000000001e910
- (id)metricForAWD;	// IMP=0x0000000000797cb7
- (unsigned int)AWDMessageType;	// IMP=0x0000000000797cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

