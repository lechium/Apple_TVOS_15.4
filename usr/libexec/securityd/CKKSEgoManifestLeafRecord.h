//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKKSEgoManifestLeafRecord
{
}

+ (id)newLeafRecordInZone:(id)arg1;	// IMP=0x004000000005a96a
- (void)deleteItemWithUUID:(id)arg1;	// IMP=0x002000000005ab8d
- (void)addOrUpdateRecord:(id)arg1;	// IMP=0x001000000005aad0
- (void)addOrUpdateRecordUUID:(id)arg1 withEncryptedItemData:(id)arg2;	// IMP=0x001000000005aa17

// Remaining properties
@property(readonly, nonatomic) NSMutableDictionary *recordDigestDict; // @dynamic recordDigestDict;

@end

