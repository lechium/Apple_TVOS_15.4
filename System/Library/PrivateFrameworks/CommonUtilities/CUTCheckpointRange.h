//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CUTCheckpointRange
{
    _Bool _ordered;	// 56 = 0x38
    NSDate *_startDate;	// 64 = 0x40
    NSDate *_endDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000433d
@property(nonatomic, getter=isOrdered) _Bool ordered; // @synthesize ordered=_ordered;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x00000000000041df
- (id)_reportEndDate;	// IMP=0x00000000000041cd
- (id)_reportStartDate;	// IMP=0x00000000000041bb
- (void)mergeWithCheckpoint:(id)arg1;	// IMP=0x0000000000004109
- (void)_touchEndDate;	// IMP=0x0000000000003ee0
- (void)_touchStartDate;	// IMP=0x0000000000003e8d
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;	// IMP=0x0000000000003dcb
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;	// IMP=0x0000000000003daf

@end

