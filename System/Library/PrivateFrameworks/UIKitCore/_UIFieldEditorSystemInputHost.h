//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISystemInputViewController, UIVisualEffectView, _UIFieldEditorSystemInputHostView;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorSystemInputHost
{
    _UIFieldEditorSystemInputHostView *_containerView;	// 8 = 0x8
    UIVisualEffectView *_backgroundEffectView;	// 16 = 0x10
    UISystemInputViewController *_systemInputViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005f6b9e
@property(readonly, nonatomic) UISystemInputViewController *_systemInputViewController; // @synthesize _systemInputViewController;
- (id)description;	// IMP=0x00000000005f6b6a
- (_Bool)_isTV;	// IMP=0x00000000005f6aea
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(_Bool)arg1;	// IMP=0x00000000005f662a
- (id)_viewForHostingFieldEditor;	// IMP=0x00000000005f660d
- (void)layoutIfNeeded;	// IMP=0x00000000005f65f9
- (void)addPlaceholderLabel:(id)arg1;	// IMP=0x00000000005f629a
- (void)removeFieldEditor;	// IMP=0x00000000005f61d7
- (void)addFieldEditor:(id)arg1;	// IMP=0x00000000005f5e06
- (void)dealloc;	// IMP=0x00000000005f5dbd

@end

