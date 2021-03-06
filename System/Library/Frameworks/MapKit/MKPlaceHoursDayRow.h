//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKPlaceHoursViewDelegate-Protocol.h>

@class MKPlaceHoursView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursDayRow <MKPlaceHoursViewDelegate>
{
    MKPlaceHoursView *_hoursView;	// 8 = 0x8
    NSLayoutConstraint *_topAnchorToTopLabelBaseline;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000073195
@property(retain, nonatomic) NSLayoutConstraint *topAnchorToTopLabelBaseline; // @synthesize topAnchorToTopLabelBaseline=_topAnchorToTopLabelBaseline;
@property(retain, nonatomic) MKPlaceHoursView *hoursView; // @synthesize hoursView=_hoursView;
- (void)hoursViewDidUpdate:(id)arg1;	// IMP=0x0000000000072f4c
- (void)_setUpConstraints;	// IMP=0x0000000000072c40
- (void)_setUpViewsForPlaceHoursDayRow;	// IMP=0x0000000000072bcd
- (id)initWithBusinessHours:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0000000000072b09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

