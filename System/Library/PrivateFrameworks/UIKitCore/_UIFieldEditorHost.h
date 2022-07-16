//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFieldEditor, UIView;
@protocol _UIFieldEditorHostingViewRequirements;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorHost : NSObject
{
    UIView<_UIFieldEditorHostingViewRequirements> *_hostingView;	// 8 = 0x8
    UIFieldEditor *_hostedFieldEditor;	// 16 = 0x10
}

+ (id)fieldEditorHostForTextField:(id)arg1;	// IMP=0x00000000000b27ff
- (void).cxx_destruct;	// IMP=0x00000000000b2b7e
@property(readonly, nonatomic) UIFieldEditor *hostedFieldEditor; // @synthesize hostedFieldEditor=_hostedFieldEditor;
@property(readonly, nonatomic) __weak UIView<_UIFieldEditorHostingViewRequirements> *hostingView; // @synthesize hostingView=_hostingView;
- (id)description;	// IMP=0x00000000000b2b3b
- (void)layoutIfNeeded;	// IMP=0x00000000000b2b35
- (void)addPlaceholderLabel:(id)arg1;	// IMP=0x00000000000b2a92
- (void)removeFieldEditor;	// IMP=0x00000000000b2a60
- (id)_viewForHostingFieldEditor;	// IMP=0x00000000000b2a1d
- (void)addFieldEditor:(id)arg1;	// IMP=0x00000000000b28ff
@property(readonly, nonatomic, getter=isHostingFieldEditor) _Bool hostingFieldEditor;
- (id)initWithHostingView:(id)arg1;	// IMP=0x00000000000b288d

@end
