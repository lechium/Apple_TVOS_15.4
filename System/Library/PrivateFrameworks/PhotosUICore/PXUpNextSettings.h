//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXUpNextSettings
{
    _Bool _forceFallbackMemories;	// 8 = 0x8
    _Bool _enableCustomVectors;	// 9 = 0x9
    _Bool _overrideMemoriesResult;	// 10 = 0xa
    float _personWeight0;	// 12 = 0xc
    float _sceneWeight0;	// 16 = 0x10
    float _locationWeight0;	// 20 = 0x14
    float _dateWeight0;	// 24 = 0x18
    float _meaningWeight0;	// 28 = 0x1c
    float _memoryFeatureWeight0;	// 32 = 0x20
    float _tripWeight0;	// 36 = 0x24
    float _personWeight1;	// 40 = 0x28
    float _sceneWeight1;	// 44 = 0x2c
    float _locationWeight1;	// 48 = 0x30
    float _dateWeight1;	// 52 = 0x34
    float _meaningWeight1;	// 56 = 0x38
    float _memoryFeatureWeight1;	// 60 = 0x3c
    float _tripWeight1;	// 64 = 0x40
    float _personWeight2;	// 68 = 0x44
    float _sceneWeight2;	// 72 = 0x48
    float _locationWeight2;	// 76 = 0x4c
    float _dateWeight2;	// 80 = 0x50
    float _meaningWeight2;	// 84 = 0x54
    float _memoryFeatureWeight2;	// 88 = 0x58
    float _tripWeight2;	// 92 = 0x5c
    float _personWeight3;	// 96 = 0x60
    float _sceneWeight3;	// 100 = 0x64
    float _locationWeight3;	// 104 = 0x68
    float _dateWeight3;	// 108 = 0x6c
    float _meaningWeight3;	// 112 = 0x70
    float _memoryFeatureWeight3;	// 116 = 0x74
    float _tripWeight3;	// 120 = 0x78
    float _personWeight4;	// 124 = 0x7c
    float _sceneWeight4;	// 128 = 0x80
    float _locationWeight4;	// 132 = 0x84
    float _dateWeight4;	// 136 = 0x88
    float _meaningWeight4;	// 140 = 0x8c
    float _memoryFeatureWeight4;	// 144 = 0x90
    float _tripWeight4;	// 148 = 0x94
    unsigned long long _curationMode;	// 152 = 0x98
    NSArray *_featureWeightVectors;	// 160 = 0xa0
    NSArray *_vector0;	// 168 = 0xa8
    NSArray *_vector1;	// 176 = 0xb0
    NSArray *_vector2;	// 184 = 0xb8
    NSArray *_vector3;	// 192 = 0xc0
    NSArray *_vector4;	// 200 = 0xc8
}

