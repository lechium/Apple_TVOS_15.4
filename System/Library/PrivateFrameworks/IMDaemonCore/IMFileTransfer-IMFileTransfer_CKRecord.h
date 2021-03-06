//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMFileTransfer.h>

@interface IMFileTransfer (IMFileTransfer_CKRecord)
+ (_Bool)validateMD5HashForRecord:(id)arg1;	// IMP=0x000000000008b95f
+ (id)md5HashForRecord:(id)arg1;	// IMP=0x000000000008b8e8
+ (void)cleanUpAssetsOnDiskForRecord:(id)arg1;	// IMP=0x000000000008b840
+ (_Bool)attachmentRecordHasAsset:(id)arg1;	// IMP=0x000000000008b789
+ (id)transferGUIDOfRecord:(id)arg1;	// IMP=0x000000000008b712
+ (long long)sizeOfAssetForRecord:(id)arg1;	// IMP=0x000000000008b68e
+ (id)utiTypeForRecord:(id)arg1;	// IMP=0x000000000008b617
+ (_Bool)_recordIsInvalid:(id)arg1;	// IMP=0x000000000008b5c9
+ (void)cleanUpAsset:(id)arg1;	// IMP=0x000000000008a342
+ (id)transferMetaDataFromRecord:(id)arg1;	// IMP=0x000000000008a26f
+ (id)_recordType;	// IMP=0x0000000000089628
- (id)_fileManager;	// IMP=0x000000000008bbd6
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(_Bool)arg2;	// IMP=0x000000000008b18d
- (void)moveAssetFromRecord:(id)arg1;	// IMP=0x000000000008aa57
- (_Bool)hasPreferredAssetOverRecord:(id)arg1;	// IMP=0x000000000008a79b
- (_Bool)wantsAssetFromRecord:(id)arg1;	// IMP=0x000000000008a438
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x00000000000899b2
- (void)_setRecordPropertiesBasedOnExistingRecord:(id)arg1;	// IMP=0x0000000000089922
- (id)md5HashForTransfer;	// IMP=0x00000000000898f1
- (id)md5HashForURL:(id)arg1;	// IMP=0x0000000000089832
- (id)ckRecordIDFromExistingMetadata;	// IMP=0x00000000000897d8
- (id)_copyCKRecordFromExistingCKMetadata;	// IMP=0x0000000000089714
- (id)_assetURLToInsertToRecord;	// IMP=0x0000000000089635
- (id)_ckUniqueID;	// IMP=0x0000000000089616
@end

