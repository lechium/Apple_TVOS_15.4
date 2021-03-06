//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBLegacyKey : PBCodable <NSCopying>
{
    NSData *_encryptionKey;	// 8 = 0x8
    NSData *_signingKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000167b0
@property(retain, nonatomic) NSData *signingKey; // @synthesize signingKey=_signingKey;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000016703
- (unsigned long long)hash;	// IMP=0x00000000000166b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000165ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016550
- (void)copyTo:(id)arg1;	// IMP=0x00000000000164df
- (void)writeTo:(id)arg1;	// IMP=0x0000000000016478
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001646b
- (id)dictionaryRepresentation;	// IMP=0x0000000000016254
- (id)description;	// IMP=0x00000000000161a5

@end

