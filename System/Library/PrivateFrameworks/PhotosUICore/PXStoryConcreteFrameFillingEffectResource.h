//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryFrameFillingEffectResource-Protocol.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PXStoryConcreteFrameFillingEffectResource <PXStoryFrameFillingEffectResource>
{
    _Bool _useSmartColor;	// 24 = 0x18
    id <PXDisplayAsset> _displayAsset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000534842
@property(readonly, nonatomic) _Bool px_storyResourceUseSmartColor; // @synthesize px_storyResourceUseSmartColor=_useSmartColor;
@property(readonly, nonatomic) id <PXDisplayAsset> px_storyResourceDisplayAsset; // @synthesize px_storyResourceDisplayAsset=_displayAsset;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005346b6
- (id)initWithDisplayAsset:(id)arg1 useSmartColor:(_Bool)arg2;	// IMP=0x0000000000534606
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2;	// IMP=0x0000000000534583
- (id)init;	// IMP=0x000000000053456d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property(readonly, nonatomic) long long px_storyResourceKind;
@property(readonly) Class superclass;

@end

