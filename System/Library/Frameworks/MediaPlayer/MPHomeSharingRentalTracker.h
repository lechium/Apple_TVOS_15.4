//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPHomeSharingRentalTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;	// 8 = 0x8
    NSMutableDictionary *_rentals;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000001c1cbf
- (void).cxx_destruct;	// IMP=0x00000000001c174c
- (void)_saveRentals;	// IMP=0x00000000001c162c
- (void)removeAllRentalsForDatabaseID:(id)arg1;	// IMP=0x00000000001c12d1
- (void)removeRentalWithItemID:(unsigned long long)arg1;	// IMP=0x00000000001c0d0d
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;	// IMP=0x00000000001c0b6a
- (id)_init;	// IMP=0x00000000001c09a5

@end

