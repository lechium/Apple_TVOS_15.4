//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CAProcessDevicePair : NSObject
{
    int _processID;	// 8 = 0x8
    NSString *_deviceUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029ac4e
@property(readonly) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(readonly) int processID; // @synthesize processID=_processID;
- (id)initWithProcessID:(int)arg1 andDeviceUID:(id)arg2;	// IMP=0x000000000029aba5

@end

