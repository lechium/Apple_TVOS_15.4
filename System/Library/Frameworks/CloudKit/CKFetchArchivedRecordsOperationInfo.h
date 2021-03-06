//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface CKFetchArchivedRecordsOperationInfo <NSSecureCoding>
{
    _Bool _shouldFetchAssetContents;	// 8 = 0x8
    _Bool _fetchAllChanges;	// 9 = 0x9
    NSArray *_recordZoneIDs;	// 16 = 0x10
    NSDictionary *_configurationsByRecordZoneID;	// 24 = 0x18
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009094e
- (void).cxx_destruct;	// IMP=0x0000000000090ddf
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000090ab2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000090956
- (id)init;	// IMP=0x0000000000090904

@end

