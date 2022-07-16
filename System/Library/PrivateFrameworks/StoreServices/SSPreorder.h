//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDate, NSNumber, NSString, SSItemImageCollection;

@interface SSPreorder : NSObject <SSXPCCoding>
{
    NSNumber *_accountID;	// 8 = 0x8
    NSString *_artistName;	// 16 = 0x10
    SSItemImageCollection *_imageCollection;	// 24 = 0x18
    unsigned long long _itemID;	// 32 = 0x20
    NSString *_itemKind;	// 40 = 0x28
    double _releaseDate;	// 48 = 0x30
    NSString *_releaseDateString;	// 56 = 0x38
    long long _pid;	// 64 = 0x40
    unsigned long long _preorderID;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long storePreorderIdentifier; // @synthesize storePreorderIdentifier=_preorderID;
@property(readonly, nonatomic) unsigned long long storeItemIdentifier; // @synthesize storeItemIdentifier=_itemID;
@property(readonly, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_accountID;
@property(readonly, nonatomic) NSString *releaseDateString; // @synthesize releaseDateString=_releaseDateString;
@property(readonly, nonatomic) long long persistentIdentifier; // @synthesize persistentIdentifier=_pid;
@property(readonly, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) SSItemImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (id)copyXPCEncoding;	// IMP=0x00000000000cb357
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000cb1fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cb199
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_setTitle:(id)arg1;	// IMP=0x00000000000cb0fa
- (void)_setStorePreorderIdentifier:(long long)arg1;	// IMP=0x00000000000cb0f0
- (void)_setStoreItemIdentifier:(long long)arg1;	// IMP=0x00000000000cb0e6
- (void)_setStoreAccountIdentifier:(id)arg1;	// IMP=0x00000000000cb0b8
- (void)_setReleaseDateString:(id)arg1;	// IMP=0x00000000000cb083
- (void)_setReleaseDate:(id)arg1;	// IMP=0x00000000000cb05e
- (void)_setItemKind:(id)arg1;	// IMP=0x00000000000cb029
- (void)_setImageCollection:(id)arg1;	// IMP=0x00000000000caff4
- (void)_setArtistName:(id)arg1;	// IMP=0x00000000000cafbf
@property(readonly, nonatomic) NSDate *releaseDate;
- (id)copyReleaseDateStringWithStyle:(long long)arg1;	// IMP=0x00000000000caf09
- (void)dealloc;	// IMP=0x00000000000caea3
- (id)_initWithPersistentIdentifier:(long long)arg1;	// IMP=0x00000000000cae66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
