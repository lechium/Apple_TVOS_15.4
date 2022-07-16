//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUsoLabel;

@interface SIRINLUEXTERNALUsoEdgeLabel : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoLabel *_baseEdgeLabel;	// 8 = 0x8
    unsigned int _enumeration;	// 16 = 0x10
    unsigned int _usoElementId;	// 20 = 0x14
    struct {
        unsigned int enumeration:1;
        unsigned int usoElementId:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027e46
@property(retain, nonatomic) SIRINLUEXTERNALUsoLabel *baseEdgeLabel; // @synthesize baseEdgeLabel=_baseEdgeLabel;
@property(nonatomic) unsigned int enumeration; // @synthesize enumeration=_enumeration;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000027d7a
- (unsigned long long)hash;	// IMP=0x0000000000027d12
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027c2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027b7e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000027afe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000027a70
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000027a63
- (id)dictionaryRepresentation;	// IMP=0x000000000002763b
- (id)description;	// IMP=0x000000000002758c
@property(readonly, nonatomic) _Bool hasBaseEdgeLabel;
@property(nonatomic) _Bool hasEnumeration;
@property(nonatomic) _Bool hasUsoElementId;
@property(nonatomic) unsigned int usoElementId; // @synthesize usoElementId=_usoElementId;

@end

