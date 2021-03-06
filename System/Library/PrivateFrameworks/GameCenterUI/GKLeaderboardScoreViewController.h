//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKLeaderboardScoreDelegate-Protocol.h>
#import <GameCenterUI/UIScrollViewDelegate-Protocol.h>

@class CAGradientLayer, GKLeaderboard, GKLeaderboardEntry, GKLeaderboardMetadataView, GKLeaderboardScoreDataSource, GKNoContentView, GKTimeScopeButton, GKUnfocusableButton, NSLayoutConstraint, NSString, UICollectionView, UILabel, UIScrollView, UISegmentedControl, UIStackView, UIView;

@interface GKLeaderboardScoreViewController <GKLeaderboardScoreDelegate, UIScrollViewDelegate>
{
    _Bool _shouldAutoRefreshHighlights;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UIStackView *_highlightView;	// 24 = 0x18
    GKUnfocusableButton *_scrollToTopButton;	// 32 = 0x20
    UIView *_collectionContainer;	// 40 = 0x28
    UIView *_timeScopeContainer;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UISegmentedControl *_playerScopeControl;	// 64 = 0x40
    NSLayoutConstraint *_collectionContainerHeight;	// 72 = 0x48
    UIView *_collectionGradientView;	// 80 = 0x50
    NSLayoutConstraint *_collectionGradientViewHeightConstraint;	// 88 = 0x58
    UIScrollView *_mainScrollView;	// 96 = 0x60
    NSLayoutConstraint *_highlightViewHeightConstraint;	// 104 = 0x68
    NSLayoutConstraint *_highlightViewWidthConstraint;	// 112 = 0x70
    NSLayoutConstraint *_collectionGradientViewLandscapeTopConstraint;	// 120 = 0x78
    NSLayoutConstraint *_highlightViewLandscapeTopConstraint;	// 128 = 0x80
    GKTimeScopeButton *_timeScopeButton;	// 136 = 0x88
    GKLeaderboardScoreDataSource *_dataSource;	// 144 = 0x90
    GKLeaderboard *_leaderboard;	// 152 = 0x98
    GKLeaderboard *_currentOccurrence;	// 160 = 0xa0
    GKLeaderboard *_previousOccurrence;	// 168 = 0xa8
    long long _timeScope;	// 176 = 0xb0
    long long _playerScope;	// 184 = 0xb8
    long long _leaderboardOccurrence;	// 192 = 0xc0
    GKLeaderboardMetadataView *_personalView;	// 200 = 0xc8
    GKLeaderboardMetadataView *_socialView;	// 208 = 0xd0
    GKNoContentView *_noContentView;	// 216 = 0xd8
    CAGradientLayer *_collectionViewFadeGradient;	// 224 = 0xe0
    GKLeaderboardEntry *_localPlayerEntry;	// 232 = 0xe8
    GKLeaderboardEntry *_topPlayerEntry;	// 240 = 0xf0
    GKLeaderboardEntry *_playerAboveEntry;	// 248 = 0xf8
    GKLeaderboardEntry *_playerBelowEntry;	// 256 = 0x100
    long long _totalEntries;	// 264 = 0x108
    double _startTime;	// 272 = 0x110
}

