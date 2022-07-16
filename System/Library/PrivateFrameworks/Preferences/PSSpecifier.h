//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface PSSpecifier : NSObject
{
    id target;	// 8 = 0x8
    SEL getter;	// 16 = 0x10
    SEL setter;	// 24 = 0x18
    SEL action;	// 32 = 0x20
    SEL cancel;	// 40 = 0x28
    Class detailControllerClass;	// 48 = 0x30
    long long cellType;	// 56 = 0x38
    Class editPaneClass;	// 64 = 0x40
    long long keyboardType;	// 72 = 0x48
    long long autoCapsType;	// 80 = 0x50
    long long autoCorrectionType;	// 88 = 0x58
    unsigned long long textFieldType;	// 96 = 0x60
    NSString *_name;	// 104 = 0x68
    NSArray *_values;	// 112 = 0x70
    NSDictionary *_titleDict;	// 120 = 0x78
    NSDictionary *_shortTitleDict;	// 128 = 0x80
    id _userInfo;	// 136 = 0x88
    NSMutableDictionary *_properties;	// 144 = 0x90
    SEL _confirmationAction;	// 152 = 0x98
    SEL _confirmationCancelAction;	// 160 = 0xa0
    SEL _buttonAction;	// 168 = 0xa8
    SEL _controllerLoadAction;	// 176 = 0xb0
    _Bool _showContentString;	// 184 = 0xb8
    SEL _confirmationAlternateAction;	// 192 = 0xc0
    id _weakUserInfo;	// 200 = 0xc8
}

+ (long long)keyboardTypeForString:(id)arg1;	// IMP=0x000000000002a61c
+ (long long)autoCapsTypeForString:(id)arg1;	// IMP=0x000000000002a58d
+ (long long)autoCorrectionTypeForNumber:(id)arg1;	// IMP=0x000000000002a569
+ (id)specifierWithSpecifier:(id)arg1;	// IMP=0x000000000002837d
+ (id)groupSpecifierWithID:(id)arg1 name:(id)arg2;	// IMP=0x0000000000028309
+ (id)groupSpecifierWithID:(id)arg1;	// IMP=0x00000000000282f5
+ (id)emptyGroupSpecifier;	// IMP=0x00000000000282e1
+ (id)groupSpecifierWithName:(id)arg1;	// IMP=0x00000000000282a7
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;	// IMP=0x00000000000281ed
+ (id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000083861
- (void).cxx_destruct;	// IMP=0x000000000002adeb
@property(nonatomic) _Bool showContentString; // @synthesize showContentString=_showContentString;
@property(nonatomic) __weak id weakUserInfo; // @synthesize weakUserInfo=_weakUserInfo;
@property(nonatomic) SEL controllerLoadAction; // @synthesize controllerLoadAction=_controllerLoadAction;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) SEL confirmationCancelAction; // @synthesize confirmationCancelAction=_confirmationCancelAction;
@property(nonatomic) SEL confirmationAlternateAction; // @synthesize confirmationAlternateAction=_confirmationAlternateAction;
@property(nonatomic) SEL confirmationAction; // @synthesize confirmationAction=_confirmationAction;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDictionary *shortTitleDictionary; // @synthesize shortTitleDictionary=_shortTitleDict;
@property(retain, nonatomic) NSDictionary *titleDictionary; // @synthesize titleDictionary=_titleDict;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) Class editPaneClass; // @synthesize editPaneClass;
@property(nonatomic) long long cellType; // @synthesize cellType;
@property(nonatomic) Class detailControllerClass; // @synthesize detailControllerClass;
@property(nonatomic) __weak id target; // @synthesize target;
- (_Bool)isEqualToSpecifier:(id)arg1;	// IMP=0x000000000002a87c
- (long long)titleCompare:(id)arg1;	// IMP=0x000000000002a7eb
- (void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3;	// IMP=0x000000000002a7d1
@property(retain, nonatomic) NSString *identifier;
- (id)description;	// IMP=0x000000000002a3c2
- (void)setupIconImageWithPath:(id)arg1;	// IMP=0x0000000000029e7e
- (void)setupIconImageWithBundle:(id)arg1;	// IMP=0x0000000000029b4e
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(_Bool)arg4;	// IMP=0x0000000000029622
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;	// IMP=0x00000000000294c9
- (void)setValues:(id)arg1 titles:(id)arg2;	// IMP=0x00000000000294b4
- (void)loadValuesAndTitlesFromDataSource;	// IMP=0x00000000000292fc
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000000292ea
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000292d8
- (void)performConfirmationCancelAction;	// IMP=0x000000000002915c
- (void)performConfirmationAlternateAction;	// IMP=0x0000000000028fe0
- (void)performConfirmationAction;	// IMP=0x0000000000028e64
- (void)performButtonAction;	// IMP=0x0000000000028ce8
- (void)performControllerLoadAction;	// IMP=0x0000000000028b6c
- (SEL)legacyCancel;	// IMP=0x0000000000028b62
- (void)setLegacyCancel:(SEL)arg1;	// IMP=0x0000000000028b58
- (SEL)legacyAction;	// IMP=0x0000000000028b4e
- (void)setLegacyAction:(SEL)arg1;	// IMP=0x0000000000028b44
- (void)performLegacyAction;	// IMP=0x00000000000289d4
- (id)performGetter;	// IMP=0x00000000000288cb
- (_Bool)hasValidGetter;	// IMP=0x0000000000028864
- (void)performSetterWithValue:(id)arg1;	// IMP=0x000000000002874e
- (_Bool)hasValidSetter;	// IMP=0x00000000000286e7
- (id)properties;	// IMP=0x00000000000286d6
- (void)setProperties:(id)arg1;	// IMP=0x00000000000286a3
- (void)removePropertyForKey:(id)arg1;	// IMP=0x000000000002868a
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002866a
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000028651
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;	// IMP=0x00000000000280f6
- (id)init;	// IMP=0x000000000002808b
- (void)_addLinkSpec:(id)arg1;	// IMP=0x0000000000080462
- (void)addFooterHyperlinkWithRange:(struct _NSRange)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000008040f
- (void)addFooterHyperlinkWithRange:(struct _NSRange)arg1 url:(id)arg2;	// IMP=0x00000000000803bc

@end

