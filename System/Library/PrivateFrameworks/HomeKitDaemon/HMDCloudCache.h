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

- (void).cxx_destruct;	// IMP=0x00000000009c3eb0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(retain, nonatomic) NSMutableDictionary *homeZones; // @synthesize homeZones=_homeZones;
- (void)persistDatabaseServerChangeToken;	// IMP=0x00000000009c3dfc
@property(retain, nonatomic) CKServerChangeToken *databaseServerChangeToken;
- (void)deleteHomeZoneWithName:(id)arg1;	// IMP=0x00000000009c3ba8
- (void)deleteAllZones;	// IMP=0x00000000009c3955
- (void)homeZoneWithName:(id)arg1 owner:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009c372b
- (_Bool)homeZoneExists:(id)arg1;	// IMP=0x00000000009c35ff
- (id)allHomeZones;	// IMP=0x00000000009c34d3
- (void)createAndFetchZonesFromBackingStore:(CDUnknownBlockType)arg1;	// IMP=0x00000000009c32e6
- (void)_createZones:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009c2d4c
- (id)_findStoreCacheZone:(id)arg1 byName:(id)arg2;	// IMP=0x00000000009c2b4e
@property(retain, nonatomic) HMDCloudHomeManagerZone *homeManagerZone; // @synthesize homeManagerZone=_homeManagerZone;
@property(retain, nonatomic) HMDCloudMetadataZone *metadataZone; // @synthesize metadataZone=_metadataZone;
@property(retain, nonatomic) HMDCloudLegacyZone *legacyZone; // @synthesize legacyZone=_legacyZone;
@property(retain, nonatomic) HMDCloudZone *homeDataInformation; // @synthesize homeDataInformation=_homeDataInformation;
- (id)initWithBackingStore:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000009c2266
- (id)init;	// IMP=0x00000000009c21be

@end
