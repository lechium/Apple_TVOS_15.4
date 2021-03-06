//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/NSSecureCoding-Protocol.h>
#import <AVKit/UIAccessibilityIdentification-Protocol.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface AVControlItem : NSObject <NSSecureCoding, UIAccessibilityIdentification>
{
    UIImage *_image;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    _Bool __private;	// 17 = 0x11
    NSString *_accessibilityIdentifier;	// 24 = 0x18
    CDUnknownBlockType _action;	// 32 = 0x20
    UIColor *_tintColor;	// 40 = 0x28
    CDUnknownBlockType _actionBlock;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037fcb
+ (id)controlItemWithImage:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038267
+ (id)_startPiPControlItem;	// IMP=0x000000000003851d
+ (id)_stopPiPControlItem;	// IMP=0x0000000000038405
+ (id)_cancelPiPControlItem;	// IMP=0x00000000000382ef
- (void).cxx_destruct;	// IMP=0x0000000000037f0c
@property(nonatomic, getter=_isPrivate, setter=_setPrivate:) _Bool _private; // @synthesize _private=__private;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
- (void)__pipDummy:(id)arg1;	// IMP=0x0000000000037e83
@property(retain, nonatomic, getter=_privateImage, setter=_setPrivateImage:) UIImage *_privateImage;
- (void)_blockAction:(id)arg1;	// IMP=0x0000000000037d91
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037b9d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037a5d
- (id)init;	// IMP=0x0000000000037a0d
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double width;
- (void)_sendActionWithSender:(id)arg1;	// IMP=0x000000000003814e
@property(readonly, nonatomic, getter=_isSpacer) _Bool spacer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

