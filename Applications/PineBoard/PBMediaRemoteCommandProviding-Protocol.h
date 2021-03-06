//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PBMediaRemoteCommandProviding <NSObject>
- (void)endSeekingForwardsWithReason:(NSString *)arg1;
- (void)beginSeekingForwardsWithReason:(NSString *)arg1;
- (void)endSeekingBackwardsWithReason:(NSString *)arg1;
- (void)beginSeekingBackwardsWithReason:(NSString *)arg1;
- (void)skipForwardsWithReason:(NSString *)arg1;
- (void)skipBackwardsWithReason:(NSString *)arg1;
- (void)increasePlaybackRateWithReason:(NSString *)arg1;
- (void)decreasePlaybackRateWithReason:(NSString *)arg1;
- (void)nextTrackWithReason:(NSString *)arg1;
- (void)previousTrackWithReason:(NSString *)arg1;
- (void)stopWithReason:(NSString *)arg1;
- (void)pauseWithReason:(NSString *)arg1;
- (void)playWithReason:(NSString *)arg1;
@end

