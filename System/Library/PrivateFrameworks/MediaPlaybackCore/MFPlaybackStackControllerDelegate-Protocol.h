//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;
@protocol MFQueuePlayerItem, MFRouteChangeMetadata, MFTimeStamp, MFUserAction;

@protocol MFPlaybackStackControllerDelegate
- (void)errorResolutionDidEndForItem:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2 resolution:(long long)arg3;
- (void)errorResolutionDidStartForItem:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2;
- (void)didReportSignpostWithType:(long long)arg1;
- (void)userSeekCompletedForItem:(id <MFQueuePlayerItem>)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)playbackIsBlockedOnNonPlayableItem:(id <MFQueuePlayerItem>)arg1;
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id <MFTimeStamp>)arg1;
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id <MFQueuePlayerItem>)arg1 timeAtDeath:(double)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)userActionDidEnd:(id <MFUserAction>)arg1 error:(NSError *)arg2;
- (void)userActionDidBegin:(id <MFUserAction>)arg1;
- (void)screenRecordingDidChange:(_Bool)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)routeDidChange:(_Bool)arg1 metadata:(id <MFRouteChangeMetadata>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)interruptionDidFinishForInterruptor:(NSString *)arg1 shouldResume:(_Bool)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)interruptionDidBeginWithInterruptor:(NSString *)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)didReachEndOfQueueWithReason:(NSString *)arg1;
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(NSString *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)tracksDidChangeForItem:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id <MFQueuePlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackIsLikelyToKeepUp:(_Bool)arg1 forItem:(id <MFQueuePlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)firstFrameWillRenderForItem:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)playbackRateDidChangeNotifiedForItem:(id <MFQueuePlayerItem>)arg1 newRate:(float)arg2 reason:(NSString *)arg3 participantIdentifier:(NSString *)arg4 timeStamp:(id <MFTimeStamp>)arg5;
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id <MFQueuePlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id <MFQueuePlayerItem>)arg2 reason:(long long)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)itemDidPlayToEnd:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)playbackWaitingToPlayForItem:(id <MFQueuePlayerItem>)arg1 reason:(NSString *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackDidStopForItem:(id <MFQueuePlayerItem>)arg1 source:(NSString *)arg2 reason:(NSString *)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)playbackDidStartForItem:(id <MFQueuePlayerItem>)arg1 rate:(float)arg2 fromStalling:(_Bool)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)itemDidResignCurrent:(id <MFQueuePlayerItem>)arg1 source:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidBecomeCurrent:(id <MFQueuePlayerItem>)arg1 source:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidFailToPlayToEnd:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidFailToLoad:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemIsReadyToPlay:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)currentItemWillChangeFromItem:(id <MFQueuePlayerItem>)arg1 toItem:(id <MFQueuePlayerItem>)arg2 source:(long long)arg3 timeStamp:(id <MFTimeStamp>)arg4;
@end

