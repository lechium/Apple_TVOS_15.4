//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKShapeView;

@interface PKPeerPaymentNumberPadActionButton
{
    PKShapeView *_maskView;	// 56 = 0x38
    unsigned long long _action;	// 64 = 0x40
}

+ (struct CGSize)referenceSize;	// IMP=0x000000000016f4f7
- (void).cxx_destruct;	// IMP=0x000000000016fc4a
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)_updateMask;	// IMP=0x000000000016fb4f
- (id)_titleForAction:(unsigned long long)arg1;	// IMP=0x000000000016f8e9
- (void)layoutSubviews;	// IMP=0x000000000016f690
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016f508

@end

