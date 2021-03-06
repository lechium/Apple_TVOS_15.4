//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALUserWantedToProceed : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoGraph *_reference;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_taskId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b6ca
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002b5ef
- (unsigned long long)hash;	// IMP=0x000000000002b5a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b4da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b43c
- (void)copyTo:(id)arg1;	// IMP=0x000000000002b3d9
- (void)writeTo:(id)arg1;	// IMP=0x000000000002b37c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002b36f
- (id)dictionaryRepresentation;	// IMP=0x000000000002b093
- (id)description;	// IMP=0x000000000002afe4
@property(readonly, nonatomic) _Bool hasReference;
@property(readonly, nonatomic) _Bool hasTaskId;

@end

