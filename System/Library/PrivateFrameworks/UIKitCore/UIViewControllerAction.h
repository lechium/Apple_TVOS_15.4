//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject
{
    NSString *_name;	// 8 = 0x8
    int _transition;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    double _curlUpRevealedHeight;	// 32 = 0x20
    UIViewController *_viewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004b26c3
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;	// IMP=0x00000000004b2625

@end

