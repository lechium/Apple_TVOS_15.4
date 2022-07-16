//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TVSPeripheralInfo : NSObject
{
    long long _type;	// 8 = 0x8
    unsigned long long _vendorIdentifier;	// 16 = 0x10
    unsigned long long _productIdentifer;	// 24 = 0x18
}

@property(nonatomic) unsigned long long productIdentifer; // @synthesize productIdentifer=_productIdentifer;
@property(nonatomic) unsigned long long vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000007ee2f
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000007ebdc

@end
