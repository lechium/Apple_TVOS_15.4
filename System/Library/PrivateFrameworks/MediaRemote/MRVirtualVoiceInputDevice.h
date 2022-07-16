//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRVirtualVoiceInputDeviceDescriptor, NSData;

@interface MRVirtualVoiceInputDevice : NSObject
{
    unsigned int _deviceID;	// 8 = 0x8
    unsigned int _recordingState;	// 12 = 0xc
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010fe29
@property(nonatomic) unsigned int recordingState; // @synthesize recordingState=_recordingState;
@property(copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned int deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSData *data;
- (id)description;	// IMP=0x000000000010fcc6
- (id)initWithData:(id)arg1;	// IMP=0x000000000010fbd6
- (id)initWithDeviceID:(unsigned int)arg1;	// IMP=0x000000000010fb94

@end

