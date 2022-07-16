//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;

@interface TPSContextualRule
{
    NSDate *_matchedDate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSArray *_eventIdentifiers;	// 24 = 0x18
}

+ (id)eventsForRuleDictionary:(id)arg1;	// IMP=0x0000000000055041
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000055039
- (void).cxx_destruct;	// IMP=0x000000000005598f
@property(copy, nonatomic) NSArray *eventIdentifiers; // @synthesize eventIdentifiers=_eventIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDate *matchedDate; // @synthesize matchedDate=_matchedDate;
- (id)debugDescription;	// IMP=0x00000000000557f1
- (void)restartTracking;	// IMP=0x00000000000557d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055742
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055688
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000554d7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000055183

@end

