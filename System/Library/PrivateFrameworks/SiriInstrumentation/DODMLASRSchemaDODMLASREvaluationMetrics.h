//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASREvaluationMetrics
{
    float _bestWeight;	// 8 = 0x8
    unsigned long long _totalDurationInMs;	// 16 = 0x10
    NSArray *_trains;	// 24 = 0x18
    NSArray *_devs;	// 32 = 0x20
    NSArray *_tests;	// 40 = 0x28
    NSArray *_externals;	// 48 = 0x30
    struct {
        unsigned int bestWeight:1;
        unsigned int totalDurationInMs:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000fb92b
@property(copy, nonatomic) NSArray *externals; // @synthesize externals=_externals;
@property(copy, nonatomic) NSArray *tests; // @synthesize tests=_tests;
@property(copy, nonatomic) NSArray *devs; // @synthesize devs=_devs;
@property(copy, nonatomic) NSArray *trains; // @synthesize trains=_trains;
@property(nonatomic) unsigned long long totalDurationInMs; // @synthesize totalDurationInMs=_totalDurationInMs;
@property(nonatomic) float bestWeight; // @synthesize bestWeight=_bestWeight;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000fb007
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000faf49
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000fa56c
- (unsigned long long)hash;	// IMP=0x00000000000fa3c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f9e70
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f9a5c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f9013
- (id)externalAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f8ff6
- (unsigned long long)externalCount;	// IMP=0x00000000000f8fd9
- (void)addExternal:(id)arg1;	// IMP=0x00000000000f8f5f
- (void)deleteExternal;	// IMP=0x00000000000f8f4d
- (void)clearExternal;	// IMP=0x00000000000f8f30
- (id)testAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f8f13
- (unsigned long long)testCount;	// IMP=0x00000000000f8ef6
- (void)addTest:(id)arg1;	// IMP=0x00000000000f8e7c
- (void)deleteTest;	// IMP=0x00000000000f8e6a
- (void)clearTest;	// IMP=0x00000000000f8e4d
- (id)devAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f8e30
- (unsigned long long)devCount;	// IMP=0x00000000000f8e13
- (void)addDev:(id)arg1;	// IMP=0x00000000000f8d99
- (void)deleteDev;	// IMP=0x00000000000f8d87
- (void)clearDev;	// IMP=0x00000000000f8d6a
- (id)trainAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f8d4d
- (unsigned long long)trainCount;	// IMP=0x00000000000f8d30
- (void)addTrain:(id)arg1;	// IMP=0x00000000000f8cb6
- (void)deleteTrain;	// IMP=0x00000000000f8ca4
- (void)clearTrain;	// IMP=0x00000000000f8c87
- (void)deleteTotalDurationInMs;	// IMP=0x00000000000f8c5d
@property(nonatomic) _Bool hasTotalDurationInMs;
- (void)deleteBestWeight;	// IMP=0x00000000000f8be8
@property(nonatomic) _Bool hasBestWeight;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031d582
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031d54a

@end
