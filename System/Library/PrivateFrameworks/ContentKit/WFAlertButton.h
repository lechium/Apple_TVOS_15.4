//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WFAlert;

@interface WFAlertButton : NSObject
{
    _Bool _preferred;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
    WFAlert *_alert;	// 40 = 0x28
    NSArray *_alternativeSpeakableMatches;	// 48 = 0x30
}

+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d636b
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d62ed
+ (id)okButtonWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000d65b0
+ (id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000d64df
+ (id)okButtonWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6468
+ (id)cancelButtonWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d63ee
- (void).cxx_destruct;	// IMP=0x00000000000d62b1
@property(copy, nonatomic) NSArray *alternativeSpeakableMatches; // @synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches;
@property(nonatomic) __weak WFAlert *alert; // @synthesize alert=_alert;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic, getter=isPreferred) _Bool preferred; // @synthesize preferred=_preferred;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 preferred:(_Bool)arg4;	// IMP=0x00000000000d6170

@end
