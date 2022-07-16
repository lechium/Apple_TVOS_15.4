//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider <PXForYouRankable>
{
    NSDate *_cachedPriorityDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c37ac
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
- (void)resetPriorityDate;	// IMP=0x00000000001c36ed
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (_Bool)supportsDynamicRanking;	// IMP=0x00000000001c3643
- (id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2;	// IMP=0x00000000001c352a

// Remaining properties
@property(readonly, nonatomic) unsigned long long gadgetType;

@end
