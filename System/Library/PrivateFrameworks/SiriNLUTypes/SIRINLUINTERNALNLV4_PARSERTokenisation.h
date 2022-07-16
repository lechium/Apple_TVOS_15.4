//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying>
{
    NSString *_normalisedUtterance;	// 8 = 0x8
    NSString *_originalUtterance;	// 16 = 0x10
    SIRINLUINTERNALTokenChain *_tokenChain;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077c4e
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(retain, nonatomic) NSString *normalisedUtterance; // @synthesize normalisedUtterance=_normalisedUtterance;
@property(retain, nonatomic) NSString *originalUtterance; // @synthesize originalUtterance=_originalUtterance;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000077b45
- (unsigned long long)hash;	// IMP=0x0000000000077ad8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000779e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007791c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000077899
- (void)writeTo:(id)arg1;	// IMP=0x000000000007781f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000077812
- (id)dictionaryRepresentation;	// IMP=0x000000000007752f
- (id)description;	// IMP=0x0000000000077480
@property(readonly, nonatomic) _Bool hasTokenChain;
@property(readonly, nonatomic) _Bool hasNormalisedUtterance;
@property(readonly, nonatomic) _Bool hasOriginalUtterance;

@end
