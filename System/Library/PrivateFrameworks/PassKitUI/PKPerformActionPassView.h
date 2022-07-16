//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPass, PKPassSnapshotter, UIImageView;

@interface PKPerformActionPassView
{
    PKPass *_pass;	// 16 = 0x10
    PKPassSnapshotter *_snapshotter;	// 24 = 0x18
    UIImageView *_passView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000129cdf
- (struct CGSize)_passImageSize;	// IMP=0x0000000000129c95
- (void)_loadSnapshotView;	// IMP=0x0000000000129b48
- (void)_createSubviews;	// IMP=0x000000000012998a
- (void)smallShakeImage;	// IMP=0x000000000012996b
- (void)shakeImage;	// IMP=0x000000000012994c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000012991f
- (void)layoutSubviews;	// IMP=0x0000000000129855
- (void)configureWithPass:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x000000000012974c
- (id)initWithPass:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0000000000129610
- (id)init;	// IMP=0x00000000001295e1

@end

