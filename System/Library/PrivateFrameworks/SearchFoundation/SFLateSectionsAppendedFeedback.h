//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface SFLateSectionsAppendedFeedback <NSCopying>
{
    NSArray *_sections;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d2705
- (void).cxx_destruct;	// IMP=0x00000000001d26f2
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d2653
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d2547
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d24d9
- (id)initWithSections:(id)arg1;	// IMP=0x00000000001d23d7

@end
