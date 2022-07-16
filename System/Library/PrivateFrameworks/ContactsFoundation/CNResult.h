//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNEither, NSError;

@interface CNResult : NSObject
{
    CNEither *_either;	// 8 = 0x8
}

+ (CDUnknownBlockType)isFailure;	// IMP=0x0000000000002a73
+ (CDUnknownBlockType)isSuccess;	// IMP=0x0000000000002a51
+ (id)failureWithError:(id)arg1;	// IMP=0x00000000000025cc
+ (id)successWithValue:(id)arg1;	// IMP=0x0000000000002581
+ (id)resultWithFuture:(id)arg1;	// IMP=0x00000000000024f0
+ (id)resultWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002468
+ (id)resultWithValue:(id)arg1 orError:(id)arg2;	// IMP=0x00000000000023fc
- (void).cxx_destruct;	// IMP=0x0000000000002aa9
@property(readonly) CNEither *either; // @synthesize either=_either;
- (id)recover:(CDUnknownBlockType)arg1;	// IMP=0x00000000000029c0
- (id)flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000292f
- (id)valueWithError:(id *)arg1;	// IMP=0x00000000000028bc
@property(readonly) _Bool isFailure;
@property(readonly) _Bool isSuccess;
@property(readonly, copy) NSError *error;
@property(readonly) id value;
- (unsigned long long)hash;	// IMP=0x000000000000284e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000027db
- (id)description;	// IMP=0x00000000000026f8
- (id)initWithError:(id)arg1;	// IMP=0x00000000000026e1
- (id)initWithValue:(id)arg1;	// IMP=0x00000000000026cd
- (id)initWithValue:(id)arg1 error:(id)arg2;	// IMP=0x0000000000002617

@end

