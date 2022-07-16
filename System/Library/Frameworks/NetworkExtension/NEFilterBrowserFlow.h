//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSURL, NSURLRequest, NSURLResponse;

@interface NEFilterBrowserFlow <NSSecureCoding, NSCopying>
{
    NSURLRequest *_request;	// 136 = 0x88
    NSURLResponse *_response;	// 144 = 0x90
    NSURL *_parentURL;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005dd8d
- (void).cxx_destruct;	// IMP=0x000000000005f4d1
@property(retain) NSURL *parentURL; // @synthesize parentURL=_parentURL;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
- (_Bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;	// IMP=0x000000000005f363
- (_Bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;	// IMP=0x000000000005f25f
- (_Bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;	// IMP=0x000000000005ef30
- (void)writeCurrentVerdictInReply:(id)arg1 direction:(long long)arg2;	// IMP=0x000000000005ee14
- (_Bool)createDropReply:(id)arg1 verdict:(id)arg2 context:(id)arg3;	// IMP=0x000000000005e97b
- (id)sanitizeRemediationButtonText:(id)arg1;	// IMP=0x000000000005e8ba
- (id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3;	// IMP=0x000000000005e2a3
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005e13c
- (id)initWithURL:(id)arg1 parentURL:(id)arg2 sourceAppIdentifier:(id)arg3;	// IMP=0x000000000005e08c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005dfc6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005debd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005dd95

@end
