//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface PXFileBackedAssetActionManager
{
    NSMutableDictionary *_performerClassByType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000039ad87
@property(readonly, nonatomic) NSMutableDictionary *performerClassByType; // @synthesize performerClassByType=_performerClassByType;
- (id)_selectionSnapshotForPerformerClass:(Class)arg1;	// IMP=0x000000000039ac78
- (id)actionPerformerForActionType:(id)arg1;	// IMP=0x000000000039ab23
- (_Bool)canPerformActionType:(id)arg1;	// IMP=0x000000000039aa80
- (_Bool)supportsActionType:(id)arg1;	// IMP=0x000000000039aa07
- (id)initWithSelectionManager:(id)arg1;	// IMP=0x000000000039a97f

@end

