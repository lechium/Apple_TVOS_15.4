//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNVCardConstantsMapping : NSObject
{
    NSDictionary *_mapping;	// 8 = 0x8
}

+ (id)vCardToCNSocialProfileConstantsMapping;	// IMP=0x00000000000c78c9
+ (id)CNToVCardSocialProfileConstantsMapping;	// IMP=0x00000000000c772b
+ (id)vCardToCNInstantMessageConstantsMapping;	// IMP=0x00000000000c7668
+ (id)CNToVCardInstantMessageConstantsMapping;	// IMP=0x00000000000c7470
- (void).cxx_destruct;	// IMP=0x00000000000c7ce9
@property(retain, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (id)mappedConstant:(id)arg1;	// IMP=0x00000000000c7c3a
- (id)invertedMapping;	// IMP=0x00000000000c79ff
- (id)initWithMapping:(id)arg1;	// IMP=0x00000000000c798c

@end
