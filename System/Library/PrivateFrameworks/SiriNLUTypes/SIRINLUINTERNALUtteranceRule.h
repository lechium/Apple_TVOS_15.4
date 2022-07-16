//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRINLUINTERNALCompareOptions;

@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying>
{
    SIRINLUINTERNALCompareOptions *_compareOptions;	// 8 = 0x8
    NSString *_pattern;	// 16 = 0x10
    NSMutableArray *_spansForNamedCaptureGroups;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

+ (Class)spansForNamedCaptureGroupsType;	// IMP=0x0000000000022e4f
- (void).cxx_destruct;	// IMP=0x0000000000023e24
@property(retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups; // @synthesize spansForNamedCaptureGroups=_spansForNamedCaptureGroups;
@property(retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions; // @synthesize compareOptions=_compareOptions;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000023be7
- (unsigned long long)hash;	// IMP=0x0000000000023b51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023a28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000237fe
- (void)copyTo:(id)arg1;	// IMP=0x00000000000236d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000023545
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000023538
- (id)dictionaryRepresentation;	// IMP=0x0000000000022f0f
- (id)description;	// IMP=0x0000000000022e60
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000022e32
- (unsigned long long)spansForNamedCaptureGroupsCount;	// IMP=0x0000000000022e15
- (void)addSpansForNamedCaptureGroups:(id)arg1;	// IMP=0x0000000000022dab
- (void)clearSpansForNamedCaptureGroups;	// IMP=0x0000000000022d8e
@property(readonly, nonatomic) _Bool hasCompareOptions;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000022ce7
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000022c81
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasPattern;

@end
