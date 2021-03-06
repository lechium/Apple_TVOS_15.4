//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRICOMMONStringValue;

@interface SIRINLUEXTERNALRRAnnotation : PBCodable <NSCopying>
{
    SIRICOMMONStringValue *_key;	// 8 = 0x8
    SIRICOMMONStringValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e92a6
@property(retain, nonatomic) SIRICOMMONStringValue *value; // @synthesize value=_value;
@property(retain, nonatomic) SIRICOMMONStringValue *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e91cb
- (unsigned long long)hash;	// IMP=0x00000000000e917e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e90b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9018
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e8fb5
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e8f58
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e8f4b
- (id)dictionaryRepresentation;	// IMP=0x00000000000e8c9e
- (id)description;	// IMP=0x00000000000e8bef
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

