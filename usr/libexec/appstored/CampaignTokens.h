//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CampaignTokens : NSObject
{
    NSString *_affiliateToken;	// 8 = 0x8
    NSString *_campaign;	// 16 = 0x10
    NSString *_campaignToken;	// 24 = 0x18
    NSString *_providerToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001d4f8c
@property(readonly, nonatomic) NSString *providerToken; // @synthesize providerToken=_providerToken;
@property(readonly, nonatomic) NSString *campaignToken; // @synthesize campaignToken=_campaignToken;
@property(readonly, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(readonly, nonatomic) NSString *affiliateToken; // @synthesize affiliateToken=_affiliateToken;
- (void)_parseTokens:(id)arg1;	// IMP=0x00100000001d4bf8
- (id)initWithURL:(id)arg1;	// IMP=0x00100000001d4b90

@end
