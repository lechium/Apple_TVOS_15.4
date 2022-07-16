//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/NSCopying-Protocol.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying>
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

+ (id)tertiarySystemGroupedBackgroundColor;	// IMP=0x000000000003da13
+ (id)secondarySystemGroupedBackgroundColor;	// IMP=0x000000000003d9fa
+ (id)systemGroupedBackgroundColor;	// IMP=0x000000000003d9e1
+ (id)tertiarySystemBackgroundColor;	// IMP=0x000000000003d9c8
+ (id)secondarySystemBackgroundColor;	// IMP=0x000000000003d9af
+ (id)systemBackgroundColor;	// IMP=0x000000000003d996
+ (id)tableViewAppearance;	// IMP=0x000000000003d69f
+ (id)defaultAppearance;	// IMP=0x000000000003d631
- (void).cxx_destruct;	// IMP=0x000000000003da47
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)updateBackgroundColorWithJSString:(id)arg1;	// IMP=0x000000000003d70d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d5ec

@end
