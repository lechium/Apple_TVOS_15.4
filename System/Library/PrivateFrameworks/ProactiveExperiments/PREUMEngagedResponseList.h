//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveExperiments/NSCopying-Protocol.h>

@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMEngagedResponseList : PBCodable <NSCopying>
{
    unsigned long long _timeToTap;	// 8 = 0x8
    unsigned int _engagedItem;	// 16 = 0x10
    PREUMTrialExperiment *_experiment;	// 24 = 0x18
    int _generationStatus;	// 32 = 0x20
    int _inputMethod;	// 36 = 0x24
    NSMutableArray *_items;	// 40 = 0x28
    PREUMMessageMetadata *_msgMetadata;	// 48 = 0x30
    struct {
        unsigned int timeToTap:1;
        unsigned int engagedItem:1;
        unsigned int generationStatus:1;
        unsigned int inputMethod:1;
    } _has;	// 56 = 0x38
}

+ (Class)itemsType;	// IMP=0x00000000000053e4
- (void).cxx_destruct;	// IMP=0x0000000000004ee7
@property(nonatomic) unsigned long long timeToTap; // @synthesize timeToTap=_timeToTap;
@property(nonatomic) unsigned int engagedItem; // @synthesize engagedItem=_engagedItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PREUMMessageMetadata *msgMetadata; // @synthesize msgMetadata=_msgMetadata;
@property(retain, nonatomic) PREUMTrialExperiment *experiment; // @synthesize experiment=_experiment;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000004bed
- (unsigned long long)hash;	// IMP=0x0000000000004afb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004968
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000046cc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000004555
- (void)writeTo:(id)arg1;	// IMP=0x0000000000004355
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000004348
- (id)dictionaryRepresentation;	// IMP=0x0000000000003e2a
- (id)description;	// IMP=0x0000000000003d7b
- (int)StringAsGenerationStatus:(id)arg1;	// IMP=0x0000000000003c8c
- (id)generationStatusAsString:(int)arg1;	// IMP=0x0000000000003bf5
@property(nonatomic) _Bool hasGenerationStatus;
@property(nonatomic) int generationStatus; // @synthesize generationStatus=_generationStatus;
- (int)StringAsInputMethod:(id)arg1;	// IMP=0x0000000000003a9c
- (id)inputMethodAsString:(int)arg1;	// IMP=0x0000000000003a04
@property(nonatomic) _Bool hasInputMethod;
@property(nonatomic) int inputMethod; // @synthesize inputMethod=_inputMethod;
@property(nonatomic) _Bool hasTimeToTap;
@property(nonatomic) _Bool hasEngagedItem;
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000038ee
- (unsigned long long)itemsCount;	// IMP=0x00000000000038d1
- (void)addItems:(id)arg1;	// IMP=0x0000000000003867
- (void)clearItems;	// IMP=0x000000000000384a
@property(readonly, nonatomic) _Bool hasMsgMetadata;
@property(readonly, nonatomic) _Bool hasExperiment;

@end

