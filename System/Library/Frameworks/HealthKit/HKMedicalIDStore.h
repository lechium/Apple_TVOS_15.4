//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, _HKMedicalIDData;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;	// 8 = 0x8
    HKTaskServerProxyProvider *_setupStatusProxyProvider;	// 16 = 0x10
    _HKMedicalIDData *_lastFetchedMedicalIDData;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

+ (id)setupStatusClientInterface;	// IMP=0x00000000000ed529
+ (id)setupStatusServerInterface;	// IMP=0x00000000000ed509
+ (id)clientInterface;	// IMP=0x00000000000ed4e9
+ (id)serverInterface;	// IMP=0x00000000000ed43c
+ (id)setupStatusTaskIdentifier;	// IMP=0x00000000000ec58a
+ (id)taskIdentifier;	// IMP=0x00000000000ec578
- (void).cxx_destruct;	// IMP=0x00000000000ed55f
- (void)connectionInvalidated;	// IMP=0x00000000000ed559
- (id)remoteInterface;	// IMP=0x00000000000ed551
- (id)exportedInterface;	// IMP=0x00000000000ed549
- (void)deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ed226
- (void)updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ecfe4
- (void)fetchMedicalIDClinicalContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ece17
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ecc4a
- (void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec9db
- (void)fetchMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ec76c
@property(readonly, nonatomic) long long medicalIDSetUpStatus;
- (id)lastFetchedMedicalIDData;	// IMP=0x00000000000ec541
- (void)setLastFetchedMedicalIDData:(id)arg1;	// IMP=0x00000000000ec4d7
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000000ec29e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

