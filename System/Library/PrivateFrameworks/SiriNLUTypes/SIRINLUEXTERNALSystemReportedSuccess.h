//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALSystemReportedSuccess : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoGraph *_task;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_taskId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003fa8c
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *task; // @synthesize task=_task;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003f9b1
- (unsigned long long)hash;	// IMP=0x000000000003f964
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f89c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f7fe
- (void)copyTo:(id)arg1;	// IMP=0x000000000003f79b
- (void)writeTo:(id)arg1;	// IMP=0x000000000003f73e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003f731
- (id)dictionaryRepresentation;	// IMP=0x000000000003f455
- (id)description;	// IMP=0x000000000003f3a6
@property(readonly, nonatomic) _Bool hasTask;
@property(readonly, nonatomic) _Bool hasTaskId;

@end

