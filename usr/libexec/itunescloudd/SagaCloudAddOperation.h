//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCloudAddOperation
{
}

- (void)main;	// IMP=0x00400000000c5ca5
- (_Bool)isPersistent;	// IMP=0x00100000000c5c9d
- (unsigned int)currentDatabaseRevision;	// IMP=0x00100000000c5c52
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00100000000c5c4c
- (void)processAddedItems:(id)arg1;	// IMP=0x00100000000c5c46
- (void)logCloudAddRequestDescription;	// IMP=0x00100000000c5c40
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000000c5c38

@end

