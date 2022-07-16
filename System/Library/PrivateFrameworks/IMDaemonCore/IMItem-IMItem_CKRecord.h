//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMItem_CKRecord)
+ (void)resetSyncStateForMessage:(id)arg1 toState:(long long)arg2;	// IMP=0x00000000000428e4
+ (id)createItemWithCKRecord:(id)arg1;	// IMP=0x0000000000041f3a
+ (id)createUpdateT1Info:(id)arg1;	// IMP=0x0000000000041a85
+ (id)createCKRecordForUpdateT2:(id)arg1 zoneID:(id)arg2 salt:(id)arg3;	// IMP=0x000000000004195c
+ (id)createCKRecordForUpdateT1:(id)arg1 zoneID:(id)arg2 salt:(id)arg3;	// IMP=0x0000000000041804
+ (id)populateIMMessageActionItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x00000000000415b9
+ (id)messageActionChangeProtobufForCompressedData:(id)arg1;	// IMP=0x0000000000041567
+ (id)populateIMGroupActionItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x0000000000041356
+ (id)groupActionProtobufForCompressedData:(id)arg1;	// IMP=0x0000000000041304
+ (id)populateIMLocationShareStatusChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x000000000004109b
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)arg1;	// IMP=0x0000000000041049
+ (id)populateIMParticipantChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x0000000000040e38
+ (id)participantChangeProtobufForCompressedData:(id)arg1;	// IMP=0x0000000000040de6
+ (id)populateIMGroupTitleChangeItem:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x0000000000040bd5
+ (id)groupTitleChangeProtobufForCompressedData:(id)arg1;	// IMP=0x0000000000040b83
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufDataP3:(id)arg2;	// IMP=0x00000000000407b6
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufDataP2:(id)arg2;	// IMP=0x000000000004075f
+ (id)populateIMMessageItemWithProtobufFields:(id)arg1 withProtobufData:(id)arg2;	// IMP=0x00000000000404fd
+ (id)protobufForUpdateT2:(id)arg1;	// IMP=0x00000000000404ab
+ (id)protobufForUpdateT1:(id)arg1;	// IMP=0x0000000000040459
+ (id)protobufForCompressedDataP3:(id)arg1;	// IMP=0x0000000000040407
+ (id)protobufForCompressedDataP2:(id)arg1;	// IMP=0x00000000000403b5
+ (id)protobufForCompressedData:(id)arg1;	// IMP=0x0000000000040363
+ (id)compressedProtobufDataForUpdateT2:(id)arg1;	// IMP=0x00000000000402b6
+ (id)compressedProtobufDataForUpdateT1:(id)arg1;	// IMP=0x00000000000401e4
+ (id)compressedProtobufDataWithPadding:(id)arg1;	// IMP=0x000000000003fcd6
+ (id)_updateV1RecordType;	// IMP=0x000000000003fcb0
- (_Bool)isCompatibleWithMiC;	// IMP=0x000000000004333d
- (_Bool)shouldStoreMessage;	// IMP=0x0000000000042ae3
- (_Bool)_shouldDownloadIfPhoneNumberAndNoSIM:(id)arg1;	// IMP=0x0000000000042a2c
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x0000000000041c1e
- (id)_recordFromServerChangeToken;	// IMP=0x0000000000041b7a
- (_Bool)callerIDShouldBeCheckedForRegistration:(id)arg1;	// IMP=0x000000000004192d
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)arg1;	// IMP=0x0000000000041755
- (id)compressedProtobufDataForMessageActionItem;	// IMP=0x000000000004164c
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)arg1;	// IMP=0x00000000000414b8
- (id)compressedProtobufDataForGroupActionItem;	// IMP=0x00000000000413cc
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)arg1;	// IMP=0x0000000000041255
- (id)compressedProtobufDataForLocationShareStatusChangeItem;	// IMP=0x000000000004114c
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)arg1;	// IMP=0x0000000000040f9a
- (id)compressedProtobufDataForParticipantChangeItem;	// IMP=0x0000000000040eae
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)arg1;	// IMP=0x0000000000040d37
- (id)compressedProtobufDataForGroupTitleChangeItem;	// IMP=0x0000000000040c4b
- (void)_populateCKRecordWithIMMessageItemFields:(id)arg1;	// IMP=0x0000000000040997
- (void)_populateCKRecordWithIMItemFields:(id)arg1;	// IMP=0x000000000004082a
- (id)compressedProtobufDataForMessageP3;	// IMP=0x0000000000040108
- (id)compressedProtobufDataForMessageP2;	// IMP=0x0000000000040047
- (id)compressedProtobufDataForMessage;	// IMP=0x000000000003fd8c
- (id)_accountControllerSharedInstance;	// IMP=0x000000000003fcbd
- (id)_recordType;	// IMP=0x000000000003fca3
@end

