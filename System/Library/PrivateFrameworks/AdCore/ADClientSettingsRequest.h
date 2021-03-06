//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_currentSearchLandingAdsSettingParams;	// 8 = 0x8
    NSMutableArray *_currentSettingParams;	// 16 = 0x10
    NSString *_iAdIDString;	// 24 = 0x18
}

+ (Class)currentSearchLandingAdsSettingParamsType;	// IMP=0x000000000000ccc5
+ (Class)currentSettingParamsType;	// IMP=0x000000000000cbf3
+ (id)options;	// IMP=0x000000000000cacd
- (void).cxx_destruct;	// IMP=0x000000000000debe
@property(retain, nonatomic) NSMutableArray *currentSearchLandingAdsSettingParams; // @synthesize currentSearchLandingAdsSettingParams=_currentSearchLandingAdsSettingParams;
@property(retain, nonatomic) NSMutableArray *currentSettingParams; // @synthesize currentSettingParams=_currentSettingParams;
@property(retain, nonatomic) NSString *iAdIDString; // @synthesize iAdIDString=_iAdIDString;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000dbe7
- (unsigned long long)hash;	// IMP=0x000000000000db7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000da82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d776
- (void)copyTo:(id)arg1;	// IMP=0x000000000000d5f3
- (void)writeTo:(id)arg1;	// IMP=0x000000000000d3c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000d3ba
- (id)dictionaryRepresentation;	// IMP=0x000000000000cd85
- (id)description;	// IMP=0x000000000000ccd6
- (id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000cca8
- (unsigned long long)currentSearchLandingAdsSettingParamsCount;	// IMP=0x000000000000cc8b
- (void)addCurrentSearchLandingAdsSettingParams:(id)arg1;	// IMP=0x000000000000cc21
- (void)clearCurrentSearchLandingAdsSettingParams;	// IMP=0x000000000000cc04
- (id)currentSettingParamsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000cbd6
- (unsigned long long)currentSettingParamsCount;	// IMP=0x000000000000cbb9
- (void)addCurrentSettingParams:(id)arg1;	// IMP=0x000000000000cb4f
- (void)clearCurrentSettingParams;	// IMP=0x000000000000cb32
@property(readonly, nonatomic) _Bool hasIAdIDString;

@end

