//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordDeviceInfo, NSDictionary, NSString;
@protocol AFBluetoothDevice;

@interface CSSiriRecordingInfo : NSObject
{
    NSString *_headsetAddress;	// 8 = 0x8
    _Bool _isDictation;	// 16 = 0x10
    _Bool _isFingerprintOnly;	// 17 = 0x11
    _Bool _isSecureOfflineOnly;	// 18 = 0x12
    _Bool _isDucking;	// 19 = 0x13
    _Bool _isEndAlertInfo;	// 20 = 0x14
    _Bool _triggeredTwoShotBorealis;	// 21 = 0x15
    int _mhSource;	// 24 = 0x18
    unsigned int _audioSessionID;	// 28 = 0x1c
    long long _audioAlertStyle;	// 32 = 0x20
    NSString *_codec;	// 40 = 0x28
    NSString *_source;	// 48 = 0x30
    NSString *_destination;	// 56 = 0x38
    NSString *_route;	// 64 = 0x40
    CSAudioRecordDeviceInfo *_deviceInfo;	// 72 = 0x48
    NSString *_deviceIdentifier;	// 80 = 0x50
    NSString *_modelName;	// 88 = 0x58
    NSString *_dspStatus;	// 96 = 0x60
    NSString *_headsetName;	// 104 = 0x68
    NSDictionary *_voiceTriggerEventInfo;	// 112 = 0x70
    double _activationAlertStartTimestamp;	// 120 = 0x78
    double _startRecordingTimestamp;	// 128 = 0x80
    double _firstBufferTimestamp;	// 136 = 0x88
    unsigned long long _firstBufferHostTime;	// 144 = 0x90
    unsigned long long _estimatedSpeechEndHostTime;	// 152 = 0x98
    unsigned long long _audioSessionSetActiveEndHostTime;	// 160 = 0xa0
    NSString *_endpointerModelVersion;	// 168 = 0xa8
    id <AFBluetoothDevice> _bluetoothDevice;	// 176 = 0xb0
    long long _speechEvent;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000098338
@property(readonly, nonatomic) long long speechEvent; // @synthesize speechEvent=_speechEvent;
@property(readonly, nonatomic) id <AFBluetoothDevice> bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
@property(readonly, nonatomic) NSString *endpointerModelVersion; // @synthesize endpointerModelVersion=_endpointerModelVersion;
@property(nonatomic) unsigned long long audioSessionSetActiveEndHostTime; // @synthesize audioSessionSetActiveEndHostTime=_audioSessionSetActiveEndHostTime;
@property(nonatomic) _Bool triggeredTwoShotBorealis; // @synthesize triggeredTwoShotBorealis=_triggeredTwoShotBorealis;
@property(nonatomic) _Bool isEndAlertInfo; // @synthesize isEndAlertInfo=_isEndAlertInfo;
@property(readonly, nonatomic) _Bool isDucking; // @synthesize isDucking=_isDucking;
@property(readonly, nonatomic) unsigned long long estimatedSpeechEndHostTime; // @synthesize estimatedSpeechEndHostTime=_estimatedSpeechEndHostTime;
@property(readonly, nonatomic) unsigned long long firstBufferHostTime; // @synthesize firstBufferHostTime=_firstBufferHostTime;
@property(readonly, nonatomic) double firstBufferTimestamp; // @synthesize firstBufferTimestamp=_firstBufferTimestamp;
@property(readonly, nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(readonly, nonatomic) double startRecordingTimestamp; // @synthesize startRecordingTimestamp=_startRecordingTimestamp;
@property(readonly, nonatomic) double activationAlertStartTimestamp; // @synthesize activationAlertStartTimestamp=_activationAlertStartTimestamp;
@property(readonly, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(readonly, nonatomic) NSString *headsetName; // @synthesize headsetName=_headsetName;
@property(readonly, nonatomic) NSString *dspStatus; // @synthesize dspStatus=_dspStatus;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) CSAudioRecordDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) NSString *route; // @synthesize route=_route;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) int mhSource; // @synthesize mhSource=_mhSource;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(readonly, nonatomic) long long audioAlertStyle; // @synthesize audioAlertStyle=_audioAlertStyle;
@property(readonly, nonatomic) _Bool isSecureOfflineOnly; // @synthesize isSecureOfflineOnly=_isSecureOfflineOnly;
@property(readonly, nonatomic) _Bool isFingerprintOnly; // @synthesize isFingerprintOnly=_isFingerprintOnly;
@property(readonly, nonatomic) _Bool isDictation; // @synthesize isDictation=_isDictation;
@property(readonly, nonatomic) _Bool codecIsNarrowband;
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) NSString *vendorId;
@property(readonly, nonatomic) NSString *headsetAddress;
- (id)_bluetoothDeviceInfo;	// IMP=0x0000000000098002
- (void)_fetchBTInfo;	// IMP=0x0000000000097ee7
@property(readonly, nonatomic) _Bool isBluetooth;
- (id)initWithDictation:(_Bool)arg1 codec:(id)arg2;	// IMP=0x0000000000097e1b
- (id)initWithDictation:(_Bool)arg1 fingerprintOnly:(_Bool)arg2 secureOfflineOnly:(_Bool)arg3 audioAlertStyle:(long long)arg4 recordSettings:(id)arg5 endpointerModelVersion:(id)arg6 recordRoute:(id)arg7 recordDeviceInfo:(id)arg8 playbackRoute:(id)arg9 audioDeviceID:(unsigned int)arg10 audioSessionID:(unsigned int)arg11 voiceTriggerEventInfo:(id)arg12 activationAlertStartTimestamp:(double)arg13 startRecordingTimestamp:(double)arg14 firstBufferTimestamp:(double)arg15 firstBufferHostTime:(unsigned long long)arg16 estimatedSpeechEndHostTime:(unsigned long long)arg17 deviceIdentifier:(id)arg18 includeBTInfo:(_Bool)arg19 speechEvent:(long long)arg20;	// IMP=0x0000000000096e5b

@end