+ (void)setRestrictToFriendsOnly:(_Bool)arg1;	// IMP=0x00000000000cef26
+ (_Bool)restrictToFriendsOnly;	// IMP=0x00000000000cef1a
- (void).cxx_destruct;	// IMP=0x00000000000d4157
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool shouldAutoRefreshHighlights; // @synthesize shouldAutoRefreshHighlights=_shouldAutoRefreshHighlights;
@property(nonatomic) long long totalEntries; // @synthesize totalEntries=_totalEntries;
@property(retain, nonatomic) GKLeaderboardEntry *playerBelowEntry; // @synthesize playerBelowEntry=_playerBelowEntry;
@property(retain, nonatomic) GKLeaderboardEntry *playerAboveEntry; // @synthesize playerAboveEntry=_playerAboveEntry;
@property(retain, nonatomic) GKLeaderboardEntry *topPlayerEntry; // @synthesize topPlayerEntry=_topPlayerEntry;
@property(retain, nonatomic) GKLeaderboardEntry *localPlayerEntry; // @synthesize localPlayerEntry=_localPlayerEntry;
@property(retain, nonatomic) CAGradientLayer *collectionViewFadeGradient; // @synthesize collectionViewFadeGradient=_collectionViewFadeGradient;
@property(retain, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) GKLeaderboardMetadataView *socialView; // @synthesize socialView=_socialView;
@property(retain, nonatomic) GKLeaderboardMetadataView *personalView; // @synthesize personalView=_personalView;
@property(nonatomic) long long leaderboardOccurrence; // @synthesize leaderboardOccurrence=_leaderboardOccurrence;
@property(nonatomic) long long playerScope; // @synthesize playerScope=_playerScope;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) GKLeaderboard *previousOccurrence; // @synthesize previousOccurrence=_previousOccurrence;
@property(retain, nonatomic) GKLeaderboard *currentOccurrence; // @synthesize currentOccurrence=_currentOccurrence;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKLeaderboardScoreDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) GKTimeScopeButton *timeScopeButton; // @synthesize timeScopeButton=_timeScopeButton;
@property(retain, nonatomic) NSLayoutConstraint *highlightViewLandscapeTopConstraint; // @synthesize highlightViewLandscapeTopConstraint=_highlightViewLandscapeTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionGradientViewLandscapeTopConstraint; // @synthesize collectionGradientViewLandscapeTopConstraint=_collectionGradientViewLandscapeTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *highlightViewWidthConstraint; // @synthesize highlightViewWidthConstraint=_highlightViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *highlightViewHeightConstraint; // @synthesize highlightViewHeightConstraint=_highlightViewHeightConstraint;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) NSLayoutConstraint *collectionGradientViewHeightConstraint; // @synthesize collectionGradientViewHeightConstraint=_collectionGradientViewHeightConstraint;
@property(retain, nonatomic) UIView *collectionGradientView; // @synthesize collectionGradientView=_collectionGradientView;
@property(retain, nonatomic) NSLayoutConstraint *collectionContainerHeight; // @synthesize collectionContainerHeight=_collectionContainerHeight;
@property(retain, nonatomic) UISegmentedControl *playerScopeControl; // @synthesize playerScopeControl=_playerScopeControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *timeScopeContainer; // @synthesize timeScopeContainer=_timeScopeContainer;
@property(retain, nonatomic) UIView *collectionContainer; // @synthesize collectionContainer=_collectionContainer;
@property(retain, nonatomic) GKUnfocusableButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
@property(retain, nonatomic) UIStackView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)longPressEventWithScore:(id)arg1;	// IMP=0x00000000000d3961
- (void)shareWithScore:(id)arg1 fromView:(id)arg2;	// IMP=0x00000000000d38bc
- (void)challengeWithScore:(id)arg1;	// IMP=0x00000000000d32d6
- (void)shareScore:(id)arg1 fromLeaderboard:(id)arg2 sendingView:(id)arg3 relativeRect:(struct CGRect)arg4;	// IMP=0x00000000000d2ebd
- (void)updateContentSize;	// IMP=0x00000000000d2eab
- (void)didLoadAdditionalScores;	// IMP=0x00000000000d2e99
- (void)didLoadScoresWithLocalPlayerEntry:(id)arg1 topPlayer:(id)arg2 playerAbove:(id)arg3 playerBelow:(id)arg4 totalEntries:(long long)arg5;	// IMP=0x00000000000d2db1
- (void)collectionViewDidScroll;	// IMP=0x00000000000d2c87
- (void)clearSelection;	// IMP=0x00000000000d2abf
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d2a90
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000d2a00
- (void)donePressed:(id)arg1;	// IMP=0x00000000000d29c3
- (void)didExitRefreshingState;	// IMP=0x00000000000d29b1
- (void)didEnterRefreshingState;	// IMP=0x00000000000d299f
- (void)didEnterLoadingState;	// IMP=0x00000000000d295e
- (_Bool)isLoading;	// IMP=0x00000000000d2905
- (void)setNeedsRefresh;	// IMP=0x00000000000d27b2
- (void)loadLeaderboardForOccurrence:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d242c
- (void)timeScopePressed:(id)arg1;	// IMP=0x00000000000d170d
- (void)scrollToTopPressed:(id)arg1;	// IMP=0x00000000000d16b5
- (void)setPlayerScope:(long long)arg1 restrictToFriendsOnly:(_Bool)arg2;	// IMP=0x00000000000d15b1
- (void)playerScopeChanged:(id)arg1;	// IMP=0x00000000000d141f
- (void)addPlayerScopeControl;	// IMP=0x00000000000d1145
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000d0cb6
- (void)hideNoContentPlaceholder;	// IMP=0x00000000000d0c2e
- (void)showNoContentPlaceholderForError:(id)arg1;	// IMP=0x00000000000d087a
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x00000000000d053d
- (_Bool)hasData;	// IMP=0x00000000000d04f9
- (void)loadData;	// IMP=0x00000000000d026c
- (void)configureCloseButton;	// IMP=0x00000000000d01be
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000d00e9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000d0082
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000cff4d
- (void)setupVisualEffect;	// IMP=0x00000000000cfe43
- (id)contentScrollView;	// IMP=0x00000000000cfe31
- (id)preferredFocusEnvironments;	// IMP=0x00000000000cfda6
- (void)menuButtonPressed:(id)arg1;	// IMP=0x00000000000cfd03
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000cfbff
- (void)dealloc;	// IMP=0x00000000000cfb5a
- (void)setupFadeGradient;	// IMP=0x00000000000cf98f
- (id)timeRemainingFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x00000000000cf882
- (void)viewDidLoad;	// IMP=0x00000000000cef32
@property(nonatomic) long long initialPlayerScope; // @dynamic initialPlayerScope;
@property(nonatomic) long long initialTimeScope; // @dynamic initialTimeScope;
- (id)formattedNumber:(id)arg1;	// IMP=0x00000000000ceec8
- (void)updateHighlights;	// IMP=0x00000000000ce1bd
- (_Bool)updateHighlightsPersonalView;	// IMP=0x00000000000cd640
- (id)attributedStringWithSymbol:(id)arg1;	// IMP=0x00000000000cd467
- (void)autoRefreshHighlightsPersonalView;	// IMP=0x00000000000cd3a6
- (void)addLeaderboardHighlights;	// IMP=0x00000000000cd0f4
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;	// IMP=0x00000000000ccf09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool restrictToFriendsOnly; // @dynamic restrictToFriendsOnly;
@property(readonly) Class superclass;

@end

