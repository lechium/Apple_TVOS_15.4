//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class MKMapView, NSDateFormatter, NSString, NSTimer, UIColor;

@interface MKDebugLocationConsole : UILabel
{
    MKMapView *_parentMapView;	// 8 = 0x8
    NSTimer *_updateTimer;	// 16 = 0x10
    unsigned long long _pageIndex;	// 24 = 0x18
    NSString *_customText;	// 32 = 0x20
    UIColor *_customTextColor;	// 40 = 0x28
    _Bool _customTextEnabled;	// 48 = 0x30
    NSDateFormatter *_timeStampFormatter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000585e9
@property(nonatomic) _Bool customTextEnabled; // @synthesize customTextEnabled=_customTextEnabled;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)timeStampFormatter;	// IMP=0x000000000005855f
- (void)setText:(id)arg1;	// IMP=0x0000000000058458
- (void)_showNextPage;	// IMP=0x00000000000583f7
- (void)_consoleTapped:(id)arg1;	// IMP=0x00000000000583e5
- (struct CGRect)_debugViewFrameWithMapView:(id)arg1;	// IMP=0x00000000000582f4
- (void)_updateCustomText;	// IMP=0x000000000005823d
- (void)_updateVehicleInfo;	// IMP=0x000000000005804f
- (void)_updateGPSInfo;	// IMP=0x0000000000057cc7
- (void)updateCustomText:(id)arg1 textColor:(id)arg2;	// IMP=0x0000000000057c29
- (void)update;	// IMP=0x0000000000057bec
- (void)updateFrameWithEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000057b81
- (id)initWithMapView:(id)arg1;	// IMP=0x00000000000578de

@end

