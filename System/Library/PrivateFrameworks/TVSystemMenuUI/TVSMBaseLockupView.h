//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/TVLockupView.h>

@class TVSMBaseView, UICollectionViewLayoutAttributes;

@interface TVSMBaseLockupView : TVLockupView
{
    UICollectionViewLayoutAttributes *_layoutAttributes;	// 8 = 0x8
    TVSMBaseView *_customContentView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011ba0
@property(readonly, nonatomic) TVSMBaseView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void)didMoveToSuperview;	// IMP=0x0000000000011a00
@property(readonly, nonatomic) TVSMBaseView *baseView;
- (id)initWithStyle:(long long)arg1 contentViewClass:(Class)arg2;	// IMP=0x0000000000010bc0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000010b50

@end

