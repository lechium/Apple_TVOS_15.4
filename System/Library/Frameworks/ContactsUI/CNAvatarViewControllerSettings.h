//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, PRPersonaStore;

@interface CNAvatarViewControllerSettings : NSObject
{
    _Bool _threeDTouchEnabled;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    PRPersonaStore *_personaStore;	// 24 = 0x18
}

+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(_Bool)arg3;	// IMP=0x00000000000cb860
+ (id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(_Bool)arg2;	// IMP=0x00000000000cb858
+ (id)settingsWithContactStore:(id)arg1;	// IMP=0x00000000000cb7f0
+ (id)defaultSettings;	// IMP=0x00000000000cb769
+ (_Bool)threeDTouchEnabledDefaultValue;	// IMP=0x00000000000cb761
- (void).cxx_destruct;	// IMP=0x00000000000cb9cb
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(nonatomic) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(_Bool)arg3;	// IMP=0x00000000000cb8df

@end

