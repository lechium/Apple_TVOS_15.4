//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXGadgetSpec, UIButton;
@protocol PXGadgetDelegate;

@interface PXTapToRadarGadget : UIView <PXGadget>
{
    PXGadgetSpec *_gadgetSpec;	// 8 = 0x8
    long long _priority;	// 16 = 0x10
    id <PXGadgetDelegate> _delegate;	// 24 = 0x18
    UIButton *_tapToRadarButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000044005d
@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void)_tapToRadarTapped:(id)arg1;	// IMP=0x000000000043ff73
- (void)layoutSubviews;	// IMP=0x000000000043fe2e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000043fe20
- (id)contentView;	// IMP=0x000000000043fe17
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end

