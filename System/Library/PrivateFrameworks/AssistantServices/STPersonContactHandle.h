//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface STPersonContactHandle : NSObject <NSSecureCoding>
{
    NSString *_handle;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000142cb0
- (void).cxx_destruct;	// IMP=0x0000000000142e7b
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000142d3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000142cb8
- (unsigned long long)hash;	// IMP=0x0000000000142c15
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000142bb8
- (_Bool)isEqualToPersonContactHandle:(id)arg1;	// IMP=0x00000000001429e6
- (id)description;	// IMP=0x0000000000142930

@end

