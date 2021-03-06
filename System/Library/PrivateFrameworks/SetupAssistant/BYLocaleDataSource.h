//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BYLocaleDataSource : NSObject
{
    _Bool _hasRecommendedLocaleFromLanguage;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSMutableArray *_suggestedCountries;	// 24 = 0x18
    NSMutableArray *_moreCountries;	// 32 = 0x20
}

+ (id)newWithLanguage:(id)arg1;	// IMP=0x0000000000003cc4
- (void).cxx_destruct;	// IMP=0x0000000000004780
@property(retain, nonatomic) NSMutableArray *moreCountries; // @synthesize moreCountries=_moreCountries;
@property(retain, nonatomic) NSMutableArray *suggestedCountries; // @synthesize suggestedCountries=_suggestedCountries;
@property(nonatomic) _Bool hasRecommendedLocaleFromLanguage; // @synthesize hasRecommendedLocaleFromLanguage=_hasRecommendedLocaleFromLanguage;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id)otherLocaleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000004657
- (id)recommendedLocaleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000045f8
- (unsigned long long)numberOfOtherLocales;	// IMP=0x00000000000045b4
- (unsigned long long)numberOfRecommendedLocales;	// IMP=0x0000000000004570
- (void)reloadData;	// IMP=0x0000000000003d12

@end

