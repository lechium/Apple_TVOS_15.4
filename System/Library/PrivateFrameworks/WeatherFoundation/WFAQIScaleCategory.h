//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_categoryName;	// 8 = 0x8
    NSString *_color;	// 16 = 0x10
    NSString *_glyph;	// 24 = 0x18
    NSString *_recommendation;	// 32 = 0x20
    unsigned long long _categoryNumber;	// 40 = 0x28
    unsigned long long _categoryIndex;	// 48 = 0x30
    NSString *_localizedCategoryDescription;	// 56 = 0x38
    struct _NSRange _range;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000482e9
- (void).cxx_destruct;	// IMP=0x0000000000048a71
@property(copy, nonatomic) NSString *localizedCategoryDescription; // @synthesize localizedCategoryDescription=_localizedCategoryDescription;
@property(nonatomic) unsigned long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long categoryNumber; // @synthesize categoryNumber=_categoryNumber;
@property(copy, nonatomic) NSString *recommendation; // @synthesize recommendation=_recommendation;
@property(copy, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)debugDescription;	// IMP=0x0000000000048881
- (id)description;	// IMP=0x0000000000048781
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004856e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000482f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048170
- (_Bool)isEqualToScaleCategory:(id)arg1;	// IMP=0x0000000000048017
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047fb4
- (id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2;	// IMP=0x0000000000047f36

@end

