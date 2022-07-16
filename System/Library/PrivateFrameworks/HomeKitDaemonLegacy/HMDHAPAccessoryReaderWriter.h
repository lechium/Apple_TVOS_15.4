//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDHAPAccessoryReader-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHAPAccessoryWriter-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDHAPAccessoryTaskTracker, HMDHome, NSString;
@protocol HMDHAPAccessoryReaderWriterDataSource;

@interface HMDHAPAccessoryReaderWriter : NSObject <HMFLogging, HMDHAPAccessoryReader, HMDHAPAccessoryWriter>
{
    HMDHAPAccessoryTaskTracker *_tracker;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    id <HMDHAPAccessoryReaderWriterDataSource> _dataSource;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000a5f802
- (void).cxx_destruct;	// IMP=0x0000000000a5f257
@property(readonly) id <HMDHAPAccessoryReaderWriterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDHAPAccessoryTaskTracker *tracker; // @synthesize tracker=_tracker;
- (id)logIdentifier;	// IMP=0x0000000000a5f19f
- (CDUnknownBlockType)_completionHandlerWithContext:(id)arg1;	// IMP=0x0000000000a5f115
- (_Bool)_isPrimaryResidentDevice;	// IMP=0x0000000000a5f0d1
- (_Bool)_isSecondaryResidentDevice;	// IMP=0x0000000000a5f076
- (_Bool)_isNotResidentDevice;	// IMP=0x0000000000a5f033
- (_Bool)_cannotForwardMessage:(id)arg1;	// IMP=0x0000000000a5f017
- (void)submitWriteRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000a5ec25
- (id)_defaultTaskForCurrentDeviceWithContext:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000a5ea13
- (void)submitReadRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000a5e609
- (void)handleRemotelyUpdatedCharacteristicsMessage:(id)arg1;	// IMP=0x0000000000a5e28e
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000a5e1e2
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000a5e17e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
