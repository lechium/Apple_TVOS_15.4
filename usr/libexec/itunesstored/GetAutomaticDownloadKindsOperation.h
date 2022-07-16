//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, SSAuthenticationContext;

@interface GetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authContext;	// 96 = 0x60
    NSArray *_enabledDownloadKinds;	// 104 = 0x68
}

- (void)run;	// IMP=0x002000000011270f
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSArray *enabledDownloadKinds;
- (void)dealloc;	// IMP=0x00100000001125ac

@end
