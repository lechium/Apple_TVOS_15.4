//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGQuickResponsesRecords : NSObject
{
    NSArray *_replyRecords;	// 8 = 0x8
    double _totalOpportunities;	// 16 = 0x10
    double _totalDisplayed;	// 24 = 0x18
    double _totalSelected;	// 32 = 0x20
    double _totalMatched;	// 40 = 0x28
    double _totalUnmatched;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000021552
@property(readonly, nonatomic) double totalUnmatched; // @synthesize totalUnmatched=_totalUnmatched;
@property(readonly, nonatomic) double totalMatched; // @synthesize totalMatched=_totalMatched;
@property(readonly, nonatomic) double totalSelected; // @synthesize totalSelected=_totalSelected;
@property(readonly, nonatomic) double totalDisplayed; // @synthesize totalDisplayed=_totalDisplayed;
@property(readonly, nonatomic) double totalOpportunities; // @synthesize totalOpportunities=_totalOpportunities;
@property(readonly, nonatomic) NSArray *replyRecords; // @synthesize replyRecords=_replyRecords;
- (id)initWithReplyRecords:(id)arg1 totalOpportunities:(double)arg2 totalDisplayed:(double)arg3 totalSelected:(double)arg4 totalMatched:(double)arg5 totalUnmatched:(double)arg6;	// IMP=0x00000000000211da

@end
