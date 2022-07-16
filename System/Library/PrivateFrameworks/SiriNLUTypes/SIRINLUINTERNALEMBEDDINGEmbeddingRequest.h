//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUINTERNALTokenChain;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingRequest : PBRequest <NSCopying>
{
    NSString *_text;	// 8 = 0x8
    SIRINLUINTERNALTokenChain *_tokenChain;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000096657
@property(retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000096593
- (unsigned long long)hash;	// IMP=0x0000000000096546
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009647e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000963e0
- (void)copyTo:(id)arg1;	// IMP=0x000000000009637d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000096320
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000096313
- (id)dictionaryRepresentation;	// IMP=0x0000000000096079
- (id)description;	// IMP=0x0000000000095fca
@property(readonly, nonatomic) _Bool hasTokenChain;
@property(readonly, nonatomic) _Bool hasText;

@end
