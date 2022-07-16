//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSUUID, RTAddress, RTLocation, RTMapItemExtendedAttributes;

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _disputed;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSData *_geoMapItemHandle;	// 24 = 0x18
    unsigned long long _source;	// 32 = 0x20
    RTAddress *_address;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    unsigned long long _muid;	// 56 = 0x38
    long long _resultProviderID;	// 64 = 0x40
    RTLocation *_location;	// 72 = 0x48
    NSString *_displayLanguage;	// 80 = 0x50
    RTMapItemExtendedAttributes *_extendedAttributes;	// 88 = 0x58
    NSDate *_creationDate;	// 96 = 0x60
    NSDate *_expirationDate;	// 104 = 0x68
    double _weight;	// 112 = 0x70
}

+ (double)weightForSource:(unsigned long long)arg1;	// IMP=0x000000000001561c
+ (double)weightForExtendedAttributes:(id)arg1;	// IMP=0x000000000001559c
+ (id)sourceToString:(unsigned long long)arg1;	// IMP=0x00000000000150c4
+ (_Bool)hasKnownTypeItem:(id)arg1;	// IMP=0x0000000000015017
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014a8f
- (void).cxx_destruct;	// IMP=0x000000000001574a
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) _Bool disputed; // @synthesize disputed=_disputed;
@property(retain, nonatomic) RTMapItemExtendedAttributes *extendedAttributes; // @synthesize extendedAttributes=_extendedAttributes;
@property(readonly, copy, nonatomic) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) RTAddress *address; // @synthesize address=_address;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSData *geoMapItemHandle; // @synthesize geoMapItemHandle=_geoMapItemHandle;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)updateWeightWithSource:(unsigned long long)arg1 extendedAttributes:(id)arg2;	// IMP=0x0000000000015499
- (_Bool)validMUID;	// IMP=0x00000000000153fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014fa0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014dd4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014a97
- (long long)compare:(id)arg1;	// IMP=0x0000000000014a07
- (_Bool)isEqualToMapItem:(id)arg1;	// IMP=0x0000000000014779
- (unsigned long long)hash;	// IMP=0x00000000000146ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014687
- (id)description;	// IMP=0x000000000001453c
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 address:(id)arg3 location:(id)arg4 source:(unsigned long long)arg5 muid:(unsigned long long)arg6 resultProviderID:(long long)arg7 geoMapItemHandle:(id)arg8 creationDate:(id)arg9 expirationDate:(id)arg10 extendedAttributes:(id)arg11 displayLanguage:(id)arg12 disputed:(_Bool)arg13;	// IMP=0x00000000000140a2
- (id)init;	// IMP=0x0000000000014073

@end

