//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAUIAppPunchOut;

@interface SAUSSection
{
}

+ (id)sectionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003135c
+ (id)section;	// IMP=0x000000000003134a
@property(copy, nonatomic) NSString *sectionTitle;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSArray *genericResults;
@property(copy, nonatomic) NSArray *cardResults;
- (id)encodedClassName;	// IMP=0x000000000003133d
- (id)groupIdentifier;	// IMP=0x0000000000031329

@end

