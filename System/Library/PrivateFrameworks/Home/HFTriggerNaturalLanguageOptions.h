//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFActionNaturalLanguageOptions, HMHome, HMUser, NSArray, NSSet;

@interface HFTriggerNaturalLanguageOptions
{
    _Bool _shouldUseFullDayNames;	// 8 = 0x8
    _Bool _shouldUseFirstPersonPronounIfPossible;	// 9 = 0x9
    HMHome *_home;	// 16 = 0x10
    NSArray *_actions;	// 24 = 0x18
    unsigned long long _nameType;	// 32 = 0x20
    long long _formattingStyle;	// 40 = 0x28
    HMUser *_locationEventUser;	// 48 = 0x30
    HFActionNaturalLanguageOptions *_actionNaturalLanguageOptions;	// 56 = 0x38
    NSSet *_objectsInContext;	// 64 = 0x40
}

+ (id)optionsWithHome:(id)arg1 nameType:(unsigned long long)arg2;	// IMP=0x00000000000f7d43
- (void).cxx_destruct;	// IMP=0x00000000000f8198
@property(retain, nonatomic) NSSet *objectsInContext; // @synthesize objectsInContext=_objectsInContext;
@property(retain, nonatomic) HFActionNaturalLanguageOptions *actionNaturalLanguageOptions; // @synthesize actionNaturalLanguageOptions=_actionNaturalLanguageOptions;
@property(nonatomic) __weak HMUser *locationEventUser; // @synthesize locationEventUser=_locationEventUser;
@property(nonatomic) long long formattingStyle; // @synthesize formattingStyle=_formattingStyle;
@property(nonatomic) _Bool shouldUseFirstPersonPronounIfPossible; // @synthesize shouldUseFirstPersonPronounIfPossible=_shouldUseFirstPersonPronounIfPossible;
@property(nonatomic) _Bool shouldUseFullDayNames; // @synthesize shouldUseFullDayNames=_shouldUseFullDayNames;
@property(nonatomic) unsigned long long nameType; // @synthesize nameType=_nameType;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)_copyFromOptions:(id)arg1;	// IMP=0x00000000000f7ded
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7d9f
- (id)initWithHome:(id)arg1 nameType:(unsigned long long)arg2 actions:(id)arg3;	// IMP=0x00000000000f7be7
- (id)initWithHome:(id)arg1 nameType:(unsigned long long)arg2;	// IMP=0x00000000000f7bd2

@end
