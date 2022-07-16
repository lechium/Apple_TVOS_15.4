//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CertInfo/UITableViewDataSource-Protocol.h>

@class NSMutableArray, NSString, UITableView;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    NSMutableArray *_tableSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000abe4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000000ab58
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000ab3b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000a98e
- (id)_detailForIndexPath:(id)arg1;	// IMP=0x000000000000a88d
- (id)_titleForIndexPath:(id)arg1;	// IMP=0x000000000000a78c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000a6ea
- (void)layoutSubviews;	// IMP=0x000000000000a693
- (id)initWithFrame:(struct CGRect)arg1 certificateProperties:(id)arg2;	// IMP=0x000000000000a559
- (id)_sectionsFromProperties:(id)arg1;	// IMP=0x000000000000a224
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;	// IMP=0x000000000000a17c
- (id)_cellInfosForSection:(id)arg1;	// IMP=0x0000000000009de8
- (void)appendInfoFromCertView:(id)arg1;	// IMP=0x0000000000009d46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
