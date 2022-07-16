//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVInfoPanelDescriptionViewController, AVInfoPanelNavigationCollectionViewController, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface AVInfoPanelMetadataViewController
{
    AVInfoPanelDescriptionViewController *_descriptionViewController;	// 8 = 0x8
    AVInfoPanelNavigationCollectionViewController *_navigationViewController;	// 16 = 0x10
    UIVisualEffectView *_dividerView;	// 24 = 0x18
    _Bool _suppressDescription;	// 32 = 0x20
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x000000000002f8a6
+ (id)_titleForNavigationOnly;	// IMP=0x000000000002f895
+ (id)titleForInfo;	// IMP=0x000000000002f884
- (void).cxx_destruct;	// IMP=0x000000000002f842
@property(nonatomic) _Bool suppressDescription; // @synthesize suppressDescription=_suppressDescription;
- (id)_navigationFlowLayout;	// IMP=0x000000000002f7bf
- (id)preferredFocusEnvironments;	// IMP=0x000000000002f6d3
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x000000000002f51a
- (void)loadView;	// IMP=0x000000000002e4e4
- (_Bool)hasContent;	// IMP=0x000000000002e30c
@property(readonly) AVInfoPanelNavigationCollectionViewController *navigationViewController;
@property(readonly) AVInfoPanelDescriptionViewController *descriptionViewController;
- (id)init;	// IMP=0x000000000002e18d

@end

