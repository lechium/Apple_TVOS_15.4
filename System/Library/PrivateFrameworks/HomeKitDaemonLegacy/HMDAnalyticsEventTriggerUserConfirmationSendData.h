//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsEventTriggerUserConfirmationSendData : HMFObject
{
    int _resultErrorCode;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005a103a
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

