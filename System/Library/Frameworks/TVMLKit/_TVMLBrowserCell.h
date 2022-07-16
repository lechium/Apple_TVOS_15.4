//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/_TVFullScreenBrowserViewCell.h>

@class UIImageView, UIView, UIViewController, _TVAppDocumentRequestController;
@protocol TVMediaController;

@interface _TVMLBrowserCell : _TVFullScreenBrowserViewCell
{
    CDUnknownBlockType _onLockupImageCancel;	// 8 = 0x8
    struct {
        _Bool loadDataSent;
    } _flags;	// 16 = 0x10
    UIViewController<TVMediaController> *_mediaController;	// 24 = 0x18
    id _lockupImageProxy;	// 32 = 0x20
    _TVAppDocumentRequestController *_documentController;	// 40 = 0x28
    CDUnknownBlockType _onLoadData;	// 48 = 0x30
    UIView *_contentBorderView;	// 56 = 0x38
    UIView *_contentDimmingView;	// 64 = 0x40
    UIImageView *_lockupImageView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002dcfc
@property(readonly, nonatomic) UIImageView *lockupImageView; // @synthesize lockupImageView=_lockupImageView;
@property(readonly, nonatomic) UIView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(readonly, nonatomic) UIView *contentBorderView; // @synthesize contentBorderView=_contentBorderView;
@property(copy, nonatomic) CDUnknownBlockType onLoadData; // @synthesize onLoadData=_onLoadData;
@property(retain, nonatomic) _TVAppDocumentRequestController *documentController; // @synthesize documentController=_documentController;
@property(retain, nonatomic) id lockupImageProxy; // @synthesize lockupImageProxy=_lockupImageProxy;
- (void)_loadDataConditionally:(_Bool)arg1;	// IMP=0x000000000002dbb4
- (void)normalizedPositionDidChange;	// IMP=0x000000000002db0c
- (void)layoutSubviews;	// IMP=0x000000000002d64e
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000002d5b8
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000002d503
- (id)preferredFocusEnvironments;	// IMP=0x000000000002d3d1
- (void)prepareForReuse;	// IMP=0x000000000002d368
@property(readonly, nonatomic) UIViewController<TVMediaController> *mediaController; // @synthesize mediaController=_mediaController;
- (void)dealloc;	// IMP=0x000000000002cbff
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002c9b9

@end

