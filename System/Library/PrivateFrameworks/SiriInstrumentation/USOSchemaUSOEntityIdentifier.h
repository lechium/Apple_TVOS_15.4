//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface USOSchemaUSOEntityIdentifier
{
    unsigned int _nodeIndex;	// 8 = 0x8
    NSString *_identifierNamespace;	// 16 = 0x10
    double _probability;	// 24 = 0x18
    int _sourceNluComponent;	// 32 = 0x20
    int _backingAppBundleType;	// 36 = 0x24
    unsigned int _groupIndex;	// 40 = 0x28
    unsigned int _interpretationGroup;	// 44 = 0x2c
    struct {
        unsigned int nodeIndex:1;
        unsigned int probability:1;
        unsigned int sourceNluComponent:1;
        unsigned int backingAppBundleType:1;
        unsigned int groupIndex:1;
        unsigned int interpretationGroup:1;
    } _has;	// 48 = 0x30
    _Bool _hasIdentifierNamespace;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000002ee83d
@property(nonatomic) _Bool hasIdentifierNamespace; // @synthesize hasIdentifierNamespace=_hasIdentifierNamespace;
@property(nonatomic) unsigned int interpretationGroup; // @synthesize interpretationGroup=_interpretationGroup;
@property(nonatomic) unsigned int groupIndex; // @synthesize groupIndex=_groupIndex;
@property(nonatomic) int backingAppBundleType; // @synthesize backingAppBundleType=_backingAppBundleType;
@property(nonatomic) int sourceNluComponent; // @synthesize sourceNluComponent=_sourceNluComponent;
@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(copy, nonatomic) NSString *identifierNamespace; // @synthesize identifierNamespace=_identifierNamespace;
@property(nonatomic) unsigned int nodeIndex; // @synthesize nodeIndex=_nodeIndex;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ee44a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ee38c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002edfe5
- (unsigned long long)hash;	// IMP=0x00000000002ede08
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002edad4
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ed9a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ed4d3
- (void)deleteInterpretationGroup;	// IMP=0x00000000002ed4a9
@property(nonatomic) _Bool hasInterpretationGroup;
- (void)deleteGroupIndex;	// IMP=0x00000000002ed434
@property(nonatomic) _Bool hasGroupIndex;
- (void)deleteBackingAppBundleType;	// IMP=0x00000000002ed3bf
@property(nonatomic) _Bool hasBackingAppBundleType;
- (void)deleteSourceNluComponent;	// IMP=0x00000000002ed34a
@property(nonatomic) _Bool hasSourceNluComponent;
- (void)deleteProbability;	// IMP=0x00000000002ed2d4
@property(nonatomic) _Bool hasProbability;
- (void)deleteIdentifierNamespace;	// IMP=0x00000000002ed275
- (void)deleteNodeIndex;	// IMP=0x00000000002ed236
@property(nonatomic) _Bool hasNodeIndex;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033c779

@end

