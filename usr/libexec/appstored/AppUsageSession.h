//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSDate, NSString;

@interface AppUsageSession
{
}

+ (Class)databaseEntityClass;	// IMP=0x0020000000065606
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00200000000655d7
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *lastRefreshDate;
@property(readonly, nonatomic) NSString *sessionReporterKey;
@property(readonly, nonatomic) NSString *bundleID;
- (id)description;	// IMP=0x0010000000065365
- (MISSING_TYPE *)initWithBundleID: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000065254
- (id)init;	// IMP=0x0010000000065225

@end
