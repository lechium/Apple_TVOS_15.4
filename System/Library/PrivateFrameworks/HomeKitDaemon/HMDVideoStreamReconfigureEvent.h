//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject
{
    unsigned long long _eventType;	// 8 = 0x8
    NSDate *_timestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000053ea53
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;	// IMP=0x000000000053e936
- (unsigned long long)hash;	// IMP=0x000000000053e8f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000053e81f
- (long long)compare:(id)arg1;	// IMP=0x000000000053e78e
- (id)initWithEventType:(unsigned long long)arg1;	// IMP=0x000000000053e70f

@end

