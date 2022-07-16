//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCameraCalibrationData;

@interface AVCaptureSynchronizedCameraCalibrationData
{
    AVCameraCalibrationData *_cameraCalibrationData;	// 16 = 0x10
    _Bool _cameraCalibrationDataWasDropped;	// 24 = 0x18
    long long _droppedReason;	// 32 = 0x20
}

@property(readonly) long long droppedReason;
@property(readonly) _Bool cameraCalibrationDataWasDropped;
@property(readonly) AVCameraCalibrationData *cameraCalibrationData;
- (void)dealloc;	// IMP=0x0000000000072be2
- (id)_initWithCameraCalibrationData:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 cameraCalibrationDataWasDropped:(_Bool)arg3 droppedReason:(long long)arg4;	// IMP=0x0000000000072b56

@end

