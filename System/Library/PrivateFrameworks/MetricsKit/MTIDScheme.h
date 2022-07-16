//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MTIDScheme : NSObject <NSSecureCoding>
{
    _Bool _isDefault;	// 8 = 0x8
    NSString *_idNamespace;	// 16 = 0x10
    long long _idType;	// 24 = 0x18
    long long _rotationSchedule;	// 32 = 0x20
    long long _lifespan;	// 40 = 0x28
    NSArray *_correlations;	// 48 = 0x30
    NSString *_version;	// 56 = 0x38
    NSString *_containerIdentifier;	// 64 = 0x40
    unsigned long long _localHash;	// 72 = 0x48
    unsigned long long _correlationHash;	// 80 = 0x50
    NSArray *_topics;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006dc7
- (void).cxx_destruct;	// IMP=0x00000000000073a9
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(nonatomic) unsigned long long correlationHash; // @synthesize correlationHash=_correlationHash;
@property(nonatomic) unsigned long long localHash; // @synthesize localHash=_localHash;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSArray *correlations; // @synthesize correlations=_correlations;
@property(nonatomic) long long lifespan; // @synthesize lifespan=_lifespan;
@property(nonatomic) long long rotationSchedule; // @synthesize rotationSchedule=_rotationSchedule;
@property(nonatomic) long long idType; // @synthesize idType=_idType;
@property(copy, nonatomic) NSString *idNamespace; // @synthesize idNamespace=_idNamespace;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007008
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006dcf
- (id)dictionaryRepresentation;	// IMP=0x0000000000006a98
- (unsigned long long)calculateHash;	// IMP=0x000000000000687e
- (unsigned long long)hash;	// IMP=0x0000000000006842
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006515
- (id)description;	// IMP=0x0000000000006438
@property(readonly, nonatomic) double maxPastTimeInterval;
@property(readonly, nonatomic) double maxFutureTimeInterval;
@property(readonly, nonatomic) unsigned long long storagePoolSize;
- (void)overrideLifespanMaybe;	// IMP=0x0000000000006158
- (id)initWithNamespace:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000060a7
- (id)initWithNamespace:(id)arg1 options:(id)arg2;	// IMP=0x0000000000005d5b

@end

