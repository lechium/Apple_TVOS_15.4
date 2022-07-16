//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRICOMMONDoubleValue, SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALTask : PBCodable <NSCopying>
{
    SIRICOMMONDoubleValue *_score;	// 8 = 0x8
    SIRINLUEXTERNALUsoGraph *_task;	// 16 = 0x10
    SIRINLUEXTERNALUUID *_taskId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000079760
@property(retain, nonatomic) SIRICOMMONDoubleValue *score; // @synthesize score=_score;
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *task; // @synthesize task=_task;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000079629
- (unsigned long long)hash;	// IMP=0x00000000000795bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000794c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079400
- (void)copyTo:(id)arg1;	// IMP=0x000000000007937d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000079303
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000792f6
- (id)dictionaryRepresentation;	// IMP=0x0000000000078f7f
- (id)description;	// IMP=0x0000000000078ed0
@property(readonly, nonatomic) _Bool hasScore;
@property(readonly, nonatomic) _Bool hasTask;
@property(readonly, nonatomic) _Bool hasTaskId;

@end

