//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView;

@interface HBUILaunchScreenSaverAnimationDescription
{
    UIView *_topShelfView;	// 8 = 0x8
    NSArray *_appGridViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000befe
@property(readonly, nonatomic) NSArray *appGridViews; // @synthesize appGridViews=_appGridViews;
@property(readonly, nonatomic) UIView *topShelfView; // @synthesize topShelfView=_topShelfView;
- (id)debugDescription;	// IMP=0x000000000000be1b
- (id)initWithAppGridViews:(id)arg1;	// IMP=0x000000000000bda1
- (id)initWithTopShelfView:(id)arg1;	// IMP=0x000000000000bd33

@end
