//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/SiriTVUISnippetViewDelegate-Protocol.h>
#import <SiriTVUI/SiriTVUITemplateItemViewControllerDelegate-Protocol.h>
#import <SiriTVUI/SiriTVUITemplatedViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber, NSString, SiriTVUITemplateItem, SiriTVUITemplateModelTranslator, SiriTVUITemplatedSnippetView;

@interface SiriTVUITemplatedSnippetViewController <SiriTVUISnippetViewDelegate, SiriTVUITemplateItemViewControllerDelegate, SiriTVUITemplatedViewDelegate>
{
    NSMutableDictionary *_templateItemOffsets;	// 8 = 0x8
    NSNumber *_cachedAllowSwipeDismissal;	// 16 = 0x10
    _Bool _didCancelPreparePresentation;	// 24 = 0x18
    double _fullScreenFraction;	// 32 = 0x20
    SiriTVUITemplateModelTranslator *_translationLayer;	// 40 = 0x28
    SiriTVUITemplateItem *_annotationItem;	// 48 = 0x30
    NSArray *_templateItems;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000084ef
@property(nonatomic, getter=_didCancelPreparePresentation, setter=_setDidCancelPreparePresentation:) _Bool didCancelPreparePresentation; // @synthesize didCancelPreparePresentation=_didCancelPreparePresentation;
@property(copy, nonatomic, setter=_setTemplateItems:) NSArray *templateItems; // @synthesize templateItems=_templateItems;
@property(retain, nonatomic) SiriTVUITemplateItem *annotationItem; // @synthesize annotationItem=_annotationItem;
@property(readonly, nonatomic) SiriTVUITemplateModelTranslator *translationLayer; // @synthesize translationLayer=_translationLayer;
@property(readonly, nonatomic) double fullScreenFraction; // @synthesize fullScreenFraction=_fullScreenFraction;
- (_Bool)shouldCancelPresentationAfterPresentationTimeout;	// IMP=0x00000000000082e9
- (void)prepareForSiriPresentationAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007ca5
- (void)prepareForSiriPresentation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007ad7
- (_Bool)shouldLoadSnippetAsynchronously:(id)arg1;	// IMP=0x0000000000007aba
- (struct UIEdgeInsets)fullScreenPaddingDeltaForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000007a37
@property(readonly, nonatomic) struct CGSize maximumContentSize;
- (struct CGPoint)offsetForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000007931
- (struct UIEdgeInsets)paddingForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000078ae
- (_Bool)shouldBeOffScreenInPartialForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000784c
- (unsigned long long)presentationOptionsForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000077ea
- (void)_updateViewForCurrentTemplateItems;	// IMP=0x0000000000006fd4
- (void)templateItemViewController:(id)arg1 selectTemplateItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000006f3a
- (void)templateItemViewController:(id)arg1 presentModalWithFetchContentCommand:(id)arg2;	// IMP=0x0000000000006e90
- (void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x0000000000006e1b
- (void)templateItemViewController:(id)arg1 updateLayoutOffsetsForHighlightedItemInViewController:(id)arg2;	// IMP=0x000000000000683d
- (void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(_Bool)arg4;	// IMP=0x00000000000065ed
- (id)preferredFocusEnvironments;	// IMP=0x0000000000006562
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000064f4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000064a8
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000063fb
- (void)_calculateAndCacheAllowSwipeDismissal;	// IMP=0x00000000000061d2
- (_Bool)allowSwipeDismissal;	// IMP=0x0000000000006193
- (void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(struct CGPoint)arg3;	// IMP=0x0000000000005f2a
- (void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1;	// IMP=0x0000000000005d8f
- (_Bool)canBePresentedFullScreen;	// IMP=0x0000000000005c77
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000005bb9
- (void)setSnippet:(id)arg1;	// IMP=0x0000000000005b24
- (void)loadView;	// IMP=0x0000000000005a86
- (id)initWithTranslationLayer:(id)arg1;	// IMP=0x000000000000597b

// Remaining properties
@property(readonly, nonatomic) struct UIEdgeInsets contentMargins;
@property(readonly, copy, nonatomic) NSString *currentUtterance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriTVUITemplatedSnippetView *view; // @dynamic view;

@end

