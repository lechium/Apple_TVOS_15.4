//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString;

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
}

+ (id)clientInterface;	// IMP=0x000000000006254c
+ (id)serverInterface;	// IMP=0x0000000000062499
+ (id)taskIdentifier;	// IMP=0x000000000006244f
- (void).cxx_destruct;	// IMP=0x0000000000062acd
- (void)tearDownHealthSharingForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000628e8
- (void)revokeAccessForAllShareParticipantsForSharingType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006272a
- (void)fetchAllShareParticipantEmailAddressesForSharingType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006256c
- (void)connectionInvalidated;	// IMP=0x0000000000062493
- (id)remoteInterface;	// IMP=0x000000000006247a
- (id)exportedInterface;	// IMP=0x0000000000062461
- (id)initWithHealthStore:(id)arg1;	// IMP=0x000000000006234c
@property(readonly, nonatomic) long long lastKnownParticipantSharingStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

