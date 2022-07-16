//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALUserRejected : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUUID *_offerId;	// 8 = 0x8
    SIRINLUEXTERNALUsoGraph *_reference;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ad91
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *offerId; // @synthesize offerId=_offerId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000acb6
- (unsigned long long)hash;	// IMP=0x000000000000ac69
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000aba1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ab03
- (void)copyTo:(id)arg1;	// IMP=0x000000000000aaa0
- (void)writeTo:(id)arg1;	// IMP=0x000000000000aa43
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000aa36
- (id)dictionaryRepresentation;	// IMP=0x000000000000a75a
- (id)description;	// IMP=0x000000000000a6ab
@property(readonly, nonatomic) _Bool hasReference;
@property(readonly, nonatomic) _Bool hasOfferId;

@end
