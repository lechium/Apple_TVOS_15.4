//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SADSchemaSADTrialRollout, SISchemaVersion;

@interface SADSchemaSADTrialNamespaceStatus
{
    SISchemaVersion *_namespaceCompatabilityVersion;	// 8 = 0x8
    SADSchemaSADTrialRollout *_rollout;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
    int _trialNamespace;	// 32 = 0x20
    struct {
        unsigned int trialNamespace:1;
    } _has;	// 36 = 0x24
    _Bool _hasNamespaceCompatabilityVersion;	// 40 = 0x28
    _Bool _hasRollout;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000002c0692
@property(nonatomic) _Bool hasRollout; // @synthesize hasRollout=_hasRollout;
@property(nonatomic) _Bool hasNamespaceCompatabilityVersion; // @synthesize hasNamespaceCompatabilityVersion=_hasNamespaceCompatabilityVersion;
@property(nonatomic) int trialNamespace; // @synthesize trialNamespace=_trialNamespace;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) SADSchemaSADTrialRollout *rollout; // @synthesize rollout=_rollout;
@property(retain, nonatomic) SISchemaVersion *namespaceCompatabilityVersion; // @synthesize namespaceCompatabilityVersion=_namespaceCompatabilityVersion;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002c01fe
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002c0140
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002bfbd3
- (unsigned long long)hash;	// IMP=0x00000000002bfb3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bf743
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bf525
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bf2c9
- (void)deleteTrialNamespace;	// IMP=0x00000000002bf29f
@property(nonatomic) _Bool hasTrialNamespace;
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002bf23d
- (unsigned long long)assetsCount;	// IMP=0x00000000002bf220
- (void)addAssets:(id)arg1;	// IMP=0x00000000002bf1a6
- (void)deleteAssets;	// IMP=0x00000000002bf194
- (void)clearAssets;	// IMP=0x00000000002bf177
- (void)deleteRollout;	// IMP=0x00000000002bf163
- (void)deleteNamespaceCompatabilityVersion;	// IMP=0x00000000002bf13a
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003395e0
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003395a8

@end

