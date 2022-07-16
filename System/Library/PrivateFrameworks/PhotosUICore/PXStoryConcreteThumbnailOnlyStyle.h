//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryStyle-Protocol.h>
#import <PhotosUICore/PXStoryTimelineStyle-Protocol.h>

@class NSArray, NSString;
@protocol PXAudioCueSource, PXStorySongResource;

@interface PXStoryConcreteThumbnailOnlyStyle : NSObject <PXStoryTimelineStyle, PXStoryStyle>
{
    NSArray *_allowedClipCompositions;	// 8 = 0x8
    NSString *_originalColorGradeCategory;	// 16 = 0x10
    long long _customColorGradeKind;	// 24 = 0x18
    CDStruct_1b6d18a9 _defaultDisplayAssetPresentationDuration;	// 32 = 0x20
    CDStruct_1b6d18a9 _outroDuration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000434a94
@property(readonly, nonatomic) CDStruct_1b6d18a9 outroDuration; // @synthesize outroDuration=_outroDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 defaultDisplayAssetPresentationDuration; // @synthesize defaultDisplayAssetPresentationDuration=_defaultDisplayAssetPresentationDuration;
@property(readonly, nonatomic) long long customColorGradeKind; // @synthesize customColorGradeKind=_customColorGradeKind;
@property(readonly, nonatomic) NSString *originalColorGradeCategory; // @synthesize originalColorGradeCategory=_originalColorGradeCategory;
@property(readonly, nonatomic) _Bool allowsIncompleteTimelines;
- (CDStruct_195f2361)audioInfoForDisplayAsset:(id)arg1;	// IMP=0x0000000000434a31
- (CDStruct_cac3ced6)transitionInfoForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2;	// IMP=0x0000000000434a08
- (void)enumerateAllowedKenBurnsEffectParametersForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2 assetContentInfos:(const CDStruct_4cef5b45 *)arg3 finalPlaybackStyles:(const long long *)arg4 startTime:(CDStruct_1b6d18a9)arg5 durationInfo:(CDStruct_bb38be21)arg6 separatorEffectParameters:(const CDStruct_5eb12be8 *)arg7 separatorEffectContext:(long long)arg8 buffer:(CDStruct_f7388bc9 *)arg9 usingBlock:(CDUnknownBlockType)arg10;	// IMP=0x00000000004349f4
- (void)enumerateAllowedSeparatorEffectParametersForSegmentWithClipComposition:(id)arg1 displayAssets:(id)arg2 finalPlaybackStyles:(const long long *)arg3 startTime:(CDStruct_1b6d18a9)arg4 durationInfo:(CDStruct_bb38be21)arg5 buffer:(CDStruct_5eb12be8 *)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000004349de
- (long long)finalNUpPlaybackStyleForOriginalPlaybackStyle:(long long)arg1;	// IMP=0x00000000004349d5
- (long long)finalOneUpPlaybackStyleForDisplayAsset:(id)arg1 originalPlaybackStyle:(long long)arg2;	// IMP=0x00000000004349c2
- (_Bool)isOriginalPlaybackStyleAllowedInNUp:(long long)arg1;	// IMP=0x00000000004349ba
- (CDStruct_4cef5b45)contentInfoForDisplayAsset:(id)arg1;	// IMP=0x000000000043499f
- (double)composabilityScoreForSegmentWithDisplayAssets:(id)arg1;	// IMP=0x0000000000434996
- (id)allowedClipCompositionsWithStartTime:(CDStruct_1b6d18a9)arg1 nextDisplayAssets:(id)arg2;	// IMP=0x0000000000434988
- (id)clipCompositionForKeyAsset:(id)arg1 contentInfo:(const CDStruct_4cef5b45 *)arg2 finalPlaybackStyle:(long long)arg3;	// IMP=0x000000000043496f
- (CDStruct_bb38be21)durationInfoForSegmentWithDisplayAssets:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000004348f8
- (id)timelineStyleWithSpec:(id)arg1 resourcesDataSource:(id)arg2 randomNumberGenerators:(id)arg3 errorReporter:(id)arg4;	// IMP=0x00000000004348ef
- (id)createRandomNumberGenerators;	// IMP=0x00000000004348e2
@property(readonly, nonatomic) _Bool isCustomized;
@property(readonly, nonatomic) id <PXAudioCueSource> cueSource;
@property(readonly, nonatomic) id <PXStorySongResource> songResource;
- (id)initWithCustomColorGradeKind:(long long)arg1 originalColorGradeCategory:(id)arg2;	// IMP=0x000000000043477b
- (id)init;	// IMP=0x0000000000434765

@end

