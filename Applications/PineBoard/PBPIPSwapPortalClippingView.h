//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PBPortalView;

@interface PBPIPSwapPortalClippingView : UIView
{
    PBPortalView *_portalView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001ef340
@property(readonly, nonatomic) PBPortalView *portalView; // @synthesize portalView=_portalView;
@property(nonatomic) struct CATransform3D sublayerTransform;
@property(retain, nonatomic) UIView *sourceView;
- (id)initWithFrame:(struct CGRect)arg1 sourceView:(id)arg2;	// IMP=0x00100000001eef20
- (id)initWithSourceView:(id)arg1;	// IMP=0x00100000001eee20

@end
