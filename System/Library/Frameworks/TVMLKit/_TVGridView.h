//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TVCollectionViewFlowLayout;

@interface _TVGridView
{
    _Bool _delegateRespondsToIndexPathForPreferredFocusedView;	// 8 = 0x8
    _TVCollectionViewFlowLayout *_gridFlowLayout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000028f96
@property(retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout; // @synthesize gridFlowLayout=_gridFlowLayout;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withContentInset:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000028eee
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000028e8b
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000028e0b
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000028d41
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000028cb1

@end

