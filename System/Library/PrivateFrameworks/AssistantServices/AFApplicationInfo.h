//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFApplicationInfo : NSObject <NSSecureCoding>
{
    int _pid;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015f9e5
- (void).cxx_destruct;	// IMP=0x000000000015fc9f
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000015fbea
- (unsigned long long)hash;	// IMP=0x000000000015fbc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015fb0f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015fa5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015f9ed

@end

