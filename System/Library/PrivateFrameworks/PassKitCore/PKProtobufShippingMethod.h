//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufCustomPrecisionAmount;

@interface PKProtobufShippingMethod : PBCodable <NSCopying>
{
    long long _amount;	// 8 = 0x8
    PKProtobufCustomPrecisionAmount *_customPrecisionAmount;	// 16 = 0x10
    NSString *_detail;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    unsigned int _type;	// 48 = 0x30
    CDStruct_9fb36b4c _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000001418f7
@property(retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount; // @synthesize customPrecisionAmount=_customPrecisionAmount;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000141743
- (unsigned long long)hash;	// IMP=0x0000000000141663
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001414ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000141399
- (void)copyTo:(id)arg1;	// IMP=0x00000000001412b1
- (void)writeTo:(id)arg1;	// IMP=0x00000000001411cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001411c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000140c7a
- (id)description;	// IMP=0x0000000000140bcb
@property(readonly, nonatomic) _Bool hasCustomPrecisionAmount;
@property(readonly, nonatomic) _Bool hasDetail;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasAmount;

@end

