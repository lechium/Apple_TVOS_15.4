//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIActionGroupable-Protocol.h>

@class NSString, UIImage;

@interface _UIAction : NSObject <_UIActionGroupable>
{
    _Bool _requiresAuthenticatedInput;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    CDUnknownBlockType _handler;	// 56 = 0x38
}

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b5771
- (void).cxx_destruct;	// IMP=0x00000000000b5b4a
@property(nonatomic) _Bool requiresAuthenticatedInput; // @synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b595a
- (void)performAction;	// IMP=0x00000000000b58e6
- (id)_initWithWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b580a
- (id)_apiRepresentation;	// IMP=0x00000000004ea487

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
