//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MultipeerConnectivity/MCNearbyServiceBrowserDelegate-Protocol.h>
#import <MultipeerConnectivity/MCSessionPrivateDelegate-Protocol.h>
#import <MultipeerConnectivity/UITableViewDataSource-Protocol.h>
#import <MultipeerConnectivity/UITableViewDelegate-Protocol.h>

@class MCNearbyServiceBrowser, MCPeerID, MCSession, NSBundle, NSMutableArray, NSMutableDictionary, NSObject, NSString, UIActivityIndicatorView, UIButton, UILabel, UITableView, UIVisualEffectView;
@protocol MCBrowserViewControllerDelegate, OS_dispatch_queue;

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, MCNearbyServiceBrowserDelegate>
{
    id <MCBrowserViewControllerDelegate> _delegate;	// 8 = 0x8
    MCNearbyServiceBrowser *_browser;	// 16 = 0x10
    MCSession *_session;	// 24 = 0x18
    unsigned long long _minimumNumberOfPeers;	// 32 = 0x20
    unsigned long long _maximumNumberOfPeers;	// 40 = 0x28
    MCPeerID *_myPeerID;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    NSMutableArray *_nearbyPeersSection;	// 64 = 0x40
    NSMutableArray *_invitedPeersSection;	// 72 = 0x48
    NSMutableDictionary *_invitedPeersState;	// 80 = 0x50
    NSMutableArray *_foundPeers;	// 88 = 0x58
    UILabel *_chooseLabel;	// 96 = 0x60
    UILabel *_searchingLabel;	// 104 = 0x68
    UIActivityIndicatorView *_searchingActivityIndicator;	// 112 = 0x70
    UIVisualEffectView *_searchingAndSpinnerContainerView;	// 120 = 0x78
    UIVisualEffectView *_chooseLabelContainerView;	// 128 = 0x80
    UIButton *_doneButton;	// 136 = 0x88
    NSBundle *_frameworkBundle;	// 144 = 0x90
    unsigned long long _declinedPeersCount;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 160 = 0xa0
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) unsigned long long declinedPeersCount; // @synthesize declinedPeersCount=_declinedPeersCount;
@property(retain, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIVisualEffectView *chooseLabelContainerView; // @synthesize chooseLabelContainerView=_chooseLabelContainerView;
@property(retain, nonatomic) UIVisualEffectView *searchingAndSpinnerContainerView; // @synthesize searchingAndSpinnerContainerView=_searchingAndSpinnerContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *searchingActivityIndicator; // @synthesize searchingActivityIndicator=_searchingActivityIndicator;
@property(retain, nonatomic) UILabel *searchingLabel; // @synthesize searchingLabel=_searchingLabel;
@property(retain, nonatomic) UILabel *chooseLabel; // @synthesize chooseLabel=_chooseLabel;
@property(retain, nonatomic) NSMutableArray *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) NSMutableDictionary *invitedPeersState; // @synthesize invitedPeersState=_invitedPeersState;
@property(retain, nonatomic) NSMutableArray *invitedPeersSection; // @synthesize invitedPeersSection=_invitedPeersSection;
@property(retain, nonatomic) NSMutableArray *nearbyPeersSection; // @synthesize nearbyPeersSection=_nearbyPeersSection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(nonatomic) unsigned long long maximumNumberOfPeers; // @synthesize maximumNumberOfPeers=_maximumNumberOfPeers;
@property(nonatomic) unsigned long long minimumNumberOfPeers; // @synthesize minimumNumberOfPeers=_minimumNumberOfPeers;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(_Bool *)arg6;	// IMP=0x0000000000028b98
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(_Bool *)arg5;	// IMP=0x0000000000028b68
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(_Bool *)arg5;	// IMP=0x0000000000028b38
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(_Bool *)arg4;	// IMP=0x0000000000028890
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(_Bool *)arg4;	// IMP=0x0000000000028860
- (void)browser:(id)arg1 lostPeer:(id)arg2;	// IMP=0x000000000002869e
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;	// IMP=0x0000000000028344
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000000002830a
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028295
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028220
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000002816f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000027e83
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000027e14
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000027df9
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000027c6a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000027b9a
- (void)applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000027b63
- (void)applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000000027b2c
- (id)nearbySectionTitle;	// IMP=0x00000000000278ed
- (void)updateChooseLabel;	// IMP=0x00000000000277aa
@property(readonly, nonatomic) _Bool minimumNumberOfPeersReached;
@property(readonly, nonatomic) _Bool maximumNumberOfPeersReached;
- (void)verifyPeerIsAccountedFor:(id)arg1;	// IMP=0x000000000002765c
- (id)detailStringForPeerState:(int)arg1;	// IMP=0x00000000000275e5
- (void)cancelTapped:(id)arg1;	// IMP=0x00000000000275b4
- (void)peer:(id)arg1 changedStateTo:(int)arg2;	// IMP=0x00000000000272fc
- (void)peerJoinedSession;	// IMP=0x000000000002727f
- (void)doneTapped:(id)arg1;	// IMP=0x000000000002724e
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000271a3
- (void)updateSearchingIndicator;	// IMP=0x0000000000027105
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000270bd
- (void)handleViewDidDisappear;	// IMP=0x0000000000027092
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000027051
- (void)handleViewWillAppear;	// IMP=0x0000000000026dd5
- (void)addConstraints;	// IMP=0x00000000000266bc
- (void)addUIElements;	// IMP=0x0000000000026155
- (void)viewDidLoad;	// IMP=0x00000000000260ff
- (_Bool)isVisible;	// IMP=0x00000000000260b4
@property(nonatomic) __weak id <MCBrowserViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000025e50
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025e1c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000025de8
- (id)init;	// IMP=0x0000000000025dd2
- (id)initWithServiceType:(id)arg1 session:(id)arg2;	// IMP=0x0000000000025d5a
- (id)initWithBrowser:(id)arg1 session:(id)arg2;	// IMP=0x0000000000025ab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

