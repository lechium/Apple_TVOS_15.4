//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@interface AppMetricsEvent
{
    NSDate *_timestamp;	// 8 = 0x8
}

+ (Class)databaseEntityClass;	// IMP=0x002000000004403a
+ (id)logTypeForEventType:(unsigned char)arg1;	// IMP=0x0010000000043bdc
+ (long long)appMetricsEventTypeForAppEventType:(unsigned char)arg1;	// IMP=0x0010000000043bbf
- (void).cxx_destruct;	// IMP=0x002000000004405c
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000043f4e
- (void)setEngagementData:(id)arg1;	// IMP=0x0010000000043f3c
@property(readonly) NSDictionary *engagementData;
@property(retain) NSDictionary *data;
@property(nonatomic, getter=isPosted) _Bool posted;
@property(copy, nonatomic) NSDictionary *payload;
@property(nonatomic) long long metricsType;
@property(nonatomic) unsigned char eventType;
@property(nonatomic) unsigned char eventSubtype;
@property(copy, nonatomic) NSString *bundleID;
- (id)init;	// IMP=0x0010000000043b90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

