//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/AVConferencePreviewClientDelegate-Protocol.h>

@class NSData, NSError, NSString, VideoAttributes;
@protocol TUVideoDeviceControllerProvider;

@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didGetSnapshot:(NSData *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraBlurEnabledDidChange:(_Bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraZoomAvailabilityDidChange:(_Bool)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveErrorFromCameraUniqueID:(NSString *)arg2 error:(NSError *)arg3;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didChangeLocalVideoAttributes:(VideoAttributes *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraDidBecomeAvailableForUniqueID:(NSString *)arg2;
- (void)captureDevicesChangedForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStopPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didPausePreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStartPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
@end

