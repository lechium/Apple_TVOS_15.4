//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCMMMomentsInvitationsDataSourceState;

@interface PXCMMMomentsInvitationsDataSource
{
    PXCMMMomentsInvitationsDataSourceState *__state;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005c2f55
@property(readonly, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state; // @synthesize _state=__state;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x00000000005c2d35
- (id)invitationForObjectID:(id)arg1;	// IMP=0x00000000005c2af0
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000005c2956
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000005c2944
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000005c2749
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000005c26db
- (long long)numberOfSections;	// IMP=0x00000000005c26d0
- (id)initWithState:(id)arg1;	// IMP=0x00000000005c2662

@end

