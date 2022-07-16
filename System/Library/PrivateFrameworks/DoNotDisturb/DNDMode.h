//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface DNDMode : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_symbolImageName;	// 16 = 0x10
    NSString *_tintColorName;	// 24 = 0x18
    NSString *_modeIdentifier;	// 32 = 0x20
    long long _semanticType;	// 40 = 0x28
    unsigned long long _visibility;	// 48 = 0x30
    NSUUID *_identifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013307
+ (id)defaultTintColorName;	// IMP=0x00000000000129c3
+ (id)placeholderModeFromMode:(id)arg1;	// IMP=0x0000000000012598
+ (id)defaultMode;	// IMP=0x0000000000012504
+ (unsigned long long)maxUIAddableModes;	// IMP=0x00000000000124f9
- (void).cxx_destruct;	// IMP=0x00000000000136ec
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) long long semanticType; // @synthesize semanticType=_semanticType;
@property(readonly, copy, nonatomic) NSString *tintColorName; // @synthesize tintColorName=_tintColorName;
@property(readonly, copy, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(readonly, copy, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001351d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001330f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000132d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000132ce
- (id)description;	// IMP=0x0000000000013134
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012c74
- (unsigned long long)hash;	// IMP=0x0000000000012b35
- (id)_name;	// IMP=0x0000000000012b27
@property(readonly, copy, nonatomic) NSURL *setupURL;
@property(readonly, copy, nonatomic) NSURL *settingsURL;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @dynamic placeholder;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_initWithMode:(id)arg1;	// IMP=0x0000000000012881
- (id)initWithName:(id)arg1 modeIdentifier:(id)arg2 symbolImageName:(id)arg3 tintColorName:(id)arg4 semanticType:(long long)arg5 visibility:(unsigned long long)arg6 identifier:(id)arg7;	// IMP=0x00000000000126fe
- (id)initWithName:(id)arg1 modeIdentifier:(id)arg2 symbolImageName:(id)arg3 tintColorName:(id)arg4 semanticType:(long long)arg5;	// IMP=0x00000000000126d3

@end

