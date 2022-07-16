//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNUIPeopleGroupsDataSourceDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>

@class CNUIContactsEnvironment, CNUIPeopleGroupsDataSource, CNUIPeopleGroupsGridView, NSString;
@protocol CNUIPeopleGroupsGridViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroupsGridViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNUIPeopleGroupsDataSourceDelegate>
{
    id <CNUIPeopleGroupsGridViewControllerDelegate> _delegate;	// 8 = 0x8
    CNUIPeopleGroupsGridView *_gridView;	// 16 = 0x10
    CNUIContactsEnvironment *_environment;	// 24 = 0x18
    CNUIPeopleGroupsDataSource *_dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000065259
@property(retain, nonatomic) CNUIPeopleGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNUIPeopleGroupsGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <CNUIPeopleGroupsGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataSourceDidChange:(id)arg1;	// IMP=0x0000000000065164
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000064f77
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000064cd9
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000064c39
- (void)reloadGridView;	// IMP=0x0000000000064b9e
- (void)reloadData;	// IMP=0x0000000000064b46
- (void)viewDidLoad;	// IMP=0x0000000000064a5f
- (void)loadView;	// IMP=0x0000000000064970
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000648c2
- (id)newGridLayout;	// IMP=0x00000000000647dc
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;	// IMP=0x00000000000646fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

