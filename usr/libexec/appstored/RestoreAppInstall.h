//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSNumber, NSString, NSUUID;

@interface RestoreAppInstall
{
    _Bool _fetchLatestVersion;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x00400000001ea96b
@property _Bool fetchLatestVersion; // @synthesize fetchLatestVersion=_fetchLatestVersion;
- (id)description;	// IMP=0x00100000001eab5a
- (MISSING_TYPE *)_logCodeForRestoreType: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001eab28
- (void)softFailWithError:(id)arg1;	// IMP=0x00100000001ea798
- (void)setVid:(id)arg1;	// IMP=0x00100000001ea77f
- (_Bool)isBootstrapping;	// IMP=0x00100000001ea6e3
- (void)hardFailWithError:(id)arg1;	// IMP=0x00100000001ea448
- (id)currentError;	// IMP=0x00100000001ea3b8
@property(readonly) NSUUID *vid;
@property(readonly) NSString *storefront;
@property(readonly) NSNumber *evid;
- (id)errorData;	// IMP=0x00100000001ea322
@property(readonly) _Bool deviceBasedVPP;
@property(readonly) NSNumber *downloaderID;
@property(readonly) NSString *appleID;
@property(readonly) NSNumber *accountID;
- (id)initWithApplicationMetadata:(id)arg1;	// IMP=0x00100000001ea07d

@end
