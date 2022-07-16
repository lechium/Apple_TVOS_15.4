//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarRegionAxisLayout-Protocol.h>

@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout>
{
    double _interspace;	// 8 = 0x8
    double _margin;	// 16 = 0x10
    long long _maxNumberOfItems;	// 24 = 0x18
}

@property(nonatomic) long long maxNumberOfItems; // @synthesize maxNumberOfItems=_maxNumberOfItems;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double interspace; // @synthesize interspace=_interspace;
- (_Bool)mayFitDisplayItems:(id)arg1;	// IMP=0x0000000000c4bd14
@property(readonly, nonatomic) _Bool canOverflowItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;	// IMP=0x0000000000c4a99a
- (id)init;	// IMP=0x0000000000c4a952

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

