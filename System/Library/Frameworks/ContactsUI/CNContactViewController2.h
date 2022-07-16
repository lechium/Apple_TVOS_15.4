//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactPropertyModelDelegate-Protocol.h>
#import <ContactsUI/CNContactPropertyRemoteModelDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNContactPropertyModel, CNContactViewHostViewController, NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface CNContactViewController2 : UIViewController <UITableViewDataSource, UITableViewDelegate, CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate>
{
    _Bool _ignoreViewWillBePresented;	// 8 = 0x8
    CNContactViewHostViewController *_remoteHostViewController;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    CNContactPropertyModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002cbf2
@property(retain) CNContactPropertyModel *model; // @synthesize model=_model;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CNContactViewHostViewController *remoteHostViewController; // @synthesize remoteHostViewController=_remoteHostViewController;
- (void)_prepareViewController;	// IMP=0x000000000002c920
- (void)_setupViewController;	// IMP=0x000000000002c378
- (void)cancel:(id)arg1;	// IMP=0x000000000002c208
- (void)updatedTransactions:(id)arg1;	// IMP=0x000000000002c196
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bf5f
- (_Bool)outOfProcess;	// IMP=0x000000000002bee5
- (void)pendingRemoteTransactions:(id)arg1;	// IMP=0x000000000002bedf
- (void)pendingTransactions;	// IMP=0x000000000002b996
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002b5d6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002b3fc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002b3a9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002b365
@property(retain, nonatomic) NSArray *displayedProperties;
@property(retain, nonatomic) id displayedObject;
- (void)_endDelayingPresentation;	// IMP=0x000000000002b19b
- (_Bool)_isDelayingPresentation;	// IMP=0x000000000002b10e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002b0c6
- (void)loadView;	// IMP=0x000000000002ad55
- (id)init;	// IMP=0x000000000002ab36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
