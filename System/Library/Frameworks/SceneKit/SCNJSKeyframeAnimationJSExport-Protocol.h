//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@protocol SCNJSKeyframeAnimationJSExport <JSExport>
+ (id)animationWithKeyPath:(NSString *)arg1;
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double beginTime;
@property(copy) NSArray *biasValues;
@property(copy) NSArray *continuityValues;
@property(copy) NSArray *tensionValues;
@property(copy) NSString *calculationMode;
@property(copy) NSArray *timingFunctions;
@property(copy) NSArray *keyTimes;
@property double duration;
@property struct CGPath *path;
@property(copy) NSArray *values;
@property(getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property(retain) CAMediaTimingFunction *timingFunction;
@property(getter=isCumulative) _Bool cumulative;
@property(getter=isAdditive) _Bool additive;
@property(copy) NSString *keyPath;
@property(retain) id byValue;
@property(retain) id toValue;
@property(retain) id fromValue;
@end

