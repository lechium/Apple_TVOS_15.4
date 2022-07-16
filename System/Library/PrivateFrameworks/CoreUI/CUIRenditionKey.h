//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCoding-Protocol.h>
#import <CoreUI/NSCopying-Protocol.h>

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding>
{
    struct _renditionkeytoken _stackKey[22];	// 8 = 0x8
    struct _renditionkeytoken *_key;	// 96 = 0x60
    unsigned short _highwaterKeyCount;	// 104 = 0x68
}

+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000056501
+ (id)renditionKey;	// IMP=0x00000000000564e8
+ (void)initialize;	// IMP=0x00000000000564ac
- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt *)arg1;	// IMP=0x0000000000057740
- (id)nameOfAttributeName:(int)arg1;	// IMP=0x00000000000575d6
- (id)description;	// IMP=0x00000000000573b9
@property(nonatomic) long long themeGlyphWeight;
@property(nonatomic) long long themeGlyphSize;
@property(nonatomic) long long themeDeploymentTarget;
@property(nonatomic) long long themeDisplayGamut;
@property(nonatomic) long long themeLocalization;
@property(nonatomic) long long themeAppearance;
@property(nonatomic) long long themeIdentifier;
@property(nonatomic) long long themeGraphicsClass;
@property(nonatomic) long long themeMemoryClass;
@property(nonatomic) long long themeSizeClassVertical;
@property(nonatomic) long long themeSizeClassHorizontal;
@property(nonatomic) long long themeSubtype;
@property(nonatomic) long long themeIdiom;
@property(nonatomic) long long themeScale;
@property(nonatomic) long long themeLayer;
@property(nonatomic) long long themePresentationState;
@property(nonatomic) long long themePreviousState;
@property(nonatomic) long long themeState;
@property(nonatomic) long long themeDimension2;
@property(nonatomic) long long themeDimension1;
@property(nonatomic) long long themePreviousValue;
@property(nonatomic) long long themeValue;
@property(nonatomic) long long themeDirection;
@property(nonatomic) long long themeSize;
@property(nonatomic) long long themePart;
@property(nonatomic) long long themeElement;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12;	// IMP=0x0000000000056bbf
- (const struct _renditionkeytoken *)keyList;	// IMP=0x0000000000056baa
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;	// IMP=0x0000000000056b7b
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000056b01
- (void)setValuesFromKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000569f7
- (void)dealloc;	// IMP=0x00000000000569b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056964
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056822
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056668
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000565c3
- (id)init;	// IMP=0x000000000005659e

@end

