//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardPassDataSource-Protocol.h>
#import <PassKitUI/PKSecureElementObserver-Protocol.h>

@class NSString, PKGroup, PKPassGroupView;
@protocol PKDashboardDataSourceDelegate;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource>
{
    PKPassGroupView *_groupView;	// 8 = 0x8
    PKGroup *_group;	// 16 = 0x10
    id <PKDashboardDataSourceDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ce7d1
- (id)footerTextItemForSection:(unsigned long long)arg1;	// IMP=0x00000000000ce7c9
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x00000000000ce7c1
- (unsigned long long)numberOfSections;	// IMP=0x00000000000ce7b6
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x00000000000ce7a8
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00000000000ce758
- (void)setDataSourceDelegate:(id)arg1;	// IMP=0x00000000000ce72d
- (void)reloadData;	// IMP=0x00000000000ce727
- (void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000ce715
- (void)groupViewDidUpdatePassView:(id)arg1;	// IMP=0x00000000000ce5ae
- (void)sendContentIsLoadedIfNecessary;	// IMP=0x00000000000ce56f
- (void)dealloc;	// IMP=0x00000000000ce540
- (id)initWithGroupView:(id)arg1 context:(id)arg2;	// IMP=0x00000000000ce49e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

