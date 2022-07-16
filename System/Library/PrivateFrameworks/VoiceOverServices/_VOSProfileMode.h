//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSSecureCoding-Protocol.h>

@class NSMutableSet, VOSScreenreaderMode;

@interface _VOSProfileMode : NSObject <NSSecureCoding>
{
    VOSScreenreaderMode *_mode;	// 8 = 0x8
    NSMutableSet *_commands;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014557
+ (id)profileModeWithStringValue:(id)arg1;	// IMP=0x0000000000014224
+ (id)profileModeWitMode:(id)arg1;	// IMP=0x00000000000141d5
- (void).cxx_destruct;	// IMP=0x00000000000147db
@property(retain, nonatomic) NSMutableSet *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) VOSScreenreaderMode *mode; // @synthesize mode=_mode;
- (void)addCommand:(id)arg1;	// IMP=0x0000000000014743
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000146ae
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001455f
- (id)description;	// IMP=0x0000000000014492
- (id)_initWithMode:(id)arg1 commands:(id)arg2;	// IMP=0x000000000001428a

@end

