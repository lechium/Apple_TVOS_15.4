//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessoryCategory, NSString;

@interface HMDAccessoryAdvertisement : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    HMAccessoryCategory *_category;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b0d2ec
@property(readonly, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long associationOptions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b0d1f2
- (unsigned long long)hash;	// IMP=0x0000000000b0d1ae
- (void)setCategory:(id)arg1;	// IMP=0x0000000000b0d175
- (id)description;	// IMP=0x0000000000b0d0b8
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;	// IMP=0x0000000000b0cfdf

@end

