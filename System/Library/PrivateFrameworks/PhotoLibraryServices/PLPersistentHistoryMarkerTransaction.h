//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLPersistentHistoryMarkerOverrides-Protocol.h>

@class NSPersistentHistoryTransaction, NSString;

@interface PLPersistentHistoryMarkerTransaction <PLPersistentHistoryMarkerOverrides>
{
    NSPersistentHistoryTransaction *_transaction;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004d82d4
- (id)overrride_shortDescription;	// IMP=0x00000000004d82a4
@property(readonly, copy) NSString *description;
- (id)overrride_changeRequestForFetching;	// IMP=0x00000000004d824d
- (id)initWithTransaction:(id)arg1;	// IMP=0x00000000004d81cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
