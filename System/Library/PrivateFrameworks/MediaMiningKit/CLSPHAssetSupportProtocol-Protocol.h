//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>

@class CLSAssetFaceInformationSummary, NSSet, PHAssetAestheticProperties, PHAssetCurationProperties, PHAssetMediaAnalysisProperties;
@protocol CLSAssetProcessedSignals;

@protocol CLSPHAssetSupportProtocol <CLSInvestigationItem>
@property(readonly, nonatomic) id <CLSAssetProcessedSignals> clsProcessedSignals;
@property(readonly, nonatomic) CLSAssetFaceInformationSummary *clsFaceInformationSummary;
- (short)clsInterestingAudioClassifications;
- (_Bool)clsIsTragicFailure;
- (_Bool)clsIsGuestAsset;
- (NSSet *)clsSceneClassifications;
- (unsigned long long)clsVideoFaceCount;
- (double)clsActivityScore;
- (double)clsVideoScore;
- (long long)playbackStyle;
- (PHAssetCurationProperties *)curationProperties;
- (PHAssetMediaAnalysisProperties *)mediaAnalysisProperties;
- (PHAssetAestheticProperties *)aestheticProperties;
- (unsigned long long)reframeVariation;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (double)duration;
- (_Bool)representsBurst;
- (_Bool)isSubtype:(unsigned long long)arg1;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)hasAdjustments;
- (_Bool)isHEICSequence;
- (_Bool)isPSD;
- (_Bool)isPNG;
- (_Bool)isPDF;
- (_Bool)isAnimatedGIF;
- (_Bool)isTrashed;
- (_Bool)isAudio;
- (_Bool)isPhoto;
- (_Bool)isHidden;
@end

