//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVPlayback/TVPAudioRoutingControllerDelegate-Protocol.h>
#import <TVPlayback/TVPTableViewDelegate-Protocol.h>
#import <TVPlayback/UITableViewDataSource-Protocol.h>

@class NSArray, NSIndexPath, NSString, TVPAudioRoutingController, TVPTableView;

__attribute__((visibility("hidden")))
@interface TVPMusicSpeakerSelectionViewController : UIViewController <TVPAudioRoutingControllerDelegate, TVPTableViewDelegate, UITableViewDataSource>
{
    NSIndexPath *_selectedIndexPath;	// 8 = 0x8
    TVPTableView *_tableView;	// 16 = 0x10
    TVPAudioRoutingController *_routingController;	// 24 = 0x18
    NSArray *_knownRoutes;	// 32 = 0x20
    NSArray *_otherRoutes;	// 40 = 0x28
    NSString *_lastFocusedRouteID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000008f1d9
@property(retain, nonatomic) NSString *lastFocusedRouteID; // @synthesize lastFocusedRouteID=_lastFocusedRouteID;
@property(retain, nonatomic) NSArray *otherRoutes; // @synthesize otherRoutes=_otherRoutes;
@property(retain, nonatomic) NSArray *knownRoutes; // @synthesize knownRoutes=_knownRoutes;
@property(retain, nonatomic) TVPAudioRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) TVPTableView *tableView; // @synthesize tableView=_tableView;
- (id)_indexPathForAudioRouteID:(id)arg1;	// IMP=0x000000000008ed5e
- (id)_indexPathForAudioRoute:(id)arg1;	// IMP=0x000000000008ec66
- (id)_routeForIndexPath:(id)arg1;	// IMP=0x000000000008eb99
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000000008eb21
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000008ea7c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000008e9ef
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000008e972
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000008e920
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000008e915
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000008e77e
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x000000000008e62d
- (id)preferredFocusEnvironments;	// IMP=0x000000000008e5a2
- (void)viewWillLayoutSubviews;	// IMP=0x000000000008e3ed
- (void)didReceiveMemoryWarning;	// IMP=0x000000000008e3be
- (void)viewDidLoad;	// IMP=0x000000000008e2b9
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000008e189

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

