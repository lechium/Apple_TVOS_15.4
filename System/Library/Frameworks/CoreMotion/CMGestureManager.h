//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMGestureManager : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (void)setGestureServiceEnabled:(_Bool)arg1;	// IMP=0x00000000001433f1
+ (_Bool)isGestureServiceAvailable;	// IMP=0x00000000001433d4
+ (_Bool)isGestureServiceEnabled;	// IMP=0x00000000001433ae
@property(copy) CDUnknownBlockType gestureHandler;
- (void)dealloc;	// IMP=0x0000000000143105
- (id)initWithPriority:(int)arg1;	// IMP=0x000000000014309f
- (id)init;	// IMP=0x000000000014308b

@end

