//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSVTUIRemoteRecordClientDelegate;

@interface CSVTUIRemoteRecordClient : NSObject
{
    id <CSVTUIRemoteRecordClientDelegate> _delegate;	// 8 = 0x8
    unsigned long long _audioStreamHandleId;	// 16 = 0x10
    NSString *_deviceId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015103
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) unsigned long long audioStreamHandleId; // @synthesize audioStreamHandleId=_audioStreamHandleId;
@property(nonatomic) __weak id <CSVTUIRemoteRecordClientDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasPendingTwoShotBeep;	// IMP=0x00000000000150c0
- (id)voiceTriggerEventInfo;	// IMP=0x00000000000150b8
- (_Bool)isRecording;	// IMP=0x00000000000150b0
- (_Bool)didPlayEndpointBeep;	// IMP=0x00000000000150a8
- (_Bool)stopRecording:(id *)arg1;	// IMP=0x00000000000150a0
- (_Bool)startRecordingWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015098
- (_Bool)isConnected;	// IMP=0x0000000000015090
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000015088
- (id)initWithDeviceId:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x000000000001507a

@end

