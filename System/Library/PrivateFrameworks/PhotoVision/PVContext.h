//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoVision/NSCopying-Protocol.h>
#import <PhotoVision/NSSecureCoding-Protocol.h>

@interface PVContext : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _quarantineTwinsOnAssetEnabled;	// 8 = 0x8
    _Bool _faceClusteringDisabled;	// 9 = 0x9
    _Bool _personBuildingDisabled;	// 10 = 0xa
    _Bool _personBuilderMergeCandidatesDisabled;	// 11 = 0xb
    float _faceClusteringThreshold;	// 12 = 0xc
    float _faceClusteringJunkThreshold;	// 16 = 0x10
    float _faceClusteringAgeThreshold;	// 20 = 0x14
    float _faceMergeFaceprintDistanceThreshold;	// 24 = 0x18
    float _facePrimarySuggestionsThreshold;	// 28 = 0x1c
    unsigned int _faceAlgorithmUmbrellaVersion;	// 32 = 0x20
    unsigned int _sceneAlgorithmUmbrellaVersion;	// 36 = 0x24
    unsigned long long _minimumSuggestionSize;	// 40 = 0x28
    unsigned long long _minFaceCountToTriggerClustering;	// 48 = 0x30
    unsigned long long _maxFaceCountForClustering;	// 56 = 0x38
    unsigned long long _minimumFaceGroupSizeForCreatingMergeCandidates;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000021953
@property(nonatomic) unsigned int sceneAlgorithmUmbrellaVersion; // @synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned int faceAlgorithmUmbrellaVersion; // @synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates; // @synthesize minimumFaceGroupSizeForCreatingMergeCandidates=_minimumFaceGroupSizeForCreatingMergeCandidates;
@property(nonatomic) _Bool personBuilderMergeCandidatesDisabled; // @synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled;
@property(nonatomic) _Bool personBuildingDisabled; // @synthesize personBuildingDisabled=_personBuildingDisabled;
@property(nonatomic) _Bool faceClusteringDisabled; // @synthesize faceClusteringDisabled=_faceClusteringDisabled;
@property(nonatomic) unsigned long long maxFaceCountForClustering; // @synthesize maxFaceCountForClustering=_maxFaceCountForClustering;
@property(nonatomic) unsigned long long minFaceCountToTriggerClustering; // @synthesize minFaceCountToTriggerClustering=_minFaceCountToTriggerClustering;
@property(nonatomic) _Bool quarantineTwinsOnAssetEnabled; // @synthesize quarantineTwinsOnAssetEnabled=_quarantineTwinsOnAssetEnabled;
@property(nonatomic) unsigned long long minimumSuggestionSize; // @synthesize minimumSuggestionSize=_minimumSuggestionSize;
@property(nonatomic) float facePrimarySuggestionsThreshold; // @synthesize facePrimarySuggestionsThreshold=_facePrimarySuggestionsThreshold;
@property(nonatomic) float faceMergeFaceprintDistanceThreshold; // @synthesize faceMergeFaceprintDistanceThreshold=_faceMergeFaceprintDistanceThreshold;
@property(nonatomic) float faceClusteringAgeThreshold; // @synthesize faceClusteringAgeThreshold=_faceClusteringAgeThreshold;
@property(nonatomic) float faceClusteringJunkThreshold; // @synthesize faceClusteringJunkThreshold=_faceClusteringJunkThreshold;
@property(nonatomic) float faceClusteringThreshold; // @synthesize faceClusteringThreshold=_faceClusteringThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000216e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021567
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000213cf
- (id)init;	// IMP=0x000000000002124a

@end
