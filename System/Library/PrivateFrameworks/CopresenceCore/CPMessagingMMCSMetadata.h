//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CopresenceCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CPMessagingMMCSMetadata : PBCodable <NSCopying>
{
    NSData *_encryptionKey;	// 8 = 0x8
    NSString *_ownerID;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
    NSString *_transferUUID;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001cb8b
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(retain, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *transferUUID; // @synthesize transferUUID=_transferUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ca0f
- (unsigned long long)hash;	// IMP=0x000000000001c96c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c80c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c6f4
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c631
- (void)writeTo:(id)arg1;	// IMP=0x000000000001c57d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001c570
- (id)dictionaryRepresentation;	// IMP=0x000000000001c274
- (id)description;	// IMP=0x000000000001c1c5
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasEncryptionKey;
@property(readonly, nonatomic) _Bool hasOwnerID;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasTransferUUID;

@end
