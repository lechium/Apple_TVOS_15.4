//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface ASCLockupBatchRequest : NSObject
{
    NSSet *_ids;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000a243
+ (id)lockupBatchRequestsFromRequests:(id)arg1;	// IMP=0x0010000000009a8e
- (void).cxx_destruct;	// IMP=0x002000000000af12
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSSet *ids; // @synthesize ids=_ids;
- (id)lockupBatchRequestWithIDs:(id)arg1;	// IMP=0x001000000000ae0b
@property(readonly, copy, nonatomic) NSArray *requests;
- (id)description;	// IMP=0x001000000000a9a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000a69b
- (unsigned long long)hash;	// IMP=0x001000000000a58d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000a582
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000a46a
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000a24b
- (id)_initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;	// IMP=0x001000000000a1cd
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;	// IMP=0x001000000000a0e7

@end

