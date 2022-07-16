//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

#import <SiriTVUI/SiriTVUITemplateItemView-Protocol.h>

@class NSString;

@interface SiriTVUITemplateImageView : UIImageView <SiriTVUITemplateItemView>
{
    _Bool hasPriorityLayout;	// 8 = 0x8
    struct CGSize _imageSize;	// 16 = 0x10
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool hasPriorityLayout; // @synthesize hasPriorityLayout;
- (_Bool)shouldFitWithinContentMargins;	// IMP=0x0000000000024f53
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000024f3b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024ed9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

