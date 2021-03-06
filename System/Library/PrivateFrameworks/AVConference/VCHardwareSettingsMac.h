//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCHardwareSettingsMacProtocol-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsMac <VCHardwareSettingsMacProtocol>
{
    _Bool _hiDefEncoding;	// 32 = 0x20
    _Bool _isGVAEncoderAvailableInitialized;	// 33 = 0x21
    _Bool _isGVAEncoderAvailable;	// 34 = 0x22
    int _machineType;	// 36 = 0x24
    int _cpuFamily;	// 40 = 0x28
    int _numProcessors;	// 44 = 0x2c
    int _mhrtz;	// 48 = 0x30
    int _isG5;	// 52 = 0x34
    int _hardwareScore;	// 56 = 0x38
    NSString *_cpuType;	// 64 = 0x40
    NSString *_machineName;	// 72 = 0x48
    unsigned int _screenWidth;	// 80 = 0x50
    unsigned int _screenHeight;	// 84 = 0x54
    unsigned long long _maxScreenEncodingSizeSupported;	// 88 = 0x58
    NSString *_modelName;	// 96 = 0x60
    unsigned int _modelVersion;	// 104 = 0x68
    unsigned int _modelRevision;	// 108 = 0x6c
    NSData *_boardId;	// 112 = 0x70
}

+ (long long)deviceClass;	// IMP=0x000000000002821b
+ (id)sharedInstance;	// IMP=0x00000000000279e2
- (_Bool)preferPresentationTimestamp;	// IMP=0x0000000000028a7d
- (_Bool)supportsPortraitCameraCapture;	// IMP=0x0000000000028a75
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;	// IMP=0x0000000000028a62
- (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x00000000000288e9
- (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x00000000000288e1
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
- (id)queryBoardId;	// IMP=0x0000000000028746
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
- (float)previewPreferredAspectRatio;	// IMP=0x00000000000283d7
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x00000000000283c5
@property(readonly, nonatomic) unsigned int screenHeight;
@property(readonly, nonatomic) _Bool shouldOverrideGPUMuxing;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x0000000000028341
@property(readonly, nonatomic) unsigned int screenWidth;
- (void)_initializeScreenDimension;	// IMP=0x000000000002830c
@property(readonly, nonatomic) _Bool supportsAVFCapture;
- (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x00000000000282e2
- (unsigned int)maxRemoteParticipants30fps;	// IMP=0x0000000000028223
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;	// IMP=0x00000000000281a2
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
- (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x000000000002808c
- (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x0000000000028081
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) int hardwareScore;
@property(readonly, nonatomic) NSString *machineName;
@property(readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property(readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property(readonly, nonatomic) _Bool isMacmini;
- (_Bool)isMacBookAir;	// IMP=0x0000000000027ae9
- (_Bool)isIMacPro;	// IMP=0x0000000000027ad0
@property(readonly, nonatomic) _Bool isIMac;
@property(readonly, nonatomic) _Bool isMacPro;
@property(readonly, nonatomic) _Bool isMacBookWVGA;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
@property(readonly, nonatomic) _Bool supports1080pDecoding;
@property(readonly, nonatomic) _Bool supports1080pEncoding;
@property(readonly, nonatomic) _Bool canDoHiDefDecoding;
@property(readonly, nonatomic) _Bool canDoHEVC;
@property(readonly, nonatomic) _Bool canDoHiDefEncoding;
- (_Bool)isGVAEncoderAvailable;	// IMP=0x00000000000272c4
- (_Bool)_isModel:(id)arg1;	// IMP=0x000000000002726d
- (_Bool)_isMachineNewerThanSandybridge:(int)arg1;	// IMP=0x0000000000027205
- (id)_getCPUTypeStringForMachineType:(int)arg1;	// IMP=0x000000000002717b
- (int)_getCPUFamilyType;	// IMP=0x0000000000026fd3
- (void)setupMachineName;	// IMP=0x0000000000026d84
- (void)dealloc;	// IMP=0x0000000000026cfb
- (id)init;	// IMP=0x0000000000026a75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

