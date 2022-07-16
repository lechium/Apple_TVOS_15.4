//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRICOMMONInt64Value, SIRICOMMONStringValue, SIRICOMMONUInt32Value;

@interface SIRINLUEXTERNALUsoNode : PBCodable <NSCopying>
{
    NSString *_entityLabel;	// 8 = 0x8
    SIRICOMMONInt64Value *_integerPayload;	// 16 = 0x10
    NSMutableArray *_normalizedStringPayloads;	// 24 = 0x18
    SIRICOMMONStringValue *_stringPayload;	// 32 = 0x20
    unsigned int _usoElementId;	// 40 = 0x28
    SIRICOMMONUInt32Value *_usoVerbElementId;	// 48 = 0x30
    NSString *_verbLabel;	// 56 = 0x38
    struct {
        unsigned int usoElementId:1;
    } _has;	// 64 = 0x40
}

+ (Class)normalizedStringPayloadsType;	// IMP=0x00000000000a4742
- (void).cxx_destruct;	// IMP=0x00000000000a59b1
@property(retain, nonatomic) NSMutableArray *normalizedStringPayloads; // @synthesize normalizedStringPayloads=_normalizedStringPayloads;
@property(retain, nonatomic) NSString *verbLabel; // @synthesize verbLabel=_verbLabel;
@property(retain, nonatomic) NSString *entityLabel; // @synthesize entityLabel=_entityLabel;
@property(retain, nonatomic) SIRICOMMONUInt32Value *usoVerbElementId; // @synthesize usoVerbElementId=_usoVerbElementId;
@property(retain, nonatomic) SIRICOMMONInt64Value *integerPayload; // @synthesize integerPayload=_integerPayload;
@property(retain, nonatomic) SIRICOMMONStringValue *stringPayload; // @synthesize stringPayload=_stringPayload;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a5677
- (unsigned long long)hash;	// IMP=0x00000000000a5584
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a53b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a510d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a4f83
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a4d9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a4d90
- (id)dictionaryRepresentation;	// IMP=0x00000000000a4802
- (id)description;	// IMP=0x00000000000a4753
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a4725
- (unsigned long long)normalizedStringPayloadsCount;	// IMP=0x00000000000a4708
- (void)addNormalizedStringPayloads:(id)arg1;	// IMP=0x00000000000a469e
- (void)clearNormalizedStringPayloads;	// IMP=0x00000000000a4681
@property(readonly, nonatomic) _Bool hasVerbLabel;
@property(readonly, nonatomic) _Bool hasEntityLabel;
@property(readonly, nonatomic) _Bool hasUsoVerbElementId;
@property(readonly, nonatomic) _Bool hasIntegerPayload;
@property(readonly, nonatomic) _Bool hasStringPayload;
@property(nonatomic) _Bool hasUsoElementId;
@property(nonatomic) unsigned int usoElementId; // @synthesize usoElementId=_usoElementId;

@end
