//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SFVisibleSuggestionsFeedback
{
    NSArray *_suggestions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a5518
- (void).cxx_destruct;	// IMP=0x00000000001a5505
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a5466
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a5374
- (id)initWithSuggestions:(id)arg1;	// IMP=0x00000000001a52fa

@end

