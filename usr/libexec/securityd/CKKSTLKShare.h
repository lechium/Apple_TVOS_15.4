//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSTLKShare : NSObject
{
    long long _curve;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    NSString *_tlkUUID;	// 24 = 0x18
    NSString *_receiverPeerID;	// 32 = 0x20
    NSData *_receiverPublicEncryptionKeySPKI;	// 40 = 0x28
    NSString *_senderPeerID;	// 48 = 0x30
    long long _epoch;	// 56 = 0x38
    long long _poisoned;	// 64 = 0x40
    NSData *_wrappedTLK;	// 72 = 0x48
    NSData *_signature;	// 80 = 0x50
    CKRecordZoneID *_zoneID;	// 88 = 0x58
}

+ (id)share:(id)arg1 as:(id)arg2 to:(id)arg3 epoch:(long long)arg4 poisoned:(long long)arg5 error:(id *)arg6;	// IMP=0x00200000000809e2
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000809da
- (void).cxx_destruct;	// IMP=0x002000000008097b
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSData *signature; // @synthesize signature=_signature;
@property(retain) NSData *wrappedTLK; // @synthesize wrappedTLK=_wrappedTLK;
@property long long poisoned; // @synthesize poisoned=_poisoned;
@property long long epoch; // @synthesize epoch=_epoch;
@property(retain) NSString *senderPeerID; // @synthesize senderPeerID=_senderPeerID;
@property(retain) NSData *receiverPublicEncryptionKeySPKI; // @synthesize receiverPublicEncryptionKeySPKI=_receiverPublicEncryptionKeySPKI;
@property(retain) NSString *receiverPeerID; // @synthesize receiverPeerID=_receiverPeerID;
@property(retain) NSString *tlkUUID; // @synthesize tlkUUID=_tlkUUID;
@property unsigned long long version; // @synthesize version=_version;
@property long long curve; // @synthesize curve=_curve;
- (id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 ckrecord:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000803a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007fcde
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007fa97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000007f855
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007f5c8
- (_Bool)signatureVerifiesWithPeerSet:(id)arg1 ckrecord:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007f09c
- (_Bool)verifySignature:(id)arg1 verifyingPeer:(id)arg2 ckrecord:(id)arg3 error:(id *)arg4;	// IMP=0x001000000007ed61
- (id)signRecord:(id)arg1 ckrecord:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007ec07
- (id)dataForSigning:(id)arg1;	// IMP=0x001000000007e3f6
- (id)unwrapUsing:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007e226
- (id)wrap:(id)arg1 publicKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000007e077
- (id)description;	// IMP=0x001000000007dfba
- (id)initForKey:(id)arg1 senderPeerID:(id)arg2 recieverPeerID:(id)arg3 receiverEncPublicKeySPKI:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 wrappedKey:(id)arg9 signature:(id)arg10 zoneID:(id)arg11;	// IMP=0x001000000007de5b
- (id)init:(id)arg1 sender:(id)arg2 receiver:(id)arg3 curve:(long long)arg4 version:(unsigned long long)arg5 epoch:(long long)arg6 poisoned:(long long)arg7 zoneID:(id)arg8;	// IMP=0x001000000007dccd

@end

