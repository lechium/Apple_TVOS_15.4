//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject
{
    id <TPSAnalyticsDataProviderDataSource> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e2ff
@property(nonatomic) __weak id <TPSAnalyticsDataProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)arg1;	// IMP=0x000000000001e27a
- (id)contextForIdentifier:(id)arg1;	// IMP=0x000000000001e210
- (id)bundleIDForIdentifier:(id)arg1;	// IMP=0x000000000001e1a6
- (id)correlationIDForIdentifier:(id)arg1;	// IMP=0x000000000001e13c
- (id)deliveryInfoVersion;	// IMP=0x000000000001e0f9
- (_Bool)isNotificationModelControl;	// IMP=0x000000000001e0c2
- (id)experimentID;	// IMP=0x000000000001e07f
- (id)experimentCampID;	// IMP=0x000000000001e03c
- (id)displayTypeForIdentifier:(id)arg1;	// IMP=0x000000000001dfd2
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000001df6e

@end
