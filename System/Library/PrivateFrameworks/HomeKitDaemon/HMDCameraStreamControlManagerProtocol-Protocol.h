//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraStreamMetrics, HMDDevice, NSDictionary, NSError, NSNumber;

@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly, copy) NSNumber *slotIdentifier;
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
- (void)setUpRemoteConnectionWithDevice:(HMDDevice *)arg1;
- (void)updateAudioVolume:(NSNumber *)arg1 callback:(void (^)(_Bool))arg2;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)stopStreamWithError:(NSError *)arg1;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)startStreamWithRemoteSettings:(NSDictionary *)arg1;
- (void)negotiateStream;
@end

