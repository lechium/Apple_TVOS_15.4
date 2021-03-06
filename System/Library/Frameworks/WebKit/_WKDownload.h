//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSData, NSString, NSURLRequest, WKFrameInfo, WKWebView;

@interface _WKDownload : NSObject <WKObject, NSCopying>
{
    struct RetainPtr<WKDownload> _download;	// 8 = 0x8
}

+ (id)downloadWithDownload:(id)arg1;	// IMP=0x00000000002795e3
- (id).cxx_construct;	// IMP=0x0000000000279945
- (void).cxx_destruct;	// IMP=0x0000000000279925
@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027990c
@property(readonly, nonatomic) WKFrameInfo *originatingFrame;
@property(readonly, nonatomic) NSData *resumeData;
@property(readonly, nonatomic) _Bool wasUserInitiated;
@property(readonly, copy, nonatomic) NSArray *redirectChain;
@property(readonly, nonatomic) __weak WKWebView *originatingWebView;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)publishProgressAtURL:(id)arg1;	// IMP=0x000000000027976d
- (void)cancel;	// IMP=0x00000000002796f4
- (id)initWithDownload2:(id)arg1;	// IMP=0x0000000000279581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

