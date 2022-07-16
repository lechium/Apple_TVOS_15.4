//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/NSURLSessionDelegate-Protocol.h>

@class NSString, NSURLSession;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_urlSession;	// 8 = 0x8
    NSString *_distribution;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000036680a
@property(retain, nonatomic) NSString *distribution; // @synthesize distribution=_distribution;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000000366703

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
