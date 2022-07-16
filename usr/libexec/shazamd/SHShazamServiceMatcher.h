//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISO8601DateFormatter, NSString, SHShazamServiceCatalog;
@protocol SHMatcherDelegate, SHNetworkRecognitionRequester;

__attribute__((visibility("hidden")))
@interface SHShazamServiceMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    NSISO8601DateFormatter *_iso8601Formatter;	// 16 = 0x10
    SHShazamServiceCatalog *_catalog;	// 24 = 0x18
    id <SHNetworkRecognitionRequester> _networkRequester;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000005ccd
@property(retain, nonatomic) id <SHNetworkRecognitionRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
@property(retain, nonatomic) SHShazamServiceCatalog *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (id)buildURLForSignature:(id)arg1 endpoint:(id)arg2;	// IMP=0x0010000000005bbd
- (id)partnerURLRequestForSignature:(id)arg1 endpoint:(id)arg2;	// IMP=0x001000000000579d
- (void)matchSignature:(id)arg1 tokenizedURL:(id)arg2;	// IMP=0x0010000000005372
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x00100000000050e0
- (void)responseForServerData:(id)arg1 signature:(id)arg2;	// IMP=0x0010000000004d7d
@property(readonly, nonatomic) NSISO8601DateFormatter *iso8601Formatter; // @synthesize iso8601Formatter=_iso8601Formatter;
- (id)initWithCatalog:(id)arg1 recognitionRequester:(id)arg2;	// IMP=0x0010000000004c93
- (id)initWithCatalog:(id)arg1;	// IMP=0x0010000000004bdf
- (void)dealloc;	// IMP=0x0010000000004b9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

