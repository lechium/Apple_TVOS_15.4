//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNMutableContact, NSString, UIColor;
@protocol CNContactActionDelegate;

@interface CNContactAction : NSObject
{
    _Bool _destructive;	// 8 = 0x8
    id <CNContactActionDelegate> _delegate;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    id _target;	// 40 = 0x28
    SEL _selector;	// 48 = 0x30
    UIColor *_color;	// 56 = 0x38
    long long _transportType;	// 64 = 0x40
}

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;	// IMP=0x0000000000012cd7
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;	// IMP=0x0000000000012cc2
- (void).cxx_destruct;	// IMP=0x0000000000013102
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNContactActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x0000000000012ecf
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000012dd8
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;	// IMP=0x0000000000012c05
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000012b9a

@end

