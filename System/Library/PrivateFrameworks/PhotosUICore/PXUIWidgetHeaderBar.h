//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXUIWidgetHeaderViewDelegate-Protocol.h>

@class NSString;

@interface PXUIWidgetHeaderBar <PXUIWidgetHeaderViewDelegate>
{
}

- (void)widgetHeaderView:(id)arg1 didSelectCaption:(id)arg2;	// IMP=0x000000000000f255
- (void)widgetHeaderView:(id)arg1 didSelectSubtitle:(id)arg2;	// IMP=0x000000000000f243
- (void)setSpec:(id)arg1;	// IMP=0x000000000000f170
- (void)setDisclosureTitle:(id)arg1;	// IMP=0x000000000000f09d
- (void)setCaption:(id)arg1;	// IMP=0x000000000000efca
- (void)setSubtitle:(id)arg1;	// IMP=0x000000000000eef7
- (void)setTitle:(id)arg1;	// IMP=0x000000000000ee24
- (double)viewHeight;	// IMP=0x000000000000edc4
- (void)updateView;	// IMP=0x000000000000ebcb
- (id)createView;	// IMP=0x000000000000eb93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

