//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICLibraryAuthServiceClientTokenResponse, ICStoreRequestContext;

@interface ICLibraryAuthServiceClientTokenRequest
{
    ICStoreRequestContext *_storeRequestContext;	// 8 = 0x8
    ICLibraryAuthServiceClientTokenResponse *_response;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005c1d7
- (void)execute;	// IMP=0x000000000005c147
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c0b5
- (id)initWithStoreRequestContext:(id)arg1;	// IMP=0x000000000005c047

@end
