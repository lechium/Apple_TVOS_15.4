//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBAsynchronousShutdownTask : NSObject
{
    NSString *_name;	// 8 = 0x8
    double _interval;	// 16 = 0x10
}

+ (void)startTaskWithName:(id)arg1 timeout:(double)arg2 workItem:(CDUnknownBlockType)arg3;	// IMP=0x000000000005578e
+ (void)waitForTasks;	// IMP=0x0000000000055432
- (void).cxx_destruct;	// IMP=0x0000000000055d19

@end

