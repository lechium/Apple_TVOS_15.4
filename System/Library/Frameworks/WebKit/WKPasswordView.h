//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WebKit/UIDocumentPasswordViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPasswordView : UIView <UIDocumentPasswordViewDelegate>
{
    struct RetainPtr<NSString> _documentName;	// 8 = 0x8
    struct RetainPtr<UIScrollView> _scrollView;	// 16 = 0x10
    struct RetainPtr<UIDocumentPasswordView> _passwordView;	// 24 = 0x18
    double _savedMinimumZoomScale;	// 32 = 0x20
    double _savedMaximumZoomScale;	// 40 = 0x28
    double _savedZoomScale;	// 48 = 0x30
    struct CGSize _savedContentSize;	// 56 = 0x38
    struct RetainPtr<UIColor> _savedBackgroundColor;	// 72 = 0x48
    CDUnknownBlockType _userDidEnterPassword;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000000035d3dc
- (void).cxx_destruct;	// IMP=0x000000000035d356
@property(copy, nonatomic) CDUnknownBlockType userDidEnterPassword; // @synthesize userDidEnterPassword=_userDidEnterPassword;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;	// IMP=0x000000000035d223
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;	// IMP=0x000000000035d1d7
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;	// IMP=0x000000000035d188
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x000000000035cead
- (void)showPasswordFailureAlert;	// IMP=0x000000000035cccf
- (void)hide;	// IMP=0x000000000035cbe8
- (void)showInScrollView:(id)arg1;	// IMP=0x000000000035ca20
- (void)layoutSubviews;	// IMP=0x000000000035c9ca
@property(readonly, nonatomic) NSString *documentName;
- (void)dealloc;	// IMP=0x000000000035c977
- (id)initWithFrame:(struct CGRect)arg1 documentName:(id)arg2;	// IMP=0x000000000035c829

@end

