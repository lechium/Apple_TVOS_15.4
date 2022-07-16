//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, SAUIImageResource;

@interface SAUIAlternateProviderResult
{
}

+ (id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003d7c5
+ (id)alternateProviderResult;	// IMP=0x000000000003d7b3
@property(copy, nonatomic) NSString *providerName;
@property(retain, nonatomic) SAUIImageResource *providerImage;
@property(copy, nonatomic) NSNumber *numberOfResults;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;	// IMP=0x000000000003d7a6
- (id)groupIdentifier;	// IMP=0x000000000003d792

@end
