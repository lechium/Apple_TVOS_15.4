//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FLAlertControllerAction : NSObject
{
    NSString *_title;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007082
- (void).cxx_destruct;	// IMP=0x000000000000716b
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

