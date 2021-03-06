//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback <NSCopying>
{
    NSArray *_results;	// 24 = 0x18
    SFResultSection *_section;	// 32 = 0x20
    unsigned long long _localSectionPosition;	// 40 = 0x28
    double _personalizationScore;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000180533
- (void).cxx_destruct;	// IMP=0x0000000000180502
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned long long localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property(copy, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000180399
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000180220
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001801b7
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned long long)arg3 personalizationScore:(double)arg4;	// IMP=0x00000000001800cd

@end

