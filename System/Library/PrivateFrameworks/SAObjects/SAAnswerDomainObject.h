//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAAnswerDirectAnswer, SAUIAppPunchOut;

@interface SAAnswerDomainObject
{
}

+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c1d4
+ (id)domainObject;	// IMP=0x000000000003c1c2
@property(copy, nonatomic) NSArray *structuredAnswers;
@property(copy, nonatomic) NSArray *linkedAnswerGroups;
@property(retain, nonatomic) SAAnswerDirectAnswer *directAnswer;
@property(copy, nonatomic) NSString *category;
@property(retain, nonatomic) SAUIAppPunchOut *appPunchOut;
- (id)encodedClassName;	// IMP=0x000000000003c1b5
- (id)groupIdentifier;	// IMP=0x000000000003c1a1

@end

