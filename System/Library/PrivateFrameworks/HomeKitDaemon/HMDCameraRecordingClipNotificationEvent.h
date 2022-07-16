//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDCameraRecordingClipNotificationEvent <HMDAWDLogEvent>
{
    unsigned long long _recordingEventTriggers;	// 32 = 0x20
}

@property(readonly) unsigned long long recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
- (id)attributeDescriptions;	// IMP=0x000000000053f1f4
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 recordingEventTriggers:(unsigned long long)arg4;	// IMP=0x000000000053f1b0
- (id)metricForAWD;	// IMP=0x000000000083b028
- (unsigned int)AWDMessageType;	// IMP=0x000000000083b01d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
