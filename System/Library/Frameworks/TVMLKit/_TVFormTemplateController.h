//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/TVTextEntryControllerDelegate-Protocol.h>

@class IKImageElement, IKTextFieldElement, IKViewElement, NSString, UIImageView, _TVTextEntryController;

__attribute__((visibility("hidden")))
@interface _TVFormTemplateController <IKAppKeyboardDelegate, TVTextEntryControllerDelegate>
{
    _TVTextEntryController *_textEntryController;	// 8 = 0x8
    IKViewElement *_templateElement;	// 16 = 0x10
    IKViewElement *_bannerElement;	// 24 = 0x18
    IKTextFieldElement *_textFieldElement;	// 32 = 0x20
    IKViewElement *_footerElement;	// 40 = 0x28
    IKImageElement *_bgImageElement;	// 48 = 0x30
    IKImageElement *_bgHeroImageElement;	// 56 = 0x38
    UIImageView *_backgroundImageView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000050556
- (void)_updateKeyboardText;	// IMP=0x000000000005042c
- (void)_updateTextFieldText;	// IMP=0x000000000005027d
- (void)_updateViewIgnoringSparseUpdates:(_Bool)arg1;	// IMP=0x000000000004fe7c
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x000000000004fcd9
- (long long)_blurEffectStyle;	// IMP=0x000000000004fc9e
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x000000000004fc77
- (id)_backgroundImageProxy;	// IMP=0x000000000004fb5a
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000004faf6
- (void)_textFieldEndEditing;	// IMP=0x000000000004faf0
- (void)_textFieldEditingChanged;	// IMP=0x000000000004fa95
- (void)_textFieldBeginEditing;	// IMP=0x000000000004fa8f
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x000000000004fa52
- (void)textDidChangeForKeyboard:(id)arg1;	// IMP=0x000000000004fa1b
- (id)preferredFocusEnvironments;	// IMP=0x000000000004f9fe
- (void)loadView;	// IMP=0x000000000004f4f3
- (void)viewDidLayoutSubviews;	// IMP=0x000000000004f3d6
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000004ee6f
- (void)dealloc;	// IMP=0x000000000004ee1d
@property(readonly, nonatomic) UIImageView *backgroundImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

