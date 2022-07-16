//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIResponder, UIView;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface _UITextServiceSessionContext : NSObject <NSSecureCoding>
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
    UIView *_view;	// 16 = 0x10
    NSString *_textWithContext;	// 24 = 0x18
    struct _NSRange _selectedRange;	// 32 = 0x20
    struct CGRect _presentationRect;	// 48 = 0x30
}

+ (struct CGRect)selectionBoundingBoxForTextInput:(id)arg1;	// IMP=0x0000000000ed0cc0
+ (id)selectedTextRangeForTextInput:(id)arg1;	// IMP=0x0000000000ed0c26
+ (id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2;	// IMP=0x0000000000ed0996
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withRange:(struct _NSRange)arg3 withView:(id)arg4;	// IMP=0x0000000000ed08f7
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;	// IMP=0x0000000000ed0874
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000ed05f7
- (void).cxx_destruct;	// IMP=0x0000000000ed136a
@property(readonly, nonatomic) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(readonly, nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(readonly, copy, nonatomic) NSString *textWithContext; // @synthesize textWithContext=_textWithContext;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
- (void)convertRectToView:(id)arg1;	// IMP=0x0000000000ed1276
- (void)_gatherAdditionalContext;	// IMP=0x0000000000ed0e2a
- (_Bool)_typeRequiresContext:(long long)arg1;	// IMP=0x0000000000ed0e1d
- (id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4;	// IMP=0x0000000000ed09f3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ed06f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ed05ff

@end
