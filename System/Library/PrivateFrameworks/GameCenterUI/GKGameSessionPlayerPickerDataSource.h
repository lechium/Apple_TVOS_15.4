//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GKGameSessionPlayerPickerDataSource
{
    _Bool _didLoad;	// 8 = 0x8
    long long _maxSelectable;	// 16 = 0x10
    NSArray *_friendPlayers;	// 24 = 0x18
    NSArray *_recentPlayers;	// 32 = 0x20
    NSArray *_filteredRecentPlayers;	// 40 = 0x28
    NSArray *_filteredFriendPlayers;	// 48 = 0x30
    NSMutableDictionary *_playerStates;	// 56 = 0x38
    NSArray *_searchPlayers;	// 64 = 0x40
    NSArray *_unavailablePlayers;	// 72 = 0x48
    NSArray *_hiddenPlayers;	// 80 = 0x50
    NSMutableArray *_selectedPlayersStack;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000081ee1
@property(nonatomic) _Bool didLoad; // @synthesize didLoad=_didLoad;
@property(retain, nonatomic) NSMutableArray *selectedPlayersStack; // @synthesize selectedPlayersStack=_selectedPlayersStack;
@property(retain, nonatomic) NSArray *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) NSArray *unavailablePlayers; // @synthesize unavailablePlayers=_unavailablePlayers;
@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSArray *filteredFriendPlayers; // @synthesize filteredFriendPlayers=_filteredFriendPlayers;
@property(retain, nonatomic) NSArray *filteredRecentPlayers; // @synthesize filteredRecentPlayers=_filteredRecentPlayers;
@property(retain, nonatomic) NSArray *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000081c2c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000081910
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000817c8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000817af
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000008160c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000815c3
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000815b8
- (void)searchTextHasChanged;	// IMP=0x000000000008133f
- (id)searchKeyForSection:(long long)arg1;	// IMP=0x0000000000081332
- (id)indexPathForFirstPlayer;	// IMP=0x0000000000081260
- (id)indexPathForPlayer:(id)arg1;	// IMP=0x0000000000081175
- (void)clearSelection;	// IMP=0x0000000000080f87
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (id)playerForPlayerID:(id)arg1;	// IMP=0x0000000000080958
- (id)playerForIndexPath:(id)arg1;	// IMP=0x000000000008089c
- (id)playersForSection:(long long)arg1 ignoreSearch:(_Bool)arg2;	// IMP=0x000000000008083b
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000000080829
- (double)preferredCollectionHeight;	// IMP=0x0000000000080810
- (id)headerTextForSection:(long long)arg1;	// IMP=0x0000000000080752
- (long long)itemCount;	// IMP=0x00000000000806d4
- (void)filterPlayers;	// IMP=0x0000000000080614
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007fd82
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000000007fcd8
- (id)initWithMaxSelectable:(long long)arg1 unavailablePlayers:(id)arg2 hiddenPlayers:(id)arg3;	// IMP=0x000000000007fbdc

@end

