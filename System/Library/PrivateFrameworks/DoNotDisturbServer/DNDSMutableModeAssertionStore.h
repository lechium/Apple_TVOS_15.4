//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DNDSMutableModeAssertionStore
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045a47
@property(copy, nonatomic) NSArray *invalidationRequests; // @dynamic invalidationRequests;
@property(copy, nonatomic) NSArray *invalidations; // @dynamic invalidations;
@property(copy, nonatomic) NSArray *assertions; // @dynamic assertions;
- (void)downgradeAssertionsIfNeededForSyncToPairedDevice:(id)arg1 dataSource:(id)arg2 syncManager:(id)arg3;	// IMP=0x0000000000046adf
- (void)updateConfigurationModificationDatesWithDataSource:(id)arg1 syncManager:(id)arg2;	// IMP=0x000000000004690e
- (void)resolveSourcesForSyncFromPairedDevice:(id)arg1;	// IMP=0x0000000000046510
- (void)unresolveSourcesForSyncToPairedDevice:(id)arg1;	// IMP=0x0000000000046115
- (void)filterForSyncToPairedDevice:(id)arg1 clientDetailsProvider:(id)arg2;	// IMP=0x0000000000045a75
- (void)sanitizeDatesForThreshold:(id)arg1;	// IMP=0x0000000000091b9e

@end

