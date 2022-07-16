//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVCaptureMultiCamSession
{
    float _hardwareCost;	// 16 = 0x10
    float _systemPressureCost;	// 20 = 0x14
}

+ (_Bool)isMultiCamSupported;	// IMP=0x0000000000045d7e
- (id)_physicalDevicePowerInfoSet;	// IMP=0x000000000004ac48
- (void)_updateSystemPressureCost;	// IMP=0x000000000004995e
- (float)_nandCostWithFormatWidth:(int)arg1 height:(int)arg2 maxFrameRate:(float)arg3;	// IMP=0x000000000004990e
- (float)_computeNANDCostForOutputs;	// IMP=0x00000000000497c3
- (float)_computeEncoderCostForOutputs;	// IMP=0x00000000000492b1
- (unsigned int)_computeMemoryUsageForOutputs;	// IMP=0x00000000000484d2
- (void)_updateHardwareCost;	// IMP=0x00000000000473ff
- (void)_updateCosts;	// IMP=0x00000000000473d1
- (id)_livePortSetsByDeviceInput;	// IMP=0x0000000000047090
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000047022
- (void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2;	// IMP=0x0000000000046ef5
- (_Bool)isOverCost:(id *)arg1;	// IMP=0x0000000000046ea9
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000046cd8
- (_Bool)_addConnection:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000046ae9
- (_Bool)_canAddConnection:(id)arg1 failureReason:(id *)arg2;	// IMP=0x0000000000046549
- (_Bool)_canAddOutput:(id)arg1 failureReason:(id *)arg2;	// IMP=0x00000000000464c1
- (_Bool)_canAddInput:(id)arg1 failureReason:(id *)arg2;	// IMP=0x0000000000045fd1
- (_Bool)canSetSessionPreset:(id)arg1;	// IMP=0x0000000000045fb2
- (void)startRunning;	// IMP=0x0000000000045db6
@property(readonly, nonatomic) float systemPressureCost;
@property(readonly, nonatomic) float hardwareCost;
- (void)dealloc;	// IMP=0x0000000000045d4f
- (id)init;	// IMP=0x0000000000045cf9

@end
