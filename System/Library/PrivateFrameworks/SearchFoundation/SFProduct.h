//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFProduct-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int buyable:1;
    } _has;	// 8 = 0x8
    _Bool _buyable;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSString *_productIdentifier;	// 24 = 0x18
    NSURL *_availabilityURL;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a5520
- (void).cxx_destruct;	// IMP=0x00000000001a5869
@property(nonatomic) _Bool buyable; // @synthesize buyable=_buyable;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSURL *availabilityURL; // @synthesize availabilityURL=_availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a5741
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a55f2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a5540
- (_Bool)hasBuyable;	// IMP=0x00000000001a5535
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001dce83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

