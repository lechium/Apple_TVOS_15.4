//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <TVKit/TVCollectionViewDelegate-Protocol.h>

@class NSString, TVCollectionView;

@interface TVCollectionViewController : UICollectionViewController <TVCollectionViewDelegate>
{
}

@property(retain, nonatomic) TVCollectionView *collectionView;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000038091
- (id)preferredFocusEnvironments;	// IMP=0x0000000000037fb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
