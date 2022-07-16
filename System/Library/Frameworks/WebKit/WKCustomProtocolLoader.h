//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSURLConnectionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>
{
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter> _customProtocolManagerProxy;	// 8 = 0x8
    ObjectIdentifier_93c10595 _customProtocolID;	// 16 = 0x10
    unsigned long long _storagePolicy;	// 24 = 0x18
    struct RetainPtr<NSURLConnection> _urlConnection;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000002c7d00
- (void).cxx_destruct;	// IMP=0x00000000002c7cb2
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000000002c7c48
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000000002c7b34
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000000002c7aa8
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000002c7a10
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;	// IMP=0x00000000002c79e7
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000002c78e8
- (void)cancel;	// IMP=0x00000000002c78a4
- (void)dealloc;	// IMP=0x00000000002c7862
- (id)initWithLegacyCustomProtocolManagerProxy:(void *)arg1 customProtocolID:(ObjectIdentifier_93c10595)arg2 request:(id)arg3;	// IMP=0x00000000002c7740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

