//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDPhotoLibraryImportingFaceCropsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    long long _numberOfImportedFaceCrops;	// 8 = 0x8
}

@property(readonly) long long numberOfImportedFaceCrops; // @synthesize numberOfImportedFaceCrops=_numberOfImportedFaceCrops;
- (id)initWithNumberOfImportedFaceCrops:(long long)arg1;	// IMP=0x00000000009550a7
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

