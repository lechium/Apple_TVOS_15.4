//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXImageCaptionModel, AXMSceneDetectorNode, NSURL;

@interface AXMCaptionDetectorNode
{
    AXMSceneDetectorNode *_sceneDetector;	// 8 = 0x8
}

+ (id)title;	// IMP=0x000000000008601d
+ (_Bool)isSupported;	// IMP=0x000000000008600d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000085d9e
+ (struct CGSize)preferredModelInputSize;	// IMP=0x0000000000085d2f
- (void).cxx_destruct;	// IMP=0x0000000000086111
@property(nonatomic) __weak AXMSceneDetectorNode *sceneDetector; // @synthesize sceneDetector=_sceneDetector;
@property(readonly, nonatomic) AXImageCaptionModel *effectiveCaptionModelInfo;
@property(readonly, nonatomic) NSURL *effectiveModelURL;
@property(nonatomic) unsigned long long genderStrategy;
@property(nonatomic) unsigned long long overrideScaleMethod;
@property(retain, nonatomic) NSURL *overrideModelURL;
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x000000000008602a
- (_Bool)requiresVisionFramework;	// IMP=0x0000000000086015
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000085eec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000085da6
- (void)dealloc;	// IMP=0x0000000000085d6f
- (void)nodeInitialize;	// IMP=0x0000000000085d40

@end

