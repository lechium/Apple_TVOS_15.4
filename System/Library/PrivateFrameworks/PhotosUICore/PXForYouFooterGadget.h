//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXGadgetSpec, PXPhotosGlobalFooterView;
@protocol PXGadgetDelegate;

@interface PXForYouFooterGadget : NSObject <PXGadget>
{
    PXGadgetSpec *_gadgetSpec;	// 8 = 0x8
    id <PXGadgetDelegate> _delegate;	// 16 = 0x10
    PXPhotosGlobalFooterView *_footerView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000498fe0
@property(retain, nonatomic) PXPhotosGlobalFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (id)contentView;	// IMP=0x0000000000498f71
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000498ee7
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000000498e51

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end

