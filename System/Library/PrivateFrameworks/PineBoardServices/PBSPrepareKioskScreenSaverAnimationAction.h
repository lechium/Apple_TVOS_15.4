//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@interface PBSPrepareKioskScreenSaverAnimationAction : BSAction
{
}

- (void)sendResponse:(id)arg1;	// IMP=0x000000000008fad0
@property(readonly, nonatomic) long long animationDirection;
- (id)initWithAnimationDirection:(long long)arg1 timeout:(double)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000008f6a0
- (id)initWithAnimationDirection:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008f610

@end

