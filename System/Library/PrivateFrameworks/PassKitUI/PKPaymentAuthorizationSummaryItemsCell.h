//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PKPaymentAuthorizationSummaryItemsView;

@interface PKPaymentAuthorizationSummaryItemsCell
{
    NSMutableArray *_constraints;	// 8 = 0x8
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021019d
@property(readonly, nonatomic) PKPaymentAuthorizationSummaryItemsView *summaryItemsView; // @synthesize summaryItemsView=_summaryItemsView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000021016f
- (void)layoutSubviews;	// IMP=0x0000000000210062
- (void)prepareForReuse;	// IMP=0x0000000000210019
- (void)dealloc;	// IMP=0x000000000020ffea
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000020fea7

@end

