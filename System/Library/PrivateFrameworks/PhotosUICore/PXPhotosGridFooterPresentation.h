//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXGView, PXPhotosGlobalFooterView, PXPhotosLayout, PXPhotosViewModel;
@protocol PXPhotosGridFooterPresentationDelegate;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver>
{
    PXPhotosViewModel *_viewModel;	// 8 = 0x8
    PXGView *_gridView;	// 16 = 0x10
    PXPhotosLayout *_layout;	// 24 = 0x18
    _Bool _hasAppearedOnce;	// 32 = 0x20
    _Bool _hasReachedInitialPosition;	// 33 = 0x21
    PXPhotosGlobalFooterView *_reusableFooterView;	// 40 = 0x28
    double _lastUserScrollTime;	// 48 = 0x30
    _Bool _didAutoReveal;	// 56 = 0x38
    NSTimer *_autoRevealMinimumIdleTimer;	// 64 = 0x40
    _Bool _shouldAutoReveal;	// 72 = 0x48
    _Bool _wantsFooter;	// 73 = 0x49
    id <PXPhotosGridFooterPresentationDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000800161
@property(nonatomic) _Bool wantsFooter; // @synthesize wantsFooter=_wantsFooter;
@property(nonatomic) _Bool shouldAutoReveal; // @synthesize shouldAutoReveal=_shouldAutoReveal;
@property(nonatomic) __weak id <PXPhotosGridFooterPresentationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;	// IMP=0x00000000008000c3
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000800040
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;	// IMP=0x00000000007fffdb
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;	// IMP=0x00000000007fffb2
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000007fff39
- (void)_updateFooterView;	// IMP=0x00000000007ffd37
- (void)_updateWantsFooter;	// IMP=0x00000000007ffc74
- (void)_conditionallyAutoRevealFooterView;	// IMP=0x00000000007ffb0c
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)arg1;	// IMP=0x00000000007ff977
- (_Bool)_shouldAutoRevealFooterView;	// IMP=0x00000000007ff571
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(_Bool)arg1;	// IMP=0x00000000007ff245
- (void)viewDidScrollToInitialPosition;	// IMP=0x00000000007ff1f7
- (void)viewDidAppear;	// IMP=0x00000000007ff1e1
- (id)initWithViewModel:(id)arg1 gridView:(id)arg2 layout:(id)arg3;	// IMP=0x00000000007fef71
- (id)init;	// IMP=0x00000000007feef7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

