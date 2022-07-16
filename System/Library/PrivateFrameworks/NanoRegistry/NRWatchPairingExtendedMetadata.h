//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding>
{
    _Bool _postFailsafeObliteration;	// 8 = 0x8
    _Bool _isCellularEnabled;	// 9 = 0x9
    long long _chipID;	// 16 = 0x10
    long long _pairingVersion;	// 24 = 0x18
    NSString *_productType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000030f94
- (void).cxx_destruct;	// IMP=0x0000000000031211
@property(nonatomic) _Bool isCellularEnabled; // @synthesize isCellularEnabled=_isCellularEnabled;
@property(nonatomic) _Bool postFailsafeObliteration; // @synthesize postFailsafeObliteration=_postFailsafeObliteration;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long pairingVersion; // @synthesize pairingVersion=_pairingVersion;
@property(nonatomic) long long chipID; // @synthesize chipID=_chipID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000310f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030ff7
- (id)description;	// IMP=0x0000000000030f9c

@end
