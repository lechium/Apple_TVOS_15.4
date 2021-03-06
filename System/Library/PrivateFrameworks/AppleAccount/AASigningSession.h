//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AASigningSession : NSObject
{
    struct NACContextOpaque_ *_context;	// 8 = 0x8
    NSString *_certURL;	// 16 = 0x10
    NSString *_sessionURL;	// 24 = 0x18
    int _error;	// 32 = 0x20
}

+ (id)_badURLError;	// IMP=0x000000000003e046
+ (id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003df7a
- (void).cxx_destruct;	// IMP=0x000000000003e980
@property(readonly, nonatomic) int error; // @synthesize error=_error;
- (void)dealloc;	// IMP=0x000000000003e93d
- (id)signatureForData:(id)arg1;	// IMP=0x000000000003e7d2
- (void)establishSession;	// IMP=0x000000000003e12c
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;	// IMP=0x000000000003e073

@end

