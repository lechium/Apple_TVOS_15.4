//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSMutableAppInfo.h>

@class NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBMutableAppInfo : PBSMutableAppInfo
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

+ (long long)_mapApplicationTypeString:(id)arg1;	// IMP=0x0020000000134b60
+ (long long)_mapInstallFailureReason:(id)arg1;	// IMP=0x0010000000134a60
+ (long long)_mapInstallType:(unsigned long long)arg1;	// IMP=0x0010000000134a10
+ (long long)_mapProgressState:(long long)arg1;	// IMP=0x0010000000134950
+ (long long)_mapApplicationGenreID:(id)arg1;	// IMP=0x00100000001346d0
+ (long long)_mapApplicationType:(unsigned long long)arg1;	// IMP=0x0010000000134640
- (void).cxx_destruct;	// IMP=0x0020000000134d10
@property(retain, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(retain, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x0010000000134620
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001345d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000134580
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000134070
- (id)initWithAppInfo:(id)arg1;	// IMP=0x0010000000133f30
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x0010000000133a80
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00100000001333f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

