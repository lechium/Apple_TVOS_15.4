//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject
{
    UIInputViewSet *oldSet;	// 8 = 0x8
    UIInputViewSet *newSet;	// 16 = 0x10
}

- (void)postNotificationsForTransitionEnd;	// IMP=0x00000000009bac99
- (void)postNotificationsForTransitionStart;	// IMP=0x00000000009bac93
- (id)newSet;	// IMP=0x00000000009bac89
@property(readonly, nonatomic) UIInputViewSet *oldSet;

@end

