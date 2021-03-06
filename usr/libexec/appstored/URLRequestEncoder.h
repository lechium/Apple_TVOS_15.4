//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@class NSString, URLRequestProperties;

@interface URLRequestEncoder : AMSURLRequestEncoder
{
    URLRequestProperties *_requestProperties;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007700c
@property(readonly, copy) URLRequestProperties *requestProperties; // @synthesize requestProperties=_requestProperties;
- (void)_configureUsingRequestProperties;	// IMP=0x0010000000076e41
- (void)_addKBSyncDataToRequestParameters:(id)arg1;	// IMP=0x0010000000076bd2
- (void)_addGUIDToRequestParameters:(id)arg1;	// IMP=0x0010000000076b47
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;	// IMP=0x001000000007696e
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x00100000000768b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

