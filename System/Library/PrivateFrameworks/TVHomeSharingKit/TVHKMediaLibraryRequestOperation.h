//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, TVHKAsynchronousWorkToken, TVHKMediaLibraryRequest, TVHKMediaLibraryRequestSession, TVHKMediaLibraryResponse;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryRequestOperation
{
    TVHKMediaLibraryRequest *_request;	// 8 = 0x8
    TVHKMediaLibraryResponse *_response;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    TVHKMediaLibraryRequestSession *_requestSession;	// 32 = 0x20
    TVHKAsynchronousWorkToken *_requestToken;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00000000000a7ce8
- (void).cxx_destruct;	// IMP=0x00000000000a8292
@property(retain, nonatomic) TVHKAsynchronousWorkToken *requestToken; // @synthesize requestToken=_requestToken;
@property(readonly, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaLibraryResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) TVHKMediaLibraryRequest *request; // @synthesize request=_request;
- (void)_handleResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000a812a
- (void)_handleResponse:(id)arg1;	// IMP=0x00000000000a8124
- (void)cancel;	// IMP=0x00000000000a80a6
- (void)executionDidBegin;	// IMP=0x00000000000a7e93
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x00000000000a7d86
- (id)init;	// IMP=0x00000000000a7d17

@end

