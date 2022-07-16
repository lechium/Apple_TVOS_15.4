//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TIKeyboardKeyBehaviors : NSObject
{
    unsigned long long _spaceKeyBehavior;	// 8 = 0x8
    unsigned long long _returnKeyBehavior;	// 16 = 0x10
    unsigned long long _tabKeyBehavior;	// 24 = 0x18
}

+ (id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 forTabKey:(unsigned long long)arg3;	// IMP=0x0000000000024921
+ (id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2;	// IMP=0x0000000000024909
@property(nonatomic) unsigned long long tabKeyBehavior; // @synthesize tabKeyBehavior=_tabKeyBehavior;
@property(nonatomic) unsigned long long returnKeyBehavior; // @synthesize returnKeyBehavior=_returnKeyBehavior;
@property(nonatomic) unsigned long long spaceKeyBehavior; // @synthesize spaceKeyBehavior=_spaceKeyBehavior;
- (id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2 tabKeyBehavior:(unsigned long long)arg3;	// IMP=0x0000000000024841

@end
