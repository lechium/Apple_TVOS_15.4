//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityPhysicalInteraction/AXPIFingerAppearanceDelegate-Protocol.h>

@class NSString;

@interface AXPIFingerSmallAppearance : NSObject <AXPIFingerAppearanceDelegate>
{
}

- (double)fingerWidth;	// IMP=0x000000000000c362
- (_Bool)showInnerCircle;	// IMP=0x000000000000c35a
- (_Bool)showFingerOutlines;	// IMP=0x000000000000c352
- (double)fingerInnerCircleInnerRadius;	// IMP=0x000000000000c340
- (double)fingerInnerRadius;	// IMP=0x000000000000c332
- (double)innerCircleStrokeWidth;	// IMP=0x000000000000c320
- (double)strokeOutlineWidth;	// IMP=0x000000000000c312
- (double)strokeWidth;	// IMP=0x000000000000c304
- (id)pressedCircularProgressFillColor;	// IMP=0x000000000000c2f2
- (id)circularProgressFillColor;	// IMP=0x000000000000c2e0
- (id)strokeOutlineColor;	// IMP=0x000000000000c2c7
- (id)deselectedStrokeColor;	// IMP=0x000000000000c29e
- (id)selectedStrokeColor;	// IMP=0x000000000000c285
- (id)deselectedFillColor;	// IMP=0x000000000000c261
- (id)selectedFillColor;	// IMP=0x000000000000c23d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

