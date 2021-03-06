//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ApplicationProxy, NSArray, NSDate, NSMutableDictionary, NSString;

@interface MigrateToManagedTask
{
    NSString *_logKey;	// 8 = 0x8
    NSMutableDictionary *_expiring;	// 16 = 0x10
    ApplicationProxy *_soonestExpiring;	// 24 = 0x18
    NSDate *_soonestExpiringDate;	// 32 = 0x20
    NSMutableDictionary *_revoked;	// 40 = 0x28
    NSArray *_bundleIDs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000a4767
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)main;	// IMP=0x00100000000a4372
- (_Bool)attemptVPPMigrationForApp:(id)arg1;	// IMP=0x00100000000a4008
- (id)init;	// IMP=0x00100000000a3f6d

@end

