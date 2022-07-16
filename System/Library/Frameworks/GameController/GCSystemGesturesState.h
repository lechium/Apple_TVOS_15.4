//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface GCSystemGesturesState : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSSet *_disabledSystemGestureInputNames;	// 16 = 0x10
    NSSet *_enabledSystemGestureInputNames;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008fcff
- (void).cxx_destruct;	// IMP=0x000000000008fccc
@property(retain, nonatomic) NSSet *enabledSystemGestureInputNames; // @synthesize enabledSystemGestureInputNames=_enabledSystemGestureInputNames;
@property(retain, nonatomic) NSSet *disabledSystemGestureInputNames; // @synthesize disabledSystemGestureInputNames=_disabledSystemGestureInputNames;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x000000000008fc2c
- (id)initWithEnabledSystemGestures:(id)arg1 disabledSystemGestures:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000000008fb75
- (id)init;	// IMP=0x000000000008fb0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008fe86
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008fd07

@end

