//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct _HIDAnalyticsHistogramBucket;

struct _HIDAnalyticsHistogramSegment {
    unsigned char _field1;
    struct _HIDAnalyticsHistogramBucket *_field2;
};

struct _HIDAnalyticsHistogramSegmentConfig {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned long long _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

