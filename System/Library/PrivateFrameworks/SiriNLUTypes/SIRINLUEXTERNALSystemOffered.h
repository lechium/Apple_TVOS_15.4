//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUserDialogAct;

@interface SIRINLUEXTERNALSystemOffered : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUserDialogAct *_offeredAct;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c4b58
@property(retain, nonatomic) SIRINLUEXTERNALUserDialogAct *offeredAct; // @synthesize offeredAct=_offeredAct;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c4ad9
- (unsigned long long)hash;	// IMP=0x00000000000c4abc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c4a22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c49aa
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c4980
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c495c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c494f
- (id)dictionaryRepresentation;	// IMP=0x00000000000c470b
- (id)description;	// IMP=0x00000000000c465c
@property(readonly, nonatomic) _Bool hasOfferedAct;

@end

