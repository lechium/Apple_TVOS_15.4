//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSURLSessionTask;

@interface WFCloudKitWebServiceTask
{
    NSURLSessionTask *_dataTask;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000198358
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionTask *dataTask; // @synthesize dataTask=_dataTask;
- (void)cancel;	// IMP=0x000000000019826d
- (id)init;	// IMP=0x00000000001981f0

@end
