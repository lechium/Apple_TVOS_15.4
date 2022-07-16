//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/IKDocumentServiceRequestDelegate-Protocol.h>
#import <TVMLKit/IKServiceRequestDelegate-Protocol.h>
#import <TVMLKit/TVMediaControllerDelegate-Protocol.h>
#import <TVMLKit/TVMediaControllerHosting-Protocol.h>
#import <TVMLKit/TVMediaPlaybackManagerDelegate-Protocol.h>
#import <TVMLKit/TVMediaPlaying-Protocol.h>
#import <TVMLKit/TVObserving-Protocol.h>
#import <TVMLKit/TVTemplateFeaturesManagerDelegate-Protocol.h>

@class IKDocumentServiceRequest, IKUpdateServiceRequest, NSString, TVMediaInfo, TVMediaPlaybackManager, TVObservableEventController, TVTemplateFeaturesManager, UIImage, UIViewController, _TVSwipeUpMessageView;
@protocol TVMediaController, TVMediaProviding, TVShowcasing;

@interface _TVAppDocumentRequestController <IKDocumentServiceRequestDelegate, TVTemplateFeaturesManagerDelegate, TVMediaControllerDelegate, TVMediaPlaying, IKServiceRequestDelegate, TVMediaControllerHosting, TVObserving, TVMediaPlaybackManagerDelegate>
{
    struct {
        _Bool initialRequestSent;
        _Bool shouldHideUI;
    } _flags;	// 8 = 0x8
    struct {
        _Bool hasSelectedMediaInfoDidChange;
        _Bool hasDidHideUI;
        _Bool hasShowcaseFactorDidChange;
        _Bool hasDidCompleteDocumentCreation;
    } _adrcDelegateFlags;	// 10 = 0xa
    IKDocumentServiceRequest *_documentServiceRequest;	// 16 = 0x10
    UIViewController<TVMediaController> *_mediaController;	// 24 = 0x18
    TVMediaPlaybackManager *_mediaPlaybackManager;	// 32 = 0x20
    TVMediaInfo *_selectedMediaInfo;	// 40 = 0x28
    double _showcaseFactor;	// 48 = 0x30
    double _showcaseInset;	// 56 = 0x38
    TVTemplateFeaturesManager *_featuresManager;	// 64 = 0x40
    id <TVShowcasing> _showcasingController;	// 72 = 0x48
    id <TVMediaProviding> _mediaProvider;	// 80 = 0x50
    _TVSwipeUpMessageView *_swipeUpMessageView;	// 88 = 0x58
    TVObservableEventController *_observableEventController;	// 96 = 0x60
    IKUpdateServiceRequest *_updateServiceRequest;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000917c9
@property(retain, nonatomic) IKUpdateServiceRequest *updateServiceRequest; // @synthesize updateServiceRequest=_updateServiceRequest;
@property(retain, nonatomic) TVObservableEventController *observableEventController; // @synthesize observableEventController=_observableEventController;
@property(retain, nonatomic) _TVSwipeUpMessageView *swipeUpMessageView; // @synthesize swipeUpMessageView=_swipeUpMessageView;
@property(nonatomic) __weak id <TVMediaProviding> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(nonatomic) __weak id <TVShowcasing> showcasingController; // @synthesize showcasingController=_showcasingController;
@property(readonly, nonatomic) TVTemplateFeaturesManager *featuresManager; // @synthesize featuresManager=_featuresManager;
@property(nonatomic) double showcaseInset; // @synthesize showcaseInset=_showcaseInset;
@property(readonly, nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property(readonly, nonatomic) TVMediaInfo *selectedMediaInfo; // @synthesize selectedMediaInfo=_selectedMediaInfo;
@property(retain, nonatomic) TVMediaPlaybackManager *mediaPlaybackManager; // @synthesize mediaPlaybackManager=_mediaPlaybackManager;
@property(retain, nonatomic) UIViewController<TVMediaController> *mediaController; // @synthesize mediaController=_mediaController;
@property(readonly, nonatomic) IKDocumentServiceRequest *documentServiceRequest; // @synthesize documentServiceRequest=_documentServiceRequest;
- (void)_updateShowcaseFactor;	// IMP=0x00000000000914b8
- (void)_updateMediaInfo;	// IMP=0x000000000009135a
- (id)_hostingFocusEnvironment;	// IMP=0x0000000000091248
- (void)_hostMediaControllerIfPossible;	// IMP=0x0000000000090ff0
- (void)shouldHideSupplementaryUI:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000090fea
- (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;	// IMP=0x0000000000090fe2
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;	// IMP=0x0000000000090fdc
- (_Bool)automaticallyProvidesMediaController;	// IMP=0x0000000000090fd4
- (void)showcaseFactorDidChange;	// IMP=0x0000000000090fce
- (void)mediaInfoDidChange;	// IMP=0x0000000000090fc8
- (void)didChangeDocumentContext;	// IMP=0x0000000000090dd0
- (_Bool)tv_handleEventForDocument:(id)arg1 eventName:(id)arg2 targetResponder:(id)arg3 viewElement:(id)arg4 extraInfo:(id *)arg5;	// IMP=0x0000000000090cc3
- (void)documentDidChangeForDocumentServiceRequest:(id)arg1;	// IMP=0x0000000000090c54
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;	// IMP=0x0000000000090a5f
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) UIImage *coverImage;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;	// IMP=0x000000000009092f
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000908bd
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000090837
- (void)addObserver:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000000907b1
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;	// IMP=0x000000000009057a
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(_Bool)arg2 animated:(_Bool)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000008fc71
- (void)stateDidChangeForMediaController:(id)arg1;	// IMP=0x000000000008fbe8
- (void)coverImageDidChangeForMediaController:(id)arg1;	// IMP=0x000000000008fb8f
- (void)featuresManager:(id)arg1 currentContextDidChangeForFeature:(id)arg2;	// IMP=0x000000000008fabb
- (id)tv_featuresManagerForDocument:(id)arg1;	// IMP=0x000000000008faa9
- (void)adoptMediaController:(id)arg1;	// IMP=0x000000000008fa3e
- (id)relinquishOwnership;	// IMP=0x000000000008f97d
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x000000000008f8ec
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x000000000008f85b
- (void)willHostTemplateViewController:(id)arg1 usesTransitions:(_Bool *)arg2;	// IMP=0x000000000008f7f9
- (id)preferredFocusEnvironments;	// IMP=0x000000000008f703
- (void)viewDidLayoutSubviews;	// IMP=0x000000000008f527
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000008f4bd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000008f442
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000008f1cb
- (void)viewDidLoad;	// IMP=0x000000000008f05c
- (void)sendInitialRequestIfNeeded;	// IMP=0x000000000008f009
@property(readonly, nonatomic) _Bool isUIHidden;
- (void)setAppDelegate:(id)arg1;	// IMP=0x000000000008ea60
- (void)dealloc;	// IMP=0x000000000008e980
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2;	// IMP=0x000000000008e8b2
- (id)initWithDocumentServiceRequest:(id)arg1;	// IMP=0x000000000008e89b
- (id)initWithAppDocument:(id)arg1;	// IMP=0x000000000008e7cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

