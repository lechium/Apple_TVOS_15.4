//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery
{
    NSArray *_strokeGroupItems;	// 8 = 0x8
    NSDictionary *_strokeGroupItemsByID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e9a0
@property(copy, nonatomic, setter=_setStrokeGroupItemsByID:) NSDictionary *strokeGroupItemsByID; // @synthesize strokeGroupItemsByID=_strokeGroupItemsByID;
- (id)debugName;	// IMP=0x000000000000e930
@property(copy, nonatomic, setter=_setStrokeGroupItems:) NSArray *strokeGroupItems; // @synthesize strokeGroupItems=_strokeGroupItems;
- (id)tokenizedStrokeResultForInitialStrokes:(id)arg1 point:(struct CGPoint)arg2 tokenizationLevel:(long long)arg3 completion:(CDUnknownBlockType)arg4 shouldCancel:(CDUnknownBlockType)arg5;	// IMP=0x000000000000e3f0
- (id)tokenizedStrokeResultForInitialStrokes:(id)arg1 point:(struct CGPoint)arg2 tokenizationLevel:(long long)arg3;	// IMP=0x000000000000e1b0
- (long long)q_itemTypeForStrokeGroup:(id)arg1 recognitionResult:(id)arg2;	// IMP=0x000000000000e0a0
- (id)q_strokeGroupItemsFromSessionResult:(id)arg1;	// IMP=0x000000000000d9e0
- (void)q_updateQueryResult;	// IMP=0x000000000000d780

@end

