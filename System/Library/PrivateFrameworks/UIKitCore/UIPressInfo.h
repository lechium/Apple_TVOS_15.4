//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIKey;

@interface UIPressInfo : NSObject
{
    _Bool _longClick;	// 8 = 0x8
    unsigned int _contextID;	// 12 = 0xc
    double _timestamp;	// 16 = 0x10
    long long _phase;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    unsigned long long _source;	// 40 = 0x28
    unsigned long long _gameControllerComponent;	// 48 = 0x30
    double _force;	// 56 = 0x38
    unsigned long long _clickCount;	// 64 = 0x40
    UIKey *_key;	// 72 = 0x48
    long long _modifierFlags;	// 80 = 0x50
}

+ (id)_keyboardPressInfoForType:(long long)arg1 isKeyDown:(_Bool)arg2 timestamp:(double)arg3 contextID:(unsigned int)arg4 modifierFlags:(long long)arg5;	// IMP=0x0000000000be4e77
- (void).cxx_destruct;	// IMP=0x0000000000be502f
@property(nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(retain, nonatomic) UIKey *key; // @synthesize key=_key;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(nonatomic, getter=isLongClick) _Bool longClick; // @synthesize longClick=_longClick;
@property(nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) unsigned long long gameControllerComponent; // @synthesize gameControllerComponent=_gameControllerComponent;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)_sourceDescription;	// IMP=0x0000000000be4e39
- (id)description;	// IMP=0x0000000000be4d52
- (id)init;	// IMP=0x0000000000be4d16

@end

