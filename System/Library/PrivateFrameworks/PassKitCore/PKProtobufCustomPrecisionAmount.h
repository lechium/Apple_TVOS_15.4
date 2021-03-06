//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKProtobufCustomPrecisionAmount : PBCodable <NSCopying>
{
    long long _amount;	// 8 = 0x8
    unsigned int _decimalDigitsMultiplier;	// 16 = 0x10
}

@property(nonatomic) unsigned int decimalDigitsMultiplier; // @synthesize decimalDigitsMultiplier=_decimalDigitsMultiplier;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003c36a4
- (unsigned long long)hash;	// IMP=0x00000000003c3679
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c35f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c3590
- (void)copyTo:(id)arg1;	// IMP=0x00000000003c356e
- (void)writeTo:(id)arg1;	// IMP=0x00000000003c350f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003c3502
- (id)dictionaryRepresentation;	// IMP=0x00000000003c31b6
- (id)description;	// IMP=0x00000000003c3107

@end

