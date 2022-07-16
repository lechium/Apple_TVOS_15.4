//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

#import <MPUFoundation/MPUAutoupdatingTextContainer-Protocol.h>

@class MPUTextContainerContentSizeUpdater, NSAttributedString, NSString, UIFont;

@interface UILabel (MPUAdditions) <MPUAutoupdatingTextContainer>
@property(nonatomic, setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) _Bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property(readonly, nonatomic) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
- (void)MPU_configureWithTextAttributes:(id)arg1;	// IMP=0x0000000000009535

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

