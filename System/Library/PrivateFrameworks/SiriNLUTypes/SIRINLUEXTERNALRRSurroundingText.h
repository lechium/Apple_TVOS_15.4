//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUEXTERNALRRBoundingBox;

@interface SIRINLUEXTERNALRRSurroundingText : PBCodable <NSCopying>
{
    SIRINLUEXTERNALRRBoundingBox *_boundingBox;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000049bc7
@property(retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000049b03
- (unsigned long long)hash;	// IMP=0x0000000000049ab6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000499ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049950
- (void)copyTo:(id)arg1;	// IMP=0x00000000000498ed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000049890
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000049883
- (id)dictionaryRepresentation;	// IMP=0x00000000000495e9
- (id)description;	// IMP=0x000000000004953a
@property(readonly, nonatomic) _Bool hasBoundingBox;
@property(readonly, nonatomic) _Bool hasText;

@end
