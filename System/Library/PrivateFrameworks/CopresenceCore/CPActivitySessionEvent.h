//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface CPActivitySessionEvent : NSObject <NSSecureCoding>
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *item;	// 16 = 0x10
    MISSING_TYPE *originatorID;	// 32 = 0x20
    MISSING_TYPE *queueItemType;	// 40 = 0x28
    MISSING_TYPE *url;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000eb9e0
- (void).cxx_destruct;	// IMP=0x00000000000ec010
- (id)init;	// IMP=0x00000000000ebfb0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ebf10
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ebd40
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eb7c0

@end

