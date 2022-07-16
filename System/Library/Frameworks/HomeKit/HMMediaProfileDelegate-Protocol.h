//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMMediaObjectDelegate-Protocol.h>

@class HMAccessorySettings, HMMediaProfile, HMMediaSession;

@protocol HMMediaProfileDelegate <HMMediaObjectDelegate>

@optional
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
@end

