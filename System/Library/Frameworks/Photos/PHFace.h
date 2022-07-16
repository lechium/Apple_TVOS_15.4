//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PHFace
{
    _Bool _isInVIPModel;	// 16 = 0x10
    _Bool _hidden;	// 17 = 0x11
    _Bool _inTrash;	// 18 = 0x12
    _Bool _manual;	// 19 = 0x13
    _Bool _hasSmile;	// 20 = 0x14
    _Bool _leftEyeClosed;	// 21 = 0x15
    _Bool _rightEyeClosed;	// 22 = 0x16
    _Bool _hasFaceMask;	// 23 = 0x17
    short _detectionType;	// 24 = 0x18
    short _confirmedFaceCropGenerationState;	// 26 = 0x1a
    unsigned short _ageType;	// 28 = 0x1c
    unsigned short _sexType;	// 30 = 0x1e
    unsigned short _eyesState;	// 32 = 0x20
    unsigned short _smileType;	// 34 = 0x22
    unsigned short _facialHairType;	// 36 = 0x24
    unsigned short _hairColorType;	// 38 = 0x26
    unsigned short _glassesType;	// 40 = 0x28
    unsigned short _eyeMakeupType;	// 42 = 0x2a
    unsigned short _lipMakeupType;	// 44 = 0x2c
    unsigned short _faceExpressionType;	// 46 = 0x2e
    unsigned short _headgearType;	// 48 = 0x30
    unsigned short _hairType;	// 50 = 0x32
    unsigned short _poseType;	// 52 = 0x34
    unsigned short _skintoneType;	// 54 = 0x36
    unsigned short _ethnicityType;	// 56 = 0x38
    unsigned short _gazeType;	// 58 = 0x3a
    int _trainingType;	// 60 = 0x3c
    double _size;	// 64 = 0x40
    double _centerX;	// 72 = 0x48
    double _centerY;	// 80 = 0x50
    double _bodyCenterX;	// 88 = 0x58
    double _bodyCenterY;	// 96 = 0x60
    double _bodyWidth;	// 104 = 0x68
    double _bodyHeight;	// 112 = 0x70
    long long _clusterSequenceNumber;	// 120 = 0x78
    long long _qualityMeasure;	// 128 = 0x80
    double _quality;	// 136 = 0x88
    NSString *_personUUID;	// 144 = 0x90
    long long _sourceWidth;	// 152 = 0x98
    long long _sourceHeight;	// 160 = 0xa0
    double _leftEyeX;	// 168 = 0xa8
    double _leftEyeY;	// 176 = 0xb0
    double _rightEyeX;	// 184 = 0xb8
    double _rightEyeY;	// 192 = 0xc0
    double _mouthX;	// 200 = 0xc8
    double _mouthY;	// 208 = 0xd0
    double _roll;	// 216 = 0xd8
    double _yaw;	// 224 = 0xe0
    double _blurScore;	// 232 = 0xe8
    id _adjustmentVersion;	// 240 = 0xf0
    long long _nameSource;	// 248 = 0xf8
    double _poseYaw;	// 256 = 0x100
    long long _faceAlgorithmVersion;	// 264 = 0x108
    double _gazeCenterX;	// 272 = 0x110
    double _gazeCenterY;	// 280 = 0x118
}

