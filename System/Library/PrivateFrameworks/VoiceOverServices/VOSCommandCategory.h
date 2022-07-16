//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VOSCommandCategory : NSObject
{
    NSArray *_commands;	// 8 = 0x8
    NSString *_localizedCategoryName;	// 16 = 0x10
}

+ (_Bool)categories:(id)arg1 containsCommand:(id)arg2;	// IMP=0x0000000000014012
+ (id)brailleScreenInput;	// IMP=0x00000000000139c5
+ (id)handwriting;	// IMP=0x000000000001371b
+ (id)allCategories;	// IMP=0x0000000000013432
+ (id)internalOnly;	// IMP=0x00000000000133df
+ (id)other;	// IMP=0x00000000000132cc
+ (id)system;	// IMP=0x0000000000012f65
+ (id)voiceOverFeatures;	// IMP=0x0000000000012c28
+ (id)scrolling;	// IMP=0x0000000000012ac0
+ (id)rotor;	// IMP=0x0000000000012958
+ (id)output;	// IMP=0x0000000000012473
+ (id)speechAndAudio;	// IMP=0x00000000000122ec
+ (id)advancedNavigation;	// IMP=0x0000000000011cf2
+ (id)editing;	// IMP=0x0000000000011b6b
+ (id)textNavigation;	// IMP=0x00000000000115a0
+ (id)basicNavigation;	// IMP=0x00000000000111e6
+ (id)interaction;	// IMP=0x000000000001105f
- (void).cxx_destruct;	// IMP=0x00000000000141ad
@property(retain, nonatomic) NSString *localizedCategoryName; // @synthesize localizedCategoryName=_localizedCategoryName;
@property(retain, nonatomic) NSArray *commands; // @synthesize commands=_commands;
- (_Bool)containsCommand:(id)arg1;	// IMP=0x0000000000013f9b
- (id)init;	// IMP=0x0000000000013f3a
- (id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2;	// IMP=0x0000000000013ddf

@end
