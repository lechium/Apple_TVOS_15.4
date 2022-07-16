//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface _AAURLSessionOperation : NSObject
{
    NSMutableData *_mutableData;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

+ (id)operationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003b27
- (void).cxx_destruct;	// IMP=0x0000000000003d8b
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000000003c8c
- (void)appendData:(id)arg1;	// IMP=0x0000000000003c43
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003b9b
- (id)init;	// IMP=0x0000000000003b70

@end
