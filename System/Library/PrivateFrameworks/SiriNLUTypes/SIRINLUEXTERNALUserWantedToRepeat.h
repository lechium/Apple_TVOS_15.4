//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALUserWantedToRepeat : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoGraph *_reference;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_systemDialogActId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009482e
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *systemDialogActId; // @synthesize systemDialogActId=_systemDialogActId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000094753
- (unsigned long long)hash;	// IMP=0x0000000000094706
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009463e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000945a0
- (void)copyTo:(id)arg1;	// IMP=0x000000000009453d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000944e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000944d3
- (id)dictionaryRepresentation;	// IMP=0x00000000000941f7
- (id)description;	// IMP=0x0000000000094148
@property(readonly, nonatomic) _Bool hasReference;
@property(readonly, nonatomic) _Bool hasSystemDialogActId;

@end

