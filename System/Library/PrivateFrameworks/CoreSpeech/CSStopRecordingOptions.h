//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSStopRecordingOptions : NSObject
{
    unsigned long long _stopRecordingReason;	// 8 = 0x8
    unsigned long long _expectedStopHostTime;	// 16 = 0x10
}

@property(nonatomic) unsigned long long expectedStopHostTime; // @synthesize expectedStopHostTime=_expectedStopHostTime;
@property(nonatomic) unsigned long long stopRecordingReason; // @synthesize stopRecordingReason=_stopRecordingReason;
- (id)description;	// IMP=0x0000000000028588

@end

