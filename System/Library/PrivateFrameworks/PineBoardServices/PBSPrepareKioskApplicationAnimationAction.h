//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@class NSString;

@interface PBSPrepareKioskApplicationAnimationAction : BSAction
{
}

- (void)sendResponse:(id)arg1;	// IMP=0x0000000000034c40
@property(readonly, nonatomic) long long animationDirection;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
- (id)initWithAnimationDirection:(long long)arg1 applicationBundleIdentifier:(id)arg2 timeout:(double)arg3 responseQueue:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000344b0
- (id)initWithAnimationDirection:(long long)arg1 applicationBundleIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000343f0

@end
