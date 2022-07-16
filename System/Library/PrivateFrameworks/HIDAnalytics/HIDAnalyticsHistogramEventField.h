//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HIDAnalytics/HIDAnalyticsEventFieldProtocol-Protocol.h>

@class NSString;

@interface HIDAnalyticsHistogramEventField : NSObject <HIDAnalyticsEventFieldProtocol>
{
    unsigned char _segmentCount;	// 8 = 0x8
    struct _HIDAnalyticsHistogramSegment *_segments;	// 16 = 0x10
    NSString *_fieldName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003d1e
@property(readonly) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property __weak id value;
- (void)setIntegerValue:(unsigned long long)arg1;	// IMP=0x0000000000003b76
- (void)createBuckets:(struct _HIDAnalyticsHistogramSegmentConfig *)arg1 count:(long long)arg2;	// IMP=0x00000000000039e2
- (void)dealloc;	// IMP=0x0000000000003738
- (id)initWithAttributes:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;	// IMP=0x0000000000003696

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

