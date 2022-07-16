//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TIKeyboardActivityContext : NSObject
{
    unsigned long long _fromState;	// 8 = 0x8
    unsigned long long _toState;	// 16 = 0x10
    unsigned long long _excessMemoryInBytes;	// 24 = 0x18
}

+ (id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x000000000009cce4
@property(nonatomic) unsigned long long excessMemoryInBytes; // @synthesize excessMemoryInBytes=_excessMemoryInBytes;
@property(nonatomic) unsigned long long toState; // @synthesize toState=_toState;
@property(nonatomic) unsigned long long fromState; // @synthesize fromState=_fromState;

@end

