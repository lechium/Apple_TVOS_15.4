//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WeatherDeviceLookup;

@interface WeatherCloudMigrator : NSObject
{
    WeatherDeviceLookup *_deviceLookup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ea78
@property(readonly, nonatomic) WeatherDeviceLookup *deviceLookup; // @synthesize deviceLookup=_deviceLookup;
- (void)eraseStoreIfNeeded:(id)arg1;	// IMP=0x000000000000e70d
- (void)migrateStore:(id)arg1 toStore:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e20f
- (_Bool)storeRequiresMigration:(id)arg1;	// IMP=0x000000000000e1be
- (id)init;	// IMP=0x000000000000e168

@end

