//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCVideoRule;

@protocol VCVideoCaptureClient
- (void)cameraAvailabilityDidChange:(_Bool)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (VCVideoRule *)clientCaptureRule;
- (void)avConferencePreviewError:(NSString *)arg1;

@optional
- (void)captureSourcePortraitBlurEnabledDidChange:(_Bool)arg1;
- (void)captureSourceCenterStageEnabledDidChange:(_Bool)arg1;
- (void)captureSourcePositionDidChange:(_Bool)arg1;
- (void)avConferenceScreenCaptureError:(NSString *)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
@end

