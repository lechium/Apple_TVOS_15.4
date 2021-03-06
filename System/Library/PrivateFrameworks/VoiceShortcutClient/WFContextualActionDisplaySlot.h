//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFContextualActionDisplaySlot : NSObject <NSSecureCoding>
{
    unsigned long long _type;	// 8 = 0x8
    unsigned long long _parameterIndex;	// 16 = 0x10
    NSString *_string;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025005
- (void).cxx_destruct;	// IMP=0x0000000000024ff5
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) unsigned long long parameterIndex; // @synthesize parameterIndex=_parameterIndex;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024f17
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024e53
- (id)initWithType:(unsigned long long)arg1 parameterIndex:(unsigned long long)arg2 string:(id)arg3;	// IMP=0x0000000000024cef

@end

