//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, VSOptional;

@interface VSStorefrontCodeLoadOperation
{
    VSOptional *_result;	// 8 = 0x8
    NSOperationQueue *_privateQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000729d
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)executionDidBegin;	// IMP=0x00000000000071b6
- (id)init;	// IMP=0x00000000000070f4

@end

