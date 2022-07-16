//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface BPSFutureResult : NSObject
{
    long long _state;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)failureWithError:(id)arg1;	// IMP=0x000000000002e5d6
+ (id)successWithValue:(id)arg1;	// IMP=0x000000000002e588
- (void).cxx_destruct;	// IMP=0x000000000002e644
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3;	// IMP=0x000000000002e4e3

@end

