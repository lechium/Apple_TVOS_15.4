//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface BPSCompletion : NSObject
{
    long long _state;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)failureWithError:(id)arg1;	// IMP=0x0000000000015449
+ (id)success;	// IMP=0x0000000000015423
- (void).cxx_destruct;	// IMP=0x0000000000015554
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)description;	// IMP=0x0000000000015497
- (id)initWithState:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000153ad
- (id)init;	// IMP=0x00000000000153a7

@end

