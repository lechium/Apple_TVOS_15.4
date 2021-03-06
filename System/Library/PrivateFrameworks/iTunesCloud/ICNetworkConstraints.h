//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _dataAllowedFallbackValue;	// 8 = 0x8
    _Bool _cellularDataAllowedFallbackValue;	// 9 = 0x9
    _Bool _wiFiDataAllowedFallbackValue;	// 10 = 0xa
    NSMutableDictionary *_networkTypeToDataAllowed;	// 16 = 0x10
    NSMutableDictionary *_networkTypeToSizeLimit;	// 24 = 0x18
}

+ (id)constraintsForSystemApplicationType:(long long)arg1;	// IMP=0x00000000001c718b
+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1;	// IMP=0x00000000001c69fb
- (void).cxx_destruct;	// IMP=0x00000000001c63ee
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;	// IMP=0x00000000001c6348
- (id)sizeLimitForNetworkType:(long long)arg1;	// IMP=0x00000000001c62e1
- (_Bool)shouldAllowDataForWiFiNetworkTypes;	// IMP=0x00000000001c62d8
- (_Bool)shouldAllowDataForCellularNetworkTypes;	// IMP=0x00000000001c62cf
- (_Bool)shouldAllowDataForNetworkType:(long long)arg1;	// IMP=0x00000000001c6200
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c61cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c61c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c60a4
- (unsigned long long)hash;	// IMP=0x00000000001c3393
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000001c31a4
- (id)init;	// IMP=0x00000000001c3166

@end

