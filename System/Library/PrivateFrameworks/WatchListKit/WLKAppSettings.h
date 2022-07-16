//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding>
{
    _Bool _obsolete;	// 8 = 0x8
    NSString *_channelID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    unsigned long long _accessStatus;	// 32 = 0x20
    NSString *_externalID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000055eb2
+ (_Bool)isExternalID:(id)arg1 equalToExternalID:(id)arg2;	// IMP=0x0000000000055b93
- (void).cxx_destruct;	// IMP=0x0000000000056228
@property(nonatomic) _Bool obsolete; // @synthesize obsolete=_obsolete;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) unsigned long long accessStatus; // @synthesize accessStatus=_accessStatus;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056127
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056043
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000055eba
- (id)_statusStrings;	// IMP=0x0000000000055e62
- (id)JSONDictionary;	// IMP=0x0000000000055d16
- (id)description;	// IMP=0x0000000000055c1c
- (unsigned long long)hash;	// IMP=0x0000000000055bbd
- (_Bool)isEqualToAppSettings:(id)arg1;	// IMP=0x0000000000055a39
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000559d2
- (id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4;	// IMP=0x00000000000558e0

@end