+ (id)sharedInstance;	// IMP=0x0000000000598988
+ (id)_enabledCondition;	// IMP=0x0000000000378bfe
+ (id)_featureSliderForFeature:(id)arg1 valueKeyPath:(id)arg2;	// IMP=0x0000000000378b65
+ (id)_upNextVectorSliderSections;	// IMP=0x00000000003784f8
+ (id)settingsControllerModule;	// IMP=0x000000000037823c
- (void).cxx_destruct;	// IMP=0x0000000000598913
@property(nonatomic) float tripWeight4; // @synthesize tripWeight4=_tripWeight4;
@property(nonatomic) float memoryFeatureWeight4; // @synthesize memoryFeatureWeight4=_memoryFeatureWeight4;
@property(nonatomic) float meaningWeight4; // @synthesize meaningWeight4=_meaningWeight4;
@property(nonatomic) float dateWeight4; // @synthesize dateWeight4=_dateWeight4;
@property(nonatomic) float locationWeight4; // @synthesize locationWeight4=_locationWeight4;
@property(nonatomic) float sceneWeight4; // @synthesize sceneWeight4=_sceneWeight4;
@property(nonatomic) float personWeight4; // @synthesize personWeight4=_personWeight4;
@property(retain, nonatomic) NSArray *vector4; // @synthesize vector4=_vector4;
@property(nonatomic) float tripWeight3; // @synthesize tripWeight3=_tripWeight3;
@property(nonatomic) float memoryFeatureWeight3; // @synthesize memoryFeatureWeight3=_memoryFeatureWeight3;
@property(nonatomic) float meaningWeight3; // @synthesize meaningWeight3=_meaningWeight3;
@property(nonatomic) float dateWeight3; // @synthesize dateWeight3=_dateWeight3;
@property(nonatomic) float locationWeight3; // @synthesize locationWeight3=_locationWeight3;
@property(nonatomic) float sceneWeight3; // @synthesize sceneWeight3=_sceneWeight3;
@property(nonatomic) float personWeight3; // @synthesize personWeight3=_personWeight3;
@property(retain, nonatomic) NSArray *vector3; // @synthesize vector3=_vector3;
@property(nonatomic) float tripWeight2; // @synthesize tripWeight2=_tripWeight2;
@property(nonatomic) float memoryFeatureWeight2; // @synthesize memoryFeatureWeight2=_memoryFeatureWeight2;
@property(nonatomic) float meaningWeight2; // @synthesize meaningWeight2=_meaningWeight2;
@property(nonatomic) float dateWeight2; // @synthesize dateWeight2=_dateWeight2;
@property(nonatomic) float locationWeight2; // @synthesize locationWeight2=_locationWeight2;
@property(nonatomic) float sceneWeight2; // @synthesize sceneWeight2=_sceneWeight2;
@property(nonatomic) float personWeight2; // @synthesize personWeight2=_personWeight2;
@property(retain, nonatomic) NSArray *vector2; // @synthesize vector2=_vector2;
@property(nonatomic) float tripWeight1; // @synthesize tripWeight1=_tripWeight1;
@property(nonatomic) float memoryFeatureWeight1; // @synthesize memoryFeatureWeight1=_memoryFeatureWeight1;
@property(nonatomic) float meaningWeight1; // @synthesize meaningWeight1=_meaningWeight1;
@property(nonatomic) float dateWeight1; // @synthesize dateWeight1=_dateWeight1;
@property(nonatomic) float locationWeight1; // @synthesize locationWeight1=_locationWeight1;
@property(nonatomic) float sceneWeight1; // @synthesize sceneWeight1=_sceneWeight1;
@property(nonatomic) float personWeight1; // @synthesize personWeight1=_personWeight1;
@property(retain, nonatomic) NSArray *vector1; // @synthesize vector1=_vector1;
@property(nonatomic) float tripWeight0; // @synthesize tripWeight0=_tripWeight0;
@property(nonatomic) float memoryFeatureWeight0; // @synthesize memoryFeatureWeight0=_memoryFeatureWeight0;
@property(nonatomic) float meaningWeight0; // @synthesize meaningWeight0=_meaningWeight0;
@property(nonatomic) float dateWeight0; // @synthesize dateWeight0=_dateWeight0;
@property(nonatomic) float locationWeight0; // @synthesize locationWeight0=_locationWeight0;
@property(nonatomic) float sceneWeight0; // @synthesize sceneWeight0=_sceneWeight0;
@property(nonatomic) float personWeight0; // @synthesize personWeight0=_personWeight0;
@property(retain, nonatomic) NSArray *vector0; // @synthesize vector0=_vector0;
@property(retain, nonatomic) NSArray *featureWeightVectors; // @synthesize featureWeightVectors=_featureWeightVectors;
@property(nonatomic) unsigned long long curationMode; // @synthesize curationMode=_curationMode;
@property(nonatomic) _Bool overrideMemoriesResult; // @synthesize overrideMemoriesResult=_overrideMemoriesResult;
@property(nonatomic) _Bool enableCustomVectors; // @synthesize enableCustomVectors=_enableCustomVectors;
@property(nonatomic) _Bool forceFallbackMemories; // @synthesize forceFallbackMemories=_forceFallbackMemories;
- (id)_varietyFeatureWeightVectors;	// IMP=0x00000000005980e2
- (id)_mostRelevantFeatureWeightVectors;	// IMP=0x0000000000597f18
- (id)_featureWeightVectorsFromCurationMode:(unsigned long long)arg1;	// IMP=0x0000000000597edf
- (id)_weightArrayWithWeightForPerson:(float)arg1 scene:(float)arg2 location:(float)arg3 date:(float)arg4 meaning:(float)arg5 memoryFeature:(float)arg6 trip:(float)arg7;	// IMP=0x0000000000597d0e
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000597bbc
- (void)performPostSaveActions;	// IMP=0x0000000000597420
- (void)_updateSettingsVectors:(id)arg1;	// IMP=0x00000000005964f9
- (void)setDefaultValues;	// IMP=0x000000000059643c
- (id)parentSettings;	// IMP=0x0000000000596423

@end

