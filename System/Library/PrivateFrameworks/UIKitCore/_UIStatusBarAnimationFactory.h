//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarAnimationFactory : NSObject
{
}

+ (id)pulseAnimationWithDuration:(double)arg1 scale:(double)arg2;	// IMP=0x0000000000c8f2b3
+ (id)fadeAnimationWithDuration:(double)arg1 scale:(double)arg2 offset:(struct UIOffset)arg3;	// IMP=0x0000000000c8eb32
+ (id)fadeAnimationWithDuration:(double)arg1 scale:(double)arg2;	// IMP=0x0000000000c8eb1a
+ (id)fadeAnimationWithDuration:(double)arg1;	// IMP=0x0000000000c8eb00
+ (id)noAnimation;	// IMP=0x0000000000c8ea5d

@end
