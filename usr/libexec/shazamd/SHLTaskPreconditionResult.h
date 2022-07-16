//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface SHLTaskPreconditionResult : NSObject
{
    _Bool _satisfied;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)resultWithError:(id)arg1;	// IMP=0x004000000002ca96
+ (id)failedResult;	// IMP=0x001000000002ca69
+ (id)fulfilledResult;	// IMP=0x001000000002ca39
- (void).cxx_destruct;	// IMP=0x002000000002cb6e
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=isSatisfied) _Bool satisfied; // @synthesize satisfied=_satisfied;
- (id)initWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000002cae5

@end
