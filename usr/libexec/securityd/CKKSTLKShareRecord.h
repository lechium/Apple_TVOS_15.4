//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSTLKShare, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSTLKShareRecord
{
    CKKSTLKShare *_share;	// 8 = 0x8
}

+ (id)counts:(id)arg1 error:(id *)arg2;	// IMP=0x004000000019286c
+ (_Bool)intransactionRecordDeleted:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001925e5
+ (_Bool)intransactionRecordChanged:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000192412
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0010000000192024
+ (id)sqlColumns;	// IMP=0x0010000000192017
+ (id)sqlTable;	// IMP=0x001000000019200a
+ (id)ckrecordPrefix;	// IMP=0x0010000000191ffd
+ (id)tryFromDatabaseFromCKRecordID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191a4d
+ (id)allInZone:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019193b
+ (id)allForUUID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000019179e
+ (id)allFor:(id)arg1 keyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001915d5
+ (id)tryFromDatabase:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x001000000019131b
+ (id)fromDatabase:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000191061
+ (id)share:(id)arg1 as:(id)arg2 to:(id)arg3 epoch:(long long)arg4 poisoned:(long long)arg5 error:(id *)arg6;	// IMP=0x0010000000190cfd
- (void).cxx_destruct;	// IMP=0x0020000000190cea
@property(retain) CKKSTLKShare *share; // @synthesize share=_share;
- (id)sqlValues;	// IMP=0x0010000000190601
- (id)whereClauseToFindSelf;	// IMP=0x0010000000190429
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000018ff35
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000018fdea
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000018f698
- (id)CKRecordName;	// IMP=0x001000000018f57b
- (id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 error:(id *)arg3;	// IMP=0x001000000018f4b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000018f3f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018f351
- (_Bool)signatureVerifiesWithPeerSet:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018f2b3
- (_Bool)verifySignature:(id)arg1 verifyingPeer:(id)arg2 error:(id *)arg3;	// IMP=0x001000000018f1fd
- (id)signRecord:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018f153
- (id)dataForSigning;	// IMP=0x001000000018f0d3
@property(readonly) NSData *signature;
@property(readonly) NSData *wrappedTLK;
@property(readonly) long long poisoned;
@property(readonly) long long epoch;
@property(readonly) NSString *senderPeerID;
@property(readonly) NSString *tlkUUID;
- (id)description;	// IMP=0x001000000018edab
- (id)initForKey:(id)arg1 senderPeerID:(id)arg2 recieverPeerID:(id)arg3 receiverEncPublicKeySPKI:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 wrappedKey:(id)arg9 signature:(id)arg10 zoneID:(id)arg11 encodedCKRecord:(id)arg12;	// IMP=0x001000000018ec6b
- (id)init:(id)arg1 sender:(id)arg2 receiver:(id)arg3 curve:(long long)arg4 version:(unsigned long long)arg5 epoch:(long long)arg6 poisoned:(long long)arg7 zoneID:(id)arg8 encodedCKRecord:(id)arg9;	// IMP=0x001000000018eb6e
- (id)initWithShare:(id)arg1 zoneID:(id)arg2 encodedCKRecord:(id)arg3;	// IMP=0x001000000018eae5

@end

