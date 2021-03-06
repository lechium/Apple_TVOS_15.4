//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDCameraRecordingClipNotificationEvent <HMDAWDLogEvent>
{
    unsigned long long _recordingEventTriggers;	// 32 = 0x20
}

@property(readonly) unsigned long long recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
- (id)attributeDescriptions;	// IMP=0x00000000004e3950
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 recordingEventTriggers:(unsigned long long)arg4;	// IMP=0x00000000004e390c
- (id)metricForAWD;	// IMP=0x0000000000791d14
- (unsigned int)AWDMessageType;	// IMP=0x0000000000791d09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

