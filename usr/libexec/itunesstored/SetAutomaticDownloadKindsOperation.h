//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSSet, NSString, SSAuthenticationContext;

@interface SetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    NSSet *_downloadKinds;	// 112 = 0x70
    NSSet *_previousDownloadKinds;	// 120 = 0x78
    _Bool _runsOnlyIfKindsAreDirty;	// 128 = 0x80
    _Bool _shouldSuppressServerDialogs;	// 129 = 0x81
}

- (void)_run;	// IMP=0x00200000000a2708
- (_Bool)_postDownloadKinds:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a2155
- (_Bool)_isFatalError:(id)arg1;	// IMP=0x00100000000a2145
- (id)_copyFilteredDownloadKinds;	// IMP=0x00100000000a1ed5
- (id)uniqueKey;	// IMP=0x00100000000a1ec8
- (_Bool)shouldFailAfterUniquePredecessorError:(id)arg1;	// IMP=0x00100000000a1eb6
- (void)run;	// IMP=0x00100000000a1d10
@property _Bool shouldSuppressServerDialogs;
@property _Bool runsOnlyIfKindsAreDirty;
@property(copy) NSSet *previousDownloadKinds;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSSet *downloadKinds;
- (void)dealloc;	// IMP=0x00100000000a1949
- (id)initWithDownloadKinds:(id)arg1;	// IMP=0x00100000000a18eb

@end
