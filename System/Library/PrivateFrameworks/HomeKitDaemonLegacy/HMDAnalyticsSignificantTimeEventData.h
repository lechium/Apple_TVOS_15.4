//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsSignificantTimeEventData : HMFObject
{
    _Bool _offsetPresent;	// 8 = 0x8
    NSString *_significantEvent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005a1f42
@property _Bool offsetPresent; // @synthesize offsetPresent=_offsetPresent;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;

@end

