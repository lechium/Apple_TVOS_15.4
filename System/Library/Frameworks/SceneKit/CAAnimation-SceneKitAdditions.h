//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimation (SceneKitAdditions)
+ (id)animationWithSCNAnimation:(id)arg1;	// IMP=0x00000000001bdca8
@property(copy, nonatomic) NSArray *animationEvents;
- (void)setCommitsOnCompletion:(_Bool)arg1;	// IMP=0x00000000001bdc02
- (_Bool)commitsOnCompletion;	// IMP=0x00000000001bdbd0
@property double fadeOutDuration;
@property double fadeInDuration;
@property _Bool usesSceneTimeBase;
@end

