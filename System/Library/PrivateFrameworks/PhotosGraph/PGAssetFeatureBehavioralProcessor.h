//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGBehavioralAlgorithm-Protocol.h>

@class NSDictionary, NSSet;
@protocol OS_os_log;

@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm>
{
    NSObject<OS_os_log> *_loggingConnection;	// 8 = 0x8
    NSSet *_goldAssets;	// 16 = 0x10
    NSDictionary *_personFeatures;	// 24 = 0x18
    NSDictionary *_sceneFeatures;	// 32 = 0x20
    double _similarityScoreNormalizer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004e3839
@property(nonatomic) double similarityScoreNormalizer; // @synthesize similarityScoreNormalizer=_similarityScoreNormalizer;
@property(retain, nonatomic) NSDictionary *sceneFeatures; // @synthesize sceneFeatures=_sceneFeatures;
@property(retain, nonatomic) NSDictionary *personFeatures; // @synthesize personFeatures=_personFeatures;
@property(retain, nonatomic) NSSet *goldAssets; // @synthesize goldAssets=_goldAssets;
- (id)dataToPersist;	// IMP=0x00000000004e36f5
- (void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004e2dec
- (id)_semanticScoreByAssetUUIDForAssets:(id)arg1 normalize:(_Bool)arg2;	// IMP=0x00000000004e2681
- (float)semanticScoreForAsset:(id)arg1;	// IMP=0x00000000004e2561
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;	// IMP=0x00000000004e254a
- (void)preprocessWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004e1fa4
- (id)initWithGoldAssets:(id)arg1 persistedData:(id)arg2 loggingConnection:(id)arg3;	// IMP=0x00000000004e1e58
- (id)initWithGoldAssets:(id)arg1 loggingConnection:(id)arg2;	// IMP=0x00000000004e1e3c

@end

