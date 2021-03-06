//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDDatabaseZoneManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerDelegate-Protocol.h>

@class HMBLocalZone, HMDDatabaseZoneManager, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDUserActionPredictionManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    HMBLocalZone *_localZone;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDDatabaseZoneManager *_zoneManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000024a02
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000000248ce
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x0000000000024190
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x0000000000024158
- (id)_removeZones;	// IMP=0x000000000002401e
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (void)removeZones;	// IMP=0x0000000000023e29
- (void)configure;	// IMP=0x0000000000023d22
- (id)initWithZoneManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000023bc3
- (id)initWithHome:(id)arg1;	// IMP=0x00000000000239a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

