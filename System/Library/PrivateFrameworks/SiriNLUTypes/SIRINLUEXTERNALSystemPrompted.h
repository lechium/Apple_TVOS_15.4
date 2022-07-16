//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALUsoGraph;

@interface SIRINLUEXTERNALSystemPrompted : PBCodable <NSCopying>
{
    SIRINLUEXTERNALUsoGraph *_target;	// 8 = 0x8
    SIRINLUEXTERNALUUID *_taskId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e5657
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *target; // @synthesize target=_target;
@property(retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e557c
- (unsigned long long)hash;	// IMP=0x00000000000e552f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e5467
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e53c9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e5366
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e5309
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e52fc
- (id)dictionaryRepresentation;	// IMP=0x00000000000e5020
- (id)description;	// IMP=0x00000000000e4f71
@property(readonly, nonatomic) _Bool hasTarget;
@property(readonly, nonatomic) _Bool hasTaskId;

@end
