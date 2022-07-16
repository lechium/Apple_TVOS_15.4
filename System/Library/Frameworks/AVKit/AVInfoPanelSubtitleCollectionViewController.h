//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVInfoPanelSubtitleCollectionViewController
{
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009ad0f
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
- (void)_selectSubtitleAtIndex:(long long)arg1 shouldScrollToCenter:(_Bool)arg2;	// IMP=0x000000000009abee
- (void)_scrollToAndSelectCurrentSubtitleOption;	// IMP=0x000000000009aad7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009a9f9
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000009a968
- (id)_indexPathForMediaOptionIndex:(long long)arg1;	// IMP=0x000000000009a8aa
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009a7e3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009a71f
- (void)viewDidLoad;	// IMP=0x000000000009a5b8
- (void)setSelectedMediaOptionIndex:(long long)arg1;	// IMP=0x000000000009a4f7

@end
