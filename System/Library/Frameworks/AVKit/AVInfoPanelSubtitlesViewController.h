//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVInfoPanelMediaOptionSelectionDelegate-Protocol.h>
#import <AVKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVInfoPanelSubtitleCollectionViewController, NSArray, NSLayoutConstraint, NSString;
@protocol AVInfoPanelMediaOptionsController, AVInfoPanelSubtitlesDelegate, AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVInfoPanelSubtitlesViewController <AVInfoPanelMediaOptionSelectionDelegate, UICollectionViewDelegateFlowLayout>
{
    unsigned long long _axis;	// 8 = 0x8
    AVInfoPanelSubtitleCollectionViewController *_subtitleCollectionViewController;	// 16 = 0x10
    NSArray *_subtitleOptions;	// 24 = 0x18
    NSLayoutConstraint *_subtitleCollectionViewWidthConstraint;	// 32 = 0x20
    id <AVInfoPanelSubtitlesDelegate> _delegate;	// 40 = 0x28
    unsigned long long _selectedSubtitleOptionIndex;	// 48 = 0x30
    id <AVInfoPanelMediaOptionsController> _mediaOptionsController;	// 56 = 0x38
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x00000000000db478
- (void).cxx_destruct;	// IMP=0x00000000000db416
@property(retain, nonatomic) id <AVInfoPanelMediaOptionsController> mediaOptionsController; // @synthesize mediaOptionsController=_mediaOptionsController;
@property(nonatomic) unsigned long long selectedSubtitleOptionIndex; // @synthesize selectedSubtitleOptionIndex=_selectedSubtitleOptionIndex;
@property(nonatomic) __weak id <AVInfoPanelSubtitlesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_createOrUpdateSubtitleCollectionViewWidthConstraint;	// IMP=0x00000000000db05c
- (id)_subtitleFlowLayoutForAxis:(unsigned long long)arg1;	// IMP=0x00000000000dada9
- (void)mediaOptionCollectionViewController:(id)arg1 didSelectMediaOption:(id)arg2;	// IMP=0x00000000000dad19
- (void)loadView;	// IMP=0x00000000000da74b
- (void)updateSelectedMediaOption;	// IMP=0x00000000000da70f
- (void)updateMediaSelectionOptions;	// IMP=0x00000000000da69b
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant;
- (_Bool)hasContent;	// IMP=0x00000000000da60e
- (void)setMediaOptions:(id)arg1;	// IMP=0x00000000000da5d5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000da5a2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000da58b
- (id)initWithAxis:(unsigned long long)arg1;	// IMP=0x00000000000da47b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

