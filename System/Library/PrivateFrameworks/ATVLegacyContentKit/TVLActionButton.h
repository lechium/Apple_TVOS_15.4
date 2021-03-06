//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVImageProxy, TVLActionButtonElement;

@interface TVLActionButton <ATVUpdatable>
{
    TVLActionButtonElement *_actionButtonElement;	// 8 = 0x8
    TVImageProxy *_imageProxy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d4c00
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x00000000000d4694
- (id)currentFeedElement;	// IMP=0x00000000000d467f
- (void)layoutSubviews;	// IMP=0x00000000000d463e
- (id)initWithActionButtonElement:(id)arg1;	// IMP=0x00000000000d407d
- (void)dealloc;	// IMP=0x00000000000d4034

@end

