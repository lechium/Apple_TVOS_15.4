//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardPlayerDataSource
{
    unsigned long long _mode;	// 8 = 0x8
    GKGameRecord *_gameRecord;	// 16 = 0x10
    NSArray *_players;	// 24 = 0x18
    NSDictionary *_datesPerPlayer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005eeaa
@property(retain, nonatomic) NSDictionary *datesPerPlayer; // @synthesize datesPerPlayer=_datesPerPlayer;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000005eb46
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000005e939
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000005e6f7
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000005e6ec
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000000005e649
- (double)preferredCollectionHeight;	// IMP=0x000000000005e630
- (long long)itemCount;	// IMP=0x000000000005e613
- (void)loadedMatches:(id)arg1 withError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e1cb
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e042
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000000005de66
- (id)initWithGameRecord:(id)arg1;	// IMP=0x000000000005ddfe

@end

