//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, SSFamilyCircle;

@interface FamilyCircleOperation : ISOperation
{
    long long _authenticationPromptStyle;	// 96 = 0x60
    NSData *_clientAuditTokenData;	// 104 = 0x68
    SSFamilyCircle *_familyCircle;	// 112 = 0x70
    _Bool _fetchITunesAccountNames;	// 120 = 0x78
    NSString *_userAgent;	// 128 = 0x80
}

@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool fetchITunesAccountNames; // @synthesize fetchITunesAccountNames=_fetchITunesAccountNames;
@property(readonly, nonatomic) SSFamilyCircle *familyCircle; // @synthesize familyCircle=_familyCircle;
@property(retain, nonatomic) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
- (void)_writeCacheWithFamilyCircle:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000000112d6
- (id)_familyCircleForDictionary:(id)arg1;	// IMP=0x001000000001096e
- (id)_cachePath;	// IMP=0x00100000000108e2
- (id)_cachedFamilyCircleWithAccountIdentifier:(id)arg1;	// IMP=0x00100000000106f4
- (void)run;	// IMP=0x00100000000101ac
- (void)dealloc;	// IMP=0x0010000000010146

@end
