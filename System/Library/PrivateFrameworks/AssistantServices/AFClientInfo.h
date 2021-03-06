//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _processIdentifier;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000166c50
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000166fa2
- (void).cxx_destruct;	// IMP=0x0000000000166de1
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000166d2e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000166c58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000166c45
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000166b76
- (unsigned long long)hash;	// IMP=0x0000000000166b03
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000016693d
- (id)description;	// IMP=0x0000000000166929
- (id)initWithProcessIdentifier:(int)arg1 processName:(id)arg2;	// IMP=0x00000000001668ab
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000167011

@end

