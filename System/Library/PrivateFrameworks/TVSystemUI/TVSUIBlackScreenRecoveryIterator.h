//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TVSUIBlackScreenRecoveryViewController;

@interface TVSUIBlackScreenRecoveryIterator : NSObject
{
    double _interval;	// 8 = 0x8
    TVSUIBlackScreenRecoveryViewController *_currentController;	// 16 = 0x10
    NSArray *_modesToTry;	// 24 = 0x18
    unsigned long long _currentModeIndex;	// 32 = 0x20
    CDUnknownBlockType _iterationBlock;	// 40 = 0x28
}

+ (id)scheduleIterationForDisplayModes:(id)arg1 iterationInterval:(double)arg2 iterationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c879
- (void).cxx_destruct;	// IMP=0x000000000002cc39
@property(copy, nonatomic) CDUnknownBlockType iterationBlock; // @synthesize iterationBlock=_iterationBlock;
@property(nonatomic) unsigned long long currentModeIndex; // @synthesize currentModeIndex=_currentModeIndex;
@property(retain, nonatomic) NSArray *modesToTry; // @synthesize modesToTry=_modesToTry;
@property(retain, nonatomic) TVSUIBlackScreenRecoveryViewController *currentController; // @synthesize currentController=_currentController;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void)_switchToNextMode;	// IMP=0x000000000002c9fb
- (void)stop;	// IMP=0x000000000002c969

@end

