//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString;

@interface FetchTVProviderAppsTask
{
    NSArray *_headboardDSIDLessApps;	// 8 = 0x8
    NSSet *_tvProviderDSIDLessApps;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000aeac
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) NSSet *tvProviderDSIDLessApps; // @synthesize tvProviderDSIDLessApps=_tvProviderDSIDLessApps;
@property(readonly, nonatomic) NSArray *headboardDSIDLessApps; // @synthesize headboardDSIDLessApps=_headboardDSIDLessApps;
- (void)_lookupTVProviderAppsWithOutError:(id *)arg1;	// IMP=0x001000000000ae62
- (void)_lookupHeadboardAppsWithOutError:(id *)arg1;	// IMP=0x001000000000a217
- (void)main;	// IMP=0x001000000000a16a

@end

