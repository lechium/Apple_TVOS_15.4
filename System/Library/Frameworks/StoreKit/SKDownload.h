//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006257
- (id)copyXPCEncoding;	// IMP=0x000000000000614b
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000005ec5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005d8a
- (void)_setVersion:(id)arg1;	// IMP=0x0000000000005d59
- (void)_setTransaction:(id)arg1;	// IMP=0x0000000000005cb8
- (void)_setTimeRemaining:(double)arg1;	// IMP=0x0000000000005ca9
- (void)_setProgress:(float)arg1;	// IMP=0x0000000000005c9a
- (void)_setError:(id)arg1;	// IMP=0x0000000000005c69
- (void)_setDownloadState:(long long)arg1;	// IMP=0x0000000000005c5b
- (void)_setContentURL:(id)arg1;	// IMP=0x0000000000005c2a
- (void)_setContentLength:(id)arg1;	// IMP=0x0000000000005bf9
- (void)_setContentIdentifier:(id)arg1;	// IMP=0x0000000000005bc8
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;	// IMP=0x00000000000059cf
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) long long expectedContentLength;
@property(readonly, nonatomic) long long contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;	// IMP=0x0000000000005886

@end

