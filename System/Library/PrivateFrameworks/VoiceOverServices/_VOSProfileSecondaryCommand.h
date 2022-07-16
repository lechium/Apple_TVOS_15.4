//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSSecureCoding-Protocol.h>

@class VOSCommand, _VOSProfileCommand;

@interface _VOSProfileSecondaryCommand : NSObject <NSSecureCoding>
{
    VOSCommand *_command;	// 8 = 0x8
    unsigned long long _context;	// 16 = 0x10
    unsigned long long _pressCount;	// 24 = 0x18
    _VOSProfileCommand *_primaryProfileCommand;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c6b1
+ (id)profileSecondaryCommandWithStringValue:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;	// IMP=0x000000000001c4e7
+ (id)profileSecondaryCommandWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;	// IMP=0x000000000001c486
- (void).cxx_destruct;	// IMP=0x000000000001c971
@property(nonatomic) __weak _VOSProfileCommand *primaryProfileCommand; // @synthesize primaryProfileCommand=_primaryProfileCommand;
@property(nonatomic) unsigned long long pressCount; // @synthesize pressCount=_pressCount;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) VOSCommand *command; // @synthesize command=_command;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c7de
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c6b9
- (id)description;	// IMP=0x000000000001c5e2
- (id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;	// IMP=0x000000000001c561

@end

