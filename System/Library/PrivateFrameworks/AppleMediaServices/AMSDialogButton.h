//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDialogButton : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

+ (id)buttonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010a8b5
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010a836
- (void).cxx_destruct;	// IMP=0x000000000010a912
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010a78b

@end
