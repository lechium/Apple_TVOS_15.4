//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelRadioStation, MPModelStoreBrowseResponse, NSString, NSURL;

@interface MPModelStoreBrowseSection
{
    _Bool _containsOnlyEditorialElements;	// 8 = 0x8
}

+ (id)__radioStation_KEY;	// IMP=0x000000000024311c
+ (id)__displaysAsGridCellInCarPlay_KEY;	// IMP=0x000000000024310f
+ (id)__previouslyRetrievedNestedResponse_KEY;	// IMP=0x0000000000243102
+ (id)__brick_KEY;	// IMP=0x00000000002430f5
+ (id)__memberOfChartSet_KEY;	// IMP=0x00000000002430e8
+ (id)__uniformContentItemType_KEY;	// IMP=0x00000000002430db
+ (id)__loadAdditionalContentURL_KEY;	// IMP=0x00000000002430ce
+ (id)__sectionType_KEY;	// IMP=0x00000000002430c1
+ (id)__title_KEY;	// IMP=0x00000000002430b4
@property(nonatomic) _Bool containsOnlyEditorialElements; // @synthesize containsOnlyEditorialElements=_containsOnlyEditorialElements;

// Remaining properties
@property(nonatomic, getter=isBrick) _Bool brick; // @dynamic brick;
@property(nonatomic) _Bool displaysAsGridCellInCarPlay; // @dynamic displaysAsGridCellInCarPlay;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @dynamic loadAdditionalContentURL;
@property(nonatomic, getter=isMemberOfChartSet) _Bool memberOfChartSet; // @dynamic memberOfChartSet;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse; // @dynamic previouslyRetrievedNestedResponse;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;
@property(nonatomic) long long sectionType; // @dynamic sectionType;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long uniformContentItemType; // @dynamic uniformContentItemType;

@end

