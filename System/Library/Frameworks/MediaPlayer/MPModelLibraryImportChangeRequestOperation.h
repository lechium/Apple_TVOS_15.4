//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelLibraryImportChangeRequest, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryImportChangeRequestOperation
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    MPModelLibraryImportChangeRequest *_request;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b10b2
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryImportChangeRequest *request; // @synthesize request=_request;
- (void)execute;	// IMP=0x00000000000b07d5

@end

