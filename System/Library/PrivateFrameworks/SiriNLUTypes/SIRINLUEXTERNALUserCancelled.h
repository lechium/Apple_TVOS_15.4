//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALUserCancelled : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoGraph *_reference;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_taskId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003dd4
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference; // @synthesize reference=_reference;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003cf9
- (unsigned long long)hash;	// IMP=0x0000000000003cac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003be4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003b46
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003ae3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003a86
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003a79
- (id)dictionaryRepresentation;	// IMP=0x000000000000379d
- (id)description;	// IMP=0x00000000000036ee
@property(readonly, nonatomic) _Bool hasReference;
@property(readonly, nonatomic) _Bool hasTaskId;

@end

