//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class NSString;

@interface GCReplayKitGestureSettings : NSObject <NSSecureCoding>
{
    NSString *_controllerElementMappingKey;	// 8 = 0x8
    long long _singlePressGesture;	// 16 = 0x10
    long long _doublePressGesture;	// 24 = 0x18
    long long _longPressGesture;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008416a
- (void).cxx_destruct;	// IMP=0x000000000008415a
@property(nonatomic) long long longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) long long doublePressGesture; // @synthesize doublePressGesture=_doublePressGesture;
@property(nonatomic) long long singlePressGesture; // @synthesize singlePressGesture=_singlePressGesture;
@property(retain, nonatomic) NSString *controllerElementMappingKey; // @synthesize controllerElementMappingKey=_controllerElementMappingKey;
- (id)description;	// IMP=0x00000000000840c1
- (long long)gestureTypeForGestureMode:(long long)arg1;	// IMP=0x0000000000084097
- (void)setGestureMode:(long long)arg1 forGestureType:(long long)arg2;	// IMP=0x000000000008407c
- (long long)gestureModeForGestureType:(long long)arg1;	// IMP=0x000000000008405a
- (id)init;	// IMP=0x0000000000084015
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000842ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000084256
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000084172

@end
