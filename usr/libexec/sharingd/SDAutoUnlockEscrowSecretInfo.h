//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDAutoUnlockEscrowSecretInfo : PBCodable
{
    NSString *_pairingID;	// 8 = 0x8
    NSData *_secret;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b649a
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain, nonatomic) NSData *secret; // @synthesize secret=_secret;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b63ed
- (unsigned long long)hash;	// IMP=0x00100000000b63a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b62d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b623a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b61d7
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b617a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b616d
- (id)dictionaryRepresentation;	// IMP=0x00100000000b5f58
- (id)description;	// IMP=0x00100000000b5ea9
@property(readonly, nonatomic) _Bool hasPairingID;
@property(readonly, nonatomic) _Bool hasSecret;

@end

