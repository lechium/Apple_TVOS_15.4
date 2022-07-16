//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <SiriTVUI/SiriTVUITemplateItemView-Protocol.h>

@class NSString;

@interface SiriTVUITemplateButton : UIButton <SiriTVUITemplateItemView>
{
    _Bool hasPriorityLayout;	// 8 = 0x8
    unsigned long long _backgroundImageStyle;	// 16 = 0x10
    struct CGSize _backgroundImageSize;	// 24 = 0x18
}

+ (id)defaultButton;	// IMP=0x000000000000900e
@property(nonatomic) unsigned long long backgroundImageStyle; // @synthesize backgroundImageStyle=_backgroundImageStyle;
@property(nonatomic) struct CGSize backgroundImageSize; // @synthesize backgroundImageSize=_backgroundImageSize;
@property(nonatomic) _Bool hasPriorityLayout; // @synthesize hasPriorityLayout;
- (_Bool)shouldFitWithinContentMargins;	// IMP=0x000000000000916b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000090d7
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000000902c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
