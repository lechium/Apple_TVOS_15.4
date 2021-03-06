//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKServerChangeToken, HMDBackingStore, HMDCloudHomeManagerZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDCloudZone, HMFUnfairLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCloudCache : HMFObject
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMDCloudZone *_homeDataInformation;	// 16 = 0x10
    HMDCloudLegacyZone *_legacyZone;	// 24 = 0x18
    HMDCloudMetadataZone *_metadataZone;	// 32 = 0x20
    HMDCloudHomeManagerZone *_homeManagerZone;	// 40 = 0x28
    NSMutableDictionary *_homeZones;	// 48 = 0x30
    HMDBackingStore *_backingStore;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000090e806
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(retain, nonatomic) NSMutableDictionary *homeZones; // @synthesize homeZones=_homeZones;
- (void)persistDatabaseServerChangeToken;	// IMP=0x000000000090e752
@property(retain, nonatomic) CKServerChangeToken *databaseServerChangeToken;
- (void)deleteHomeZoneWithName:(id)arg1;	// IMP=0x000000000090e4fe
- (void)deleteAllZones;	// IMP=0x000000000090e2ab
- (void)homeZoneWithName:(id)arg1 owner:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000090e081
- (_Bool)homeZoneExists:(id)arg1;	// IMP=0x000000000090df55
- (id)allHomeZones;	// IMP=0x000000000090de29
- (void)createAndFetchZonesFromBackingStore:(CDUnknownBlockType)arg1;	// IMP=0x000000000090dc3c
- (void)_createZones:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000090d6a2
- (id)_findStoreCacheZone:(id)arg1 byName:(id)arg2;	// IMP=0x000000000090d4a4
@property(retain, nonatomic) HMDCloudHomeManagerZone *homeManagerZone; // @synthesize homeManagerZone=_homeManagerZone;
@property(retain, nonatomic) HMDCloudMetadataZone *metadataZone; // @synthesize metadataZone=_metadataZone;
@property(retain, nonatomic) HMDCloudLegacyZone *legacyZone; // @synthesize legacyZone=_legacyZone;
@property(retain, nonatomic) HMDCloudZone *homeDataInformation; // @synthesize homeDataInformation=_homeDataInformation;
- (id)initWithBackingStore:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000090cbbc
- (id)init;	// IMP=0x000000000090cb14

@end

