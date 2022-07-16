//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMIDI/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding>
{
    unsigned char midiChannel;	// 8 = 0x8
    NSArray *enabledProfiles;	// 16 = 0x10
    NSArray *disabledProfiles;	// 24 = 0x18
}

+ (id)description;	// IMP=0x0000000000007a2b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007a23
- (void).cxx_destruct;	// IMP=0x00000000000079fb
@property(readonly, nonatomic) NSArray *disabledProfiles; // @synthesize disabledProfiles;
@property(readonly, nonatomic) NSArray *enabledProfiles; // @synthesize enabledProfiles;
@property(readonly, nonatomic) unsigned char midiChannel; // @synthesize midiChannel;
- (id)bytesWithChannel:(unsigned char)arg1;	// IMP=0x0000000000007647
- (void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;	// IMP=0x00000000000075db
- (id)description;	// IMP=0x0000000000007587
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000074f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000072b1
- (void)dealloc;	// IMP=0x0000000000007282
- (id)initWithChannel:(unsigned char)arg1 enabledProfiles:(id)arg2 disabledProfiles:(id)arg3;	// IMP=0x00000000000071c0
- (id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;	// IMP=0x00000000000071b2

@end

