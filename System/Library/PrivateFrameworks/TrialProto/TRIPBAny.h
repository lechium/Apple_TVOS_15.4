//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface TRIPBAny
{
}

+ (id)descriptor;	// IMP=0x0000000000018a15
+ (id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000024fa3
+ (id)anyWithMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024f87
- (id)unpackMessageClass:(Class)arg1 error:(id *)arg2;	// IMP=0x00000000000251d3
- (_Bool)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002507b
- (_Bool)packWithMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002505f
- (id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025002
- (id)initWithMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024fe6

// Remaining properties
@property(copy, nonatomic) NSString *typeURL; // @dynamic typeURL;
@property(copy, nonatomic) NSData *value; // @dynamic value;

@end

