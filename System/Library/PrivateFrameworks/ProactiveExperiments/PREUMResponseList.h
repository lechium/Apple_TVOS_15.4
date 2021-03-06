//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveExperiments/NSCopying-Protocol.h>

@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMResponseList : PBCodable <NSCopying>
{
    unsigned long long _responseTimePerf;	// 8 = 0x8
    PREUMTrialExperiment *_experiment;	// 16 = 0x10
    int _generationStatus;	// 24 = 0x18
    NSMutableArray *_items;	// 32 = 0x20
    PREUMMessageMetadata *_msgMetadata;	// 40 = 0x28
    _Bool _isCached;	// 48 = 0x30
    struct {
        unsigned int responseTimePerf:1;
        unsigned int generationStatus:1;
        unsigned int isCached:1;
    } _has;	// 52 = 0x34
}

+ (Class)itemsType;	// IMP=0x000000000000b5e4
- (void).cxx_destruct;	// IMP=0x000000000000b168
@property(nonatomic) unsigned long long responseTimePerf; // @synthesize responseTimePerf=_responseTimePerf;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PREUMMessageMetadata *msgMetadata; // @synthesize msgMetadata=_msgMetadata;
@property(retain, nonatomic) PREUMTrialExperiment *experiment; // @synthesize experiment=_experiment;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000ae8e
- (unsigned long long)hash;	// IMP=0x000000000000adb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ac3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a9c1
- (void)copyTo:(id)arg1;	// IMP=0x000000000000a863
- (void)writeTo:(id)arg1;	// IMP=0x000000000000a681
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000a674
- (id)dictionaryRepresentation;	// IMP=0x000000000000a216
- (id)description;	// IMP=0x000000000000a167
- (int)StringAsGenerationStatus:(id)arg1;	// IMP=0x000000000000a078
- (id)generationStatusAsString:(int)arg1;	// IMP=0x0000000000009fe0
@property(nonatomic) _Bool hasGenerationStatus;
@property(nonatomic) int generationStatus; // @synthesize generationStatus=_generationStatus;
@property(nonatomic) _Bool hasResponseTimePerf;
@property(nonatomic) _Bool hasIsCached;
- (id)itemsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000009eca
- (unsigned long long)itemsCount;	// IMP=0x0000000000009ead
- (void)addItems:(id)arg1;	// IMP=0x0000000000009e43
- (void)clearItems;	// IMP=0x0000000000009e26
@property(readonly, nonatomic) _Bool hasMsgMetadata;
@property(readonly, nonatomic) _Bool hasExperiment;

@end

