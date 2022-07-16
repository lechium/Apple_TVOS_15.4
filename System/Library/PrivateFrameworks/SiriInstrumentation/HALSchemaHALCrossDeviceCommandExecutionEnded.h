//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface HALSchemaHALCrossDeviceCommandExecutionEnded
{
    NSArray *_selecteds;	// 8 = 0x8
    int _action;	// 16 = 0x10
    int _actionResult;	// 20 = 0x14
    int _homeKitTarget;	// 24 = 0x18
    struct {
        unsigned int action:1;
        unsigned int actionResult:1;
        unsigned int homeKitTarget:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000018b419
@property(nonatomic) int homeKitTarget; // @synthesize homeKitTarget=_homeKitTarget;
@property(nonatomic) int actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) int action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *selecteds; // @synthesize selecteds=_selecteds;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000018b012
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000018af54
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000018a9bd
- (unsigned long long)hash;	// IMP=0x000000000018a932
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018a6c2
- (void)writeTo:(id)arg1;	// IMP=0x000000000018a518
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000189f97
- (void)deleteHomeKitTarget;	// IMP=0x0000000000189f6d
@property(nonatomic) _Bool hasHomeKitTarget;
- (void)deleteActionResult;	// IMP=0x0000000000189ef8
@property(nonatomic) _Bool hasActionResult;
- (void)deleteAction;	// IMP=0x0000000000189e85
@property(nonatomic) _Bool hasAction;
- (id)selectedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000189e23
- (unsigned long long)selectedCount;	// IMP=0x0000000000189e06
- (void)addSelected:(id)arg1;	// IMP=0x0000000000189d8c
- (void)deleteSelected;	// IMP=0x0000000000189d7a
- (void)clearSelected;	// IMP=0x0000000000189d5d
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000326085
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032604d

@end
