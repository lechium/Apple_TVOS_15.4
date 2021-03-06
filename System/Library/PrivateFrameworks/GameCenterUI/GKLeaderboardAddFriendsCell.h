//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell
{
    long long _friendCount;	// 8 = 0x8
    UIView *_container;	// 16 = 0x10
    UIView *_topLine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000049e9e
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) _Bool lineVisible;
- (void)clearContainer;	// IMP=0x0000000000049c32
- (void)configureNoFriendsViewWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049bf0
- (void)configureAddFriendsLockupWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049bb1
- (struct CGSize)preferredLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000000049b9b
- (void)awakeFromNib;	// IMP=0x0000000000049a9e

@end

