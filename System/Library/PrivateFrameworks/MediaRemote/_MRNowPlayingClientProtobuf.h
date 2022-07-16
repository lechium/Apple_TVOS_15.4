//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSMutableArray *_extendedBundleIdentifierHierarchys;	// 24 = 0x18
    NSString *_iconURL;	// 32 = 0x20
    int _nowPlayingVisibility;	// 40 = 0x28
    NSString *_parentApplicationBundleIdentifier;	// 48 = 0x30
    int _processIdentifier;	// 56 = 0x38
    int _processUserIdentifier;	// 60 = 0x3c
    _MRColorProtobuf *_tintColor;	// 64 = 0x40
    _Bool _isEmptyDeprecated;	// 72 = 0x48
    struct {
        unsigned int nowPlayingVisibility:1;
        unsigned int processIdentifier:1;
        unsigned int processUserIdentifier:1;
        unsigned int isEmptyDeprecated:1;
    } _has;	// 76 = 0x4c
}

+ (Class)extendedBundleIdentifierHierarchyType;	// IMP=0x000000000013a16e
- (void).cxx_destruct;	// IMP=0x000000000013b9a8
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) _Bool isEmptyDeprecated; // @synthesize isEmptyDeprecated=_isEmptyDeprecated;
@property(retain, nonatomic) NSMutableArray *extendedBundleIdentifierHierarchys; // @synthesize extendedBundleIdentifierHierarchys=_extendedBundleIdentifierHierarchys;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) _MRColorProtobuf *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) int processUserIdentifier; // @synthesize processUserIdentifier=_processUserIdentifier;
@property(retain, nonatomic) NSString *parentApplicationBundleIdentifier; // @synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013b5d8
- (unsigned long long)hash;	// IMP=0x000000000013b466
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013b20b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013aee4
- (void)copyTo:(id)arg1;	// IMP=0x000000000013ad00
- (void)writeTo:(id)arg1;	// IMP=0x000000000013aaa5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013aa98
- (id)dictionaryRepresentation;	// IMP=0x000000000013a28e
- (id)description;	// IMP=0x000000000013a1df
@property(readonly, nonatomic) _Bool hasIconURL;
@property(nonatomic) _Bool hasIsEmptyDeprecated;
- (id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013a151
- (unsigned long long)extendedBundleIdentifierHierarchysCount;	// IMP=0x000000000013a134
- (void)addExtendedBundleIdentifierHierarchy:(id)arg1;	// IMP=0x000000000013a0ca
- (void)clearExtendedBundleIdentifierHierarchys;	// IMP=0x000000000013a0ad
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasTintColor;
- (int)StringAsNowPlayingVisibility:(id)arg1;	// IMP=0x0000000000139fd4
- (id)nowPlayingVisibilityAsString:(int)arg1;	// IMP=0x0000000000139f56
@property(nonatomic) _Bool hasNowPlayingVisibility;
@property(nonatomic) int nowPlayingVisibility; // @synthesize nowPlayingVisibility=_nowPlayingVisibility;
@property(nonatomic) _Bool hasProcessUserIdentifier;
@property(readonly, nonatomic) _Bool hasParentApplicationBundleIdentifier;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(nonatomic) _Bool hasProcessIdentifier;

@end
