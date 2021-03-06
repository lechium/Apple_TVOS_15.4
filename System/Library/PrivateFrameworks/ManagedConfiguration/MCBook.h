//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface MCBook : NSObject <NSCopying>
{
    NSString *_author;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_kind;	// 24 = 0x18
    NSString *_fullPath;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
    NSString *_persistentID;	// 48 = 0x30
    NSNumber *_iTunesStoreID;	// 56 = 0x38
    NSString *_buyParams;	// 64 = 0x40
    NSString *_state;	// 72 = 0x48
    NSNumber *_downloadIdentifier;	// 80 = 0x50
    MCBook *_previousVersion;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000015e24
@property(retain, nonatomic) MCBook *previousVersion; // @synthesize previousVersion=_previousVersion;
@property(retain, nonatomic) NSNumber *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) NSNumber *iTunesStoreID; // @synthesize iTunesStoreID=_iTunesStoreID;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
- (id)description;	// IMP=0x0000000000015929
- (void)updateBookAttributesByCopyingFromBook:(id)arg1;	// IMP=0x000000000001585b
- (id)friendlyName;	// IMP=0x000000000001573a
- (id)manifestDictionary;	// IMP=0x000000000001555d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015351
- (id)initWithManifestDictionary:(id)arg1;	// IMP=0x0000000000015179
- (id)init;	// IMP=0x0000000000015165
- (id)initWithMDMBook:(id)arg1;	// IMP=0x0000000000021224

@end

