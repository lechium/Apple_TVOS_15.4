//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProtectedCloudStorage/NSCopying-Protocol.h>

@class PCSManateePrivateKey;

__attribute__((visibility("hidden")))
@interface PCSManateeShareableIdentity : PBCodable <NSCopying>
{
    PCSManateePrivateKey *_encryptionPrivateKey;	// 8 = 0x8
    PCSManateePrivateKey *_signingPrivateKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003c9a
@property(retain, nonatomic) PCSManateePrivateKey *signingPrivateKey; // @synthesize signingPrivateKey=_signingPrivateKey;
@property(retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey; // @synthesize encryptionPrivateKey=_encryptionPrivateKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003bbf
- (unsigned long long)hash;	// IMP=0x0000000000003b72
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003aaa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003a0c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000039a9
- (void)writeTo:(id)arg1;	// IMP=0x000000000000394c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000393f
- (id)dictionaryRepresentation;	// IMP=0x0000000000003692
- (id)description;	// IMP=0x00000000000035e3
@property(readonly, nonatomic) _Bool hasSigningPrivateKey;
@property(readonly, nonatomic) _Bool hasEncryptionPrivateKey;

@end

