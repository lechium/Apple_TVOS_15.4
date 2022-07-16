//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, NSString;

@interface CSAudioRecordDeviceIndicator : NSObject
{
    _Bool _shouldUseRemoteRecorder;	// 8 = 0x8
    CSAudioRecordContext *_recordContext;	// 16 = 0x10
    NSString *_deviceId;	// 24 = 0x18
    unsigned long long _streamHandleId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a7379
@property(readonly, nonatomic) unsigned long long streamHandleId; // @synthesize streamHandleId=_streamHandleId;
@property(readonly, nonatomic) _Bool shouldUseRemoteRecorder; // @synthesize shouldUseRemoteRecorder=_shouldUseRemoteRecorder;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
- (void)updateDeviceId:(id)arg1;	// IMP=0x00000000000a7341
- (void)updateWithLatestRecordContext:(id)arg1;	// IMP=0x00000000000a71a3
- (id)initWithRecordContext:(id)arg1 deviceId:(id)arg2 shouldUseRemoteRecorder:(_Bool)arg3 streamHandleId:(unsigned long long)arg4;	// IMP=0x00000000000a70da

@end