+ (id)fetchSuggestedFacesForPerson:(id)arg1 options:(id)arg2;	// IMP=0x0000000000145e97
+ (id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;	// IMP=0x00000000001459fc
+ (id)propertySetAccessorsByPropertySet;	// IMP=0x00000000001459cc
+ (Class)propertySetClassForPropertySet:(id)arg1;	// IMP=0x0000000000145960
+ (id)fetchKeyFaceByPersonLocalIdentifierForPersons:(id)arg1 options:(id)arg2;	// IMP=0x00000000001454da
+ (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;	// IMP=0x0000000000145483
+ (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;	// IMP=0x0000000000145404
+ (id)fetchSingletonFacesWithOptions:(id)arg1;	// IMP=0x00000000001453ad
+ (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;	// IMP=0x000000000014532e
+ (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;	// IMP=0x00000000001452af
+ (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;	// IMP=0x0000000000145230
+ (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;	// IMP=0x00000000001451b1
+ (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;	// IMP=0x0000000000145132
+ (id)fetchFacesInAssets:(id)arg1 options:(id)arg2;	// IMP=0x0000000000145068
+ (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;	// IMP=0x0000000000144fe9
+ (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x0000000000144f3b
+ (id)fetchFacesWithOptions:(id)arg1;	// IMP=0x0000000000144f1b
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000144e52
+ (id)entityKeyMap;	// IMP=0x0000000000144dfc
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x0000000000144cf2
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x0000000000144afb
+ (id)analyticsPropertiesToFetch;	// IMP=0x0000000000144ad7
+ (id)genderAgePropertiesToFetch;	// IMP=0x0000000000144aa7
+ (id)personBuilderPropertiesToFetch;	// IMP=0x0000000000144a77
+ (id)croppingPropertiesToFetch;	// IMP=0x0000000000144a47
+ (id)corePropertiesToFetch;	// IMP=0x0000000000144a17
+ (_Bool)managedObjectSupportsBodyDetection;	// IMP=0x0000000000144a0f
+ (_Bool)managedObjectSupportsDetectionType;	// IMP=0x0000000000144a07
+ (_Bool)managedObjectSupportsFaceState;	// IMP=0x00000000001449ff
+ (id)fetchType;	// IMP=0x00000000001449e0
+ (id)managedEntityName;	// IMP=0x00000000001449d3
+ (id)identifierCode;	// IMP=0x00000000001449c6
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;	// IMP=0x00000000001447d9
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;	// IMP=0x0000000000144605
- (void).cxx_destruct;	// IMP=0x0000000000143d8b
@property(readonly, nonatomic) double gazeCenterY; // @synthesize gazeCenterY=_gazeCenterY;
@property(readonly, nonatomic) double gazeCenterX; // @synthesize gazeCenterX=_gazeCenterX;
@property(readonly, nonatomic) unsigned short gazeType; // @synthesize gazeType=_gazeType;
@property(readonly, nonatomic) _Bool hasFaceMask; // @synthesize hasFaceMask=_hasFaceMask;
@property(readonly, nonatomic) unsigned short ethnicityType; // @synthesize ethnicityType=_ethnicityType;
@property(readonly, nonatomic) unsigned short skintoneType; // @synthesize skintoneType=_skintoneType;
@property(readonly, nonatomic) unsigned short poseType; // @synthesize poseType=_poseType;
@property(readonly, nonatomic) unsigned short hairType; // @synthesize hairType=_hairType;
@property(readonly, nonatomic) unsigned short headgearType; // @synthesize headgearType=_headgearType;
@property(readonly, nonatomic) unsigned short faceExpressionType; // @synthesize faceExpressionType=_faceExpressionType;
@property(readonly, nonatomic) unsigned short lipMakeupType; // @synthesize lipMakeupType=_lipMakeupType;
@property(readonly, nonatomic) unsigned short eyeMakeupType; // @synthesize eyeMakeupType=_eyeMakeupType;
@property(readonly, nonatomic) unsigned short glassesType; // @synthesize glassesType=_glassesType;
@property(readonly, nonatomic) unsigned short hairColorType; // @synthesize hairColorType=_hairColorType;
@property(readonly, nonatomic) unsigned short facialHairType; // @synthesize facialHairType=_facialHairType;
@property(readonly, nonatomic) unsigned short smileType; // @synthesize smileType=_smileType;
@property(readonly, nonatomic) unsigned short eyesState; // @synthesize eyesState=_eyesState;
@property(readonly, nonatomic) unsigned short sexType; // @synthesize sexType=_sexType;
@property(readonly, nonatomic) unsigned short ageType; // @synthesize ageType=_ageType;
@property(nonatomic) long long faceAlgorithmVersion; // @synthesize faceAlgorithmVersion=_faceAlgorithmVersion;
@property(nonatomic) double poseYaw; // @synthesize poseYaw=_poseYaw;
@property(readonly, nonatomic) int trainingType; // @synthesize trainingType=_trainingType;
@property(readonly, nonatomic) long long nameSource; // @synthesize nameSource=_nameSource;
@property(readonly, copy, nonatomic) id adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property(readonly, nonatomic, getter=isRightEyeClosed) _Bool rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property(readonly, nonatomic, getter=isLeftEyeClosed) _Bool leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property(readonly, nonatomic) double blurScore; // @synthesize blurScore=_blurScore;
@property(readonly, nonatomic) _Bool hasSmile; // @synthesize hasSmile=_hasSmile;
@property(readonly, nonatomic) _Bool manual; // @synthesize manual=_manual;
@property(readonly, nonatomic, getter=isInTrash) _Bool inTrash; // @synthesize inTrash=_inTrash;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) _Bool isInVIPModel; // @synthesize isInVIPModel=_isInVIPModel;
@property(readonly, nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(readonly, nonatomic) double roll; // @synthesize roll=_roll;
@property(readonly, nonatomic) double mouthY; // @synthesize mouthY=_mouthY;
@property(readonly, nonatomic) double mouthX; // @synthesize mouthX=_mouthX;
@property(readonly, nonatomic) double rightEyeY; // @synthesize rightEyeY=_rightEyeY;
@property(readonly, nonatomic) double rightEyeX; // @synthesize rightEyeX=_rightEyeX;
@property(readonly, nonatomic) double leftEyeY; // @synthesize leftEyeY=_leftEyeY;
@property(readonly, nonatomic) double leftEyeX; // @synthesize leftEyeX=_leftEyeX;
@property(readonly, nonatomic) long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property(readonly, nonatomic) long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;
@property(readonly, nonatomic) short confirmedFaceCropGenerationState; // @synthesize confirmedFaceCropGenerationState=_confirmedFaceCropGenerationState;
@property(readonly, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) long long qualityMeasure; // @synthesize qualityMeasure=_qualityMeasure;
@property(readonly, nonatomic) long long clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
@property(readonly, nonatomic) short detectionType; // @synthesize detectionType=_detectionType;
@property(readonly, nonatomic) double bodyHeight; // @synthesize bodyHeight=_bodyHeight;
@property(readonly, nonatomic) double bodyWidth; // @synthesize bodyWidth=_bodyWidth;
@property(readonly, nonatomic) double bodyCenterY; // @synthesize bodyCenterY=_bodyCenterY;
@property(readonly, nonatomic) double bodyCenterX; // @synthesize bodyCenterX=_bodyCenterX;
@property(readonly, nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(readonly, nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(readonly, nonatomic) double size; // @synthesize size=_size;
@property(readonly, nonatomic, getter=isConfirmedFaceCropGenerationPending) _Bool confirmedFaceCropGenerationPending;
- (id)faceClusteringProperties;	// IMP=0x0000000000143860
- (id)_createPropertyObjectOfClass:(Class)arg1;	// IMP=0x000000000014384c
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;	// IMP=0x000000000014348c
- (void)fetchPropertySetsIfNeeded;	// IMP=0x0000000000143473
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x00000000001425cf
- (Class)changeRequestClass;	// IMP=0x00000000001425be
@property(readonly, nonatomic) NSString *personLocalIdentifier;

@end
