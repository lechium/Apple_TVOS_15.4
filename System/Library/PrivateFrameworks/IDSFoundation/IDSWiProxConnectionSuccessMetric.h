//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSWiProxConnectionSuccessMetric : NSObject <CUTCoreAnalyticsMetric>
{
    unsigned long long _duration;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (id)initWithDuration:(unsigned long long)arg1;	// IMP=0x000000000009e4b5
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

