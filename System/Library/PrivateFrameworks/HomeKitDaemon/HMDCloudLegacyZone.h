//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, NSUUID;

@interface HMDCloudLegacyZone
{
    NSUUID *_metadataObjectID;	// 72 = 0x48
    CKRecordID *_metadataRecordID;	// 80 = 0x50
    NSUUID *_homeDataObjectID;	// 88 = 0x58
    CKRecordID *_homeDataRecordID;	// 96 = 0x60
    NSUUID *_homeDataV3ObjectID;	// 104 = 0x68
    CKRecordID *_homeDataV3RecordID;	// 112 = 0x70
}

+ (void)createLegacyZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000301e79
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x0000000000301e6c
+ (id)zoneRootRecordName;	// IMP=0x0000000000301e4d
- (void).cxx_destruct;	// IMP=0x0000000000301dd8
- (void)setServerChangeToken:(id)arg1;	// IMP=0x0000000000301d97
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;	// IMP=0x0000000000301d5c
- (void)dropCachedRecords;	// IMP=0x0000000000301cc4
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;	// IMP=0x0000000000301768
- (id)homeDataV3ModelWithPushDataPush:(id)arg1;	// IMP=0x000000000030174f
- (id)homeDataModelWithPushDataPush:(id)arg1;	// IMP=0x0000000000301733
- (id)metadataModelWithPushDataPush:(id)arg1;	// IMP=0x000000000030171a
@property(readonly, nonatomic, getter=isHomeDataV3RecordAvailable) _Bool homeDataV3RecordAvailable;
@property(readonly, nonatomic) CKRecordID *homeDataV3RecordID; // @synthesize homeDataV3RecordID=_homeDataV3RecordID;
@property(readonly, nonatomic) NSUUID *homeDataV3ObjectID; // @synthesize homeDataV3ObjectID=_homeDataV3ObjectID;
@property(readonly, nonatomic, getter=isHomeDataRecordAvailable) _Bool homeDataRecordAvailable;
@property(readonly, nonatomic) CKRecordID *homeDataRecordID; // @synthesize homeDataRecordID=_homeDataRecordID;
@property(readonly, nonatomic) NSUUID *homeDataObjectID; // @synthesize homeDataObjectID=_homeDataObjectID;
@property(readonly, nonatomic, getter=isMetadataRecordAvailable) _Bool metadataRecordAvailable;
@property(readonly, nonatomic) CKRecordID *metadataRecordID; // @synthesize metadataRecordID=_metadataRecordID;
@property(readonly, nonatomic) NSUUID *metadataObjectID; // @synthesize metadataObjectID=_metadataObjectID;
- (_Bool)doesProcessChangeEvenIfDecryptionFails;	// IMP=0x00000000003012a4

@end
